#include <iostream>

using namespace std;

class point
{
public:
    float x;
    float y;
    point();
    point(float x, float y);
    void show_point();
    ~point();
};

point::point()
{
    cout << "Default constructor called";
}

point::point(float x, float y)
{
    this->x = x;
    this->y = y;
}

void point::show_point()
{

    cout << "(" << this->x << "," << this->y << ")";
}

point::~point()
{
}

class Shape
{
public:
    int num_side;
    point *points;
    Shape();
    ~Shape();
    float get_area();
};

Shape::Shape()
{
    cout << "Shape Constructor called";
    points = NULL;
}

Shape::~Shape()
{
}

float Shape::get_area()
{
    return -1.0;
}

class Triangle : public Shape
{
private:
    /* data */
public:
    Triangle(/* args */);
    ~Triangle();
    void set_triangle(point *point_ptr);
    float get_area();
    void show_triangle();
};

Triangle::Triangle()
{
    this->num_side = 3;
}

Triangle::~Triangle()
{
}
void Triangle::set_triangle(point *ptr_points)
{
    this->points = ptr_points;
}

float Triangle::get_area()
{
    float x0, y0, x1, y1, x2, y2;
    point *t = this->points;
    x0 = t->x;
    y0 = t->y;
    t++;
    x1 = t->x;
    y1 = t->y;
    t++;
    x2 = t->x;
    y2 = t->y;
    t++;

    return abs(x0 + x1 + x2);
}

void Triangle::show_triangle()
{
    point *temp = this->points;

    for (int i = 0; i < 3; i++)
    {
        temp->show_point();

        temp++;
    }
}

Triangle *create_triangle()
{
    Triangle *t1 = new Triangle;
    // these points are local variable of function
    point p1(0, 0);
    point p2(1, 1);
    point p3(2, 2);

    // !the problem here is that since the array of pointer is created on stack it will be deleted as the stack is pop therefore we have to create a dynamic array of pointer
    // point point_array[3];
    // point_array[0] = p1;
    // point_array[1] = p2;
    // point_array[2] = p3;
    // t1->set_triangle(point_array) as array is address of first element

    point *ptr_dynamic_points = new point[3];
    ptr_dynamic_points[0] = p1;
    ptr_dynamic_points[1] = p2;
    ptr_dynamic_points[2] = p3; // the value of point p3 will store at the 2nd index of dynamic array

    t1->set_triangle(ptr_dynamic_points); // here i am setting the triangle point by passing the pointer of dynamic array to set function but when stack end ptr_dynamic_point will be removed but we have save that address to set_triangle parameter

    return t1;
}

int main()
{
    Triangle *triangle = create_triangle();

    float area = triangle->get_area();
    cout << endl <<"The area is ";
    cout << area << endl;
    triangle->show_triangle();

    return 0;
}