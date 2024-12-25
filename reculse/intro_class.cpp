#include <iostream>
using namespace std;

class Student{

    string name = "";
    int roll =  0;
    int marks = 0;
    string department = "";

    public:
    void set_name(string name);
    void set_marks(int marks);
    void set_roll(int roll);
    void set_department(string depart);
    void display_std_info();
};

void Student::set_name(string name){
    Student::name = name;
    }
void Student::set_marks(int marks){
    Student::marks = marks;
    }
void Student::set_department(string depart){
    Student::department = depart;
    }
void Student::set_roll(int roll){
    Student::roll = roll;
    }

void Student::display_std_info(){
    cout<< "Student Name " << Student::name << endl;
    cout<< "Student Roll " << Student::roll << endl;
    cout<< "Student Marks " << Student::marks << endl;
    cout<< "Student Department " << Student::department << endl;
}

int main(){

    Student *std_1 = new Student;
    std_1->set_name("Ukasha");
    std_1->set_marks(122);
    std_1->set_department("Computer system Engineering");
    std_1->set_roll(115);

    std_1->display_std_info();

    delete std_1;

    return 0;
}