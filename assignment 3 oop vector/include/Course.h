#ifndef COURSE_H
#define COURSE_H

#define FCIVECTOR_H


//#include <string>
#include <iostream>
using namespace std;
class Course
{

    private:
        string coursename,coursecode;
        char coursegrade;
        float coursepoint;
        int courseyear,coursesemester;

    public:
        Course();
       void setcoursename(string);
        void setcoursegrade(char);
        void setcoursecode(string);
        void setcoursepoint(float);
        void setcourseyear(int);
        void setcoursesemester(int);
        void printinfo();
        friend ostream &operator << (ostream &output,Course &c);


    protected:

};

#endif // COURSE_H
