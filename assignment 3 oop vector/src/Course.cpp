#include "Course.h"

#define FCIVECTOR_H
Course::Course()
{
    //ctor
}
void Course:: setcoursename(string coursename)
        {
            this->coursename=coursename;

        }
void Course ::setcoursecode(string coursecode)
        {
            this->coursecode=coursecode;

        }

        void Course ::setcoursegrade(char coursegrade)
        {
            this->coursegrade=coursegrade;

        }

        void Course ::setcoursepoint(float coursepoint)
        {
            this->coursepoint=coursepoint;

        }

        void Course ::setcourseyear(int courseyear)
                {
                    this->courseyear=courseyear;

                }
        void Course ::setcoursesemester(int coursesemester)
                {
                    this->coursesemester=coursesemester;

                }
        void Course:: printinfo()
        {
            cout<<"course name : "<<coursename<<endl<<"course code : "<<coursecode<<endl
            <<"course grade : "<<coursegrade<<endl<<
            "course point : "<<coursepoint<<endl
            <<"course year : "<<courseyear<<endl
            <<"course semester : "<<coursesemester<<endl;
        }


    ostream &operator << (ostream &output,Course &c)
{
    output<<"Course name : "<<c.coursename<<endl<<
    "Course Code :"<<c.coursecode<<endl
    <<"Course grade :"<<c.coursegrade<<endl<<
    "Course point : "<<c.coursepoint<<endl<<
    "Course year :"<<c.courseyear<<endl<<
    "Course semester :"<<c.coursesemester<<endl;
    return output;
}










