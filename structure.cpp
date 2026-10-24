#include <iostream>
using namespace std;

struct Date{
    int day , month , year ;
};

struct Patient{
    int id;
    string name ;
    int age ;
    string disease;
    Date admission ;
    Date discharge;
};

int main(){
    Patient p;
    cout<<"Enter patient ID:";
    cin>>p.id;

    cout<<"Enter patient name:";
    cin>>p.name;

    cout<<"Enter patient age:";
    cin>>p.age;

    cout<<"Enter patient disease:";
    cin>>p.disease;

    cout<<"Enter admission date(dd mm yy)";
    cin>>p.admission.day >> p.admission.month >> p.admission.year;

    cout<<"Enter discharge date(dd mm yy)";
    cin>>p.discharge.day >> p.discharge.month >> p.discharge.year;

    cout<<"--PATIENT DETAILS--";
    cout<<"ID:"<<p.id<<endl;
    cout<<"Name:"<<p.name<<endl;
    cout<<"Age:"<<p.age<<endl;
    cout<<"Disease:"<<p.disease<<endl;
    cout<<"Admission Date:"<<p.admission.day<<"/"<<p.admission.month<<"/"<<p.admission.year<<endl;
    cout<<"Discharge Date:"<<p.discharge.day<<"/"<<p.discharge.month<<"/"<<p.discharge.year<<endl;
    return 0;
}
