#include "Student.h"
#include <iostream>
Student::Student()
{

}

void Student::setid(int sid)
{
    this->sid=sid;

}

void Student::setsname(string sname)
{
    this->sname=sname;

}


void Student::setsdepartment(string sdepartment)
{
    this->sdepartment=sdepartment;

}

void Student::printInfo()
{
    cout<<"name : "<<sname<<endl<<
    cout<<"ID : "<<sid<<endl<<
    cout<<"Department : "<<sdepartment<<endl;




}


ostream &operator << (ostream &output,Student &s)
{
    output<<"name : "<< s.sname<<endl<<
    "ID : "<<s.sid<<endl<<
    "Department : "<<s.sdepartment<<endl;
    return output;
}

void Student:: printcoursess()
{
    for(int i=0;i<courses.Size();i++)
    {
        cout<<courses[i];

    }
}
