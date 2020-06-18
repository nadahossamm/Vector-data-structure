#ifndef STUDENT_H
#define STUDENT_H
#include <Fcivector.h>
#include <Course.h>
#include <iostream>
using namespace std;
class Student
{
    public:

        Fcivector<Course> courses;
        Student();
    void setid(int);
    void setsname(string);
    void setsdepartment(string);

    void printInfo();
    void  ss();
    void  printcoursess();

    friend ostream &operator << (ostream &output,Student &s);

    private:
        string sname;
        string sdepartment;
        int sid;

};

#endif // STUDENT_H
