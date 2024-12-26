#include<iostream>
using namespace std;

class DataBase
{
private:
    int std_id;
    string name;
    int roll;
    int marks;
    static int Total_std;
public:
    DataBase(int std_id, string name, int roll, int marks);
    ~DataBase();
    static int get_std(){
        return Total_std;
    }
};

int DataBase::Total_std = 0;

DataBase::DataBase(int std_id, string name, int roll, int marks){
    this->std_id = std_id;
    this->name = name;
    this->marks = marks;
    this->roll = roll;
    Total_std++;
}


DataBase::~DataBase()
{
    cout<< "destructor is called " << endl;
}



int main(){
    DataBase * std ;
    std = new DataBase(112,"UKasha", 134, 33);
    delete std; //Dangling pointer 
    std =  NULL; // fixing dandling
    std = new DataBase(112,"inshad", 134, 33);
    delete std; //Dangling pointer 
    std =  NULL; // fixing dandling
    std = new DataBase(112,"Urwah", 134, 33);
    delete std; //Dangling pointer 
    std =  NULL; // fixing dandling
    std = new DataBase(112,"Minaal", 134, 33);
    delete std; //Dangling pointer 
    std =  NULL; // fixing dandling

    cout << "Total Std:" <<DataBase::get_std() << endl;


    return 0;
}