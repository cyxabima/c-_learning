#include <iostream>
#include <memory> // For smart pointers
using namespace std;

class Student{
    public:

    string name = "";
    int roll =  0;
    int marks = 0;
    string department = "";

    void add_name(string name);
    void add_marks(int marks);
    void add_roll(int roll);
    void add_department(string depart);
    void display_std_info();
};

void Student::add_name(string name){
    // Student::name = name;
    this->name = name; // better approach
    }
void Student::add_marks(int marks){
    Student::marks = marks;
    }
void Student::add_department(string depart){
    Student::department = depart;
    }
void Student::add_roll(int roll){
    Student::roll = roll;
    }

void Student::display_std_info(){
    cout<< "Student Name " << Student::name << endl;
    cout<< "Student Roll " << Student::roll << endl;
    cout<< "Student Marks " << Student::marks << endl;
    cout<< "Student Department " << Student::department << endl;
}



int main() {
    std::unique_ptr<Student> student = std::make_unique<Student>();
    student->add_name("Alice");
    student->add_roll(101);
    student->add_marks(95);
    student->add_department("Computer Science");
    student->display_std_info();
    // No need to manually delete; `std::unique_ptr` automatically manages memory
    return 0;
}
