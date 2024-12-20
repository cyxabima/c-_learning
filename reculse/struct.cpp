#include <iostream>
using namespace std;

struct student
{   string Name;
    int Roll;
    int Marks;
    float percentage ;
    char Grade ;

};


int main(){

    student s1;
    s1.Name = "Ukasha";
    s1.Roll = 115;
    s1.Marks = 100;
    s1.percentage = 99.09;
    s1.Grade = 'A';
    student class_9 [2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Name: ";
        cin>> class_9[i].Name;
        cout << "Roll: ";
        cin>> class_9[i].Roll;
        cout << "Grade: ";
        cin>> class_9[i].Grade;
        cout << "Percentage: ";
        cin>> class_9[i].percentage;
        cout << "Marks: ";
        cin >> class_9[i].Marks;
    }
    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
    cout << "Name: " << class_9[i].Name <<endl << "Roll: " << class_9[i].Roll <<endl <<"Marks: "<<class_9[i].Marks <<endl << "Percentage: " << class_9[i].percentage <<endl << "Grade: " << class_9[i].Grade <<endl;
        /* code */
    }
    
    return 0;
}