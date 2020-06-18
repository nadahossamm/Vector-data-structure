#include <iostream>
#include <vector>
#include "Fcivector.h"
#include "Course.h"
#include "Student.h"
#include <windows.h>
///nada hossam 20180308
//#include <string>

using namespace std;
void Main();
template <typename t>

void operation(Fcivector<t> temp);
void operation2(Fcivector <Student> student);

int main()
{

    Fcivector<int> vec;
    vec.push_Back(5);
    vec.push_Back(4);
    vec.push_Back(3);

    cout<< vec.Find(4);
    //cout<< vec.Find(3);


    //Main();

/*2
nada
20180308
cs
1
5
5
5
5
5
5
shahy
201488
ss
1
ss
dd
s
4
5
6*/

 return 0;
}
void Main()
{
    cout<<"Insert type of vector you would like to create:"<<endl;
    cout<<"1. list of integer"<<endl;
    cout<<"2. list of character"<<endl;
    cout<<"3. list of string"<<endl;
    cout<<"4. list of float"<<endl;
    cout<<"5. list of students"<<endl;
    cout<<"6. Exit"<<endl;
    p:
    int num;
    cin>>num;

     if(num==1)
    {
        Fcivector<int> integer;
        cout<<"A vector of integer is created successfully."<<endl;
        operation(integer);
    }

    else if(num==2)
    {
        Fcivector<char> character;
        cout<<"A vector of character is created successfully."<<endl;
        operation(character);
    }


   else if(num==3)
    {
        Fcivector<string> String;
        cout<<"A vector of String is created successfully."<<endl;
        operation(String);
    }


    else if(num==4)
    {
        Fcivector<float> Float;
        cout<<"A vector of float is created successfully."<<endl;
        operation(Float);
    }
    else if(num==5)
    {
        Fcivector <Student> student;Student s;Course c;
       // operation2(student,s,c);
        operation2(student);


    }

    else if(num==6)
    {
        exit(0);
    }
    else
    {
        cout<<"Enter the write answer"<<endl;
        goto p;
    }
}
template <typename t>
void operation(Fcivector<t> temp)
{
    a:
    cout<<"What kind of operation would you like to perform?"<<endl;
    cout<< "1. Add element"<<endl<<
    "2. Remove last element."<<endl<<
    "3. Insert element at certain position."<<endl<<
    "4. Erase element from a certain position."<<endl<<
    "5. Clear."<<endl<<
    "6. Display first element."<<endl<<
    "7. Display last element."<<endl<<
    "8. Display element at certain position."<<endl<<
    "9. Display vector size."<<endl<<
    "10. Display vector capacity."<<endl<<
    "11. Is empty?"<<endl<<
    "12. print elements in vector"<<endl;

    int num2;
    cin>>num2;

if (num2==1)///pushback
{
    cout<<"How many elements you would like to add?"<<endl;

    int numadd;
        cin>>numadd;
    t element;
    cout<<"Enter the elements you want to add"<<endl;

    for(int i=0;i<numadd;i++)
    {
        cin>>element;
        temp.push_Back(element);

    }
            cout<<"The elements added successfully"<<endl<<endl;


}
else if(num2==2)///pop back
{
    temp.pop_Back();
}
else if(num2==3)///insert
{
    t *p;
    cout<<"Enter position you want "<<endl;
    int X;
    cin>>X;
    cout<<"Enter value you want to add "<<endl;
    t Z;
    cin>>Z;
    p=temp.Begin()+X;///to get address of index we need to add
    temp.Insert(p,Z);
}
else if(num2==4)///erase
{
    t *aa;
    int index;
    cout<<"Enter the index you want to delete"<<endl;
     cin>>index;
     aa=temp.Begin()+index;
    temp.Erase(aa);
    cout<<"The  element deleted successfully"<<endl;



}

else if(num2==5)///clear
{
    temp.Clear();
    cout<<"All elements deleted successfully"<<endl;

}
else if(num2==6)///front
    {
    cout<<temp.Front()<<endl;
    }
else if(num2==7)///back
{

    cout<<temp.Back()<<endl;

}

else if(num2==8)///operator
{
    int z;
    cout<<"Enter index"<<endl;
    cin>>z;
    cout<<temp[z];

}
else if(num2==9)///size
{
   cout<<"The size is : "<<temp.Size()<<endl;

}
else if(num2==10)///capacity
{
cout<<"The capacity is "<<temp.Capacity()<<endl;
}
else if(num2==11)///empty
{
  int z=temp.Empty();
    if(z==1)
        cout<<"Empty"<<endl;
    else if(z==0)
    cout<<"Not Empty"<<endl;
}

else if(num2==12)///print
{
    temp.print();
}
u:
cout<<"Would you like to perform other operations (y or n)?"<<endl;
char w;
cin>>w;
if(w=='y'){goto a;}
else if(w=='n')
{
    Main();
}
else if(w!='y'&&w!='n')
{
    cout<<"Please enter the write answer"<<endl;
    goto u;
}
}

void operation2(Fcivector <Student> student)///for student
{
    int m=-1;
    Student s;
    Course c;
    b:
    cout<<"What kind of operation would you like to perform?"<<endl;
    cout<< "1. Add element"<<endl<<
"2. Remove last element."<<endl<<
"3. Insert element at certain position."<<endl<<
"4. Erase element from a certain position."<<endl<<
"5. Clear."<<endl<<
"6. Display first element."<<endl<<
"7. Display last element."<<endl<<
"8. Display element at certain position."<<endl<<
"9. Display vector size."<<endl<<
"10. Display vector capacity."<<endl<<
"11. Is empty?"<<endl;
int num2;
cin>>num2;
int elem;


if(num2==1)///pushback
{
    Student s;///to make object=0
    Course c;
    int r;
cout<<"how many elements you want to add?"<<endl;
cin>>elem;
for(int i=0;i<elem;i++)
{
cout<<"For student number "<< i+1<<endl;
cout<<"Enter your name"<<endl;
string n;
cin>>n;
s.setsname(n);
cout<<"Enter your id"<<endl;
int d;
cin>>d;
s.setid(d);
cout<<"Enter your department"<<endl;
string z;
cin>>z;
s.setsdepartment(z);
student.push_Back(s);
cout<<"how many courses you want to add?"<<endl;
m++;
cin>>r;
for(int j=0;j<r;j++)///adding courses for student
{
cout<<"For course number "<<j+1<<endl;
cout<<"enter name of course"<<endl;
cin>>n;
c.setcoursename(n);
cout<<"enter course code"<<endl;
cin>>n;
c.setcoursecode(n);
cout<<"enter course grade"<<endl;
char g;
cin>>g;
c.setcoursegrade(g);
cout<<"enter course point"<<endl;
float p;
cin>>p;
c.setcoursepoint(p);
cout<<"enter course year"<<endl;
int q;cin>>q;
c.setcourseyear(q);
cout<<"enter course semester"<<endl;
int b;cin>>b;
c.setcoursesemester(b);

student[m].courses.push_Back(c);

}

}
}


if(num2==2)///popback
{
    student.pop_Back();
    elem--;
}

if(num2==3)///insert
{
    Student s;
    Course c;

     int r;
    Student *qq;

    cout<<"Enter the position"<<endl;
    int S;
    cin>>S;
    qq=student.Begin()+S;
    cout<<"Enter the value"<<endl;
    cout<<"Enter your name"<<endl;
string n;
cin>>n;
s.setsname(n);
cout<<"Enter your id"<<endl;
int d;
cin>>d;
s.setid(d);
cout<<"Enter your department"<<endl;
string z;
cin>>z;
s.setsdepartment(z);

cout<<"how many courses you want to add?"<<endl;

cin>>r;
for(int j=0;j<r;j++)
{
cout<<"For course number "<<j+1<<endl;
cout<<"enter name of course"<<endl;
cin>>n;
c.setcoursename(n);
cout<<"enter course code"<<endl;
cin>>n;
c.setcoursecode(n);
cout<<"enter course grade"<<endl;
char g;
cin>>g;
c.setcoursegrade(g);
cout<<"enter course point"<<endl;
float p;
cin>>p;
c.setcoursepoint(p);
cout<<"enter course year"<<endl;
int q;cin>>q;
c.setcourseyear(q);
cout<<"enter course semester"<<endl;
int b;
cin>>b;
c.setcoursesemester(b);

s.courses.push_Back(c);

}

   student.Insert(qq,s);

}

if (num2==4)///erase
{
    int index;
    cout<<"Enter the index you want to delete"<<endl;
     cin>>index;
    Student *u=student.Begin()+index;

    student.Erase(u);
    elem--;

}

if(num2==5)///clear
{
    student.Clear();
    elem=0;
}
if (num2==6)///front
{
    cout<<student.Front();
    //cout<<student[0].courses.Front();
    student[0].printcoursess();

}


if (num2==7)///back
{
    cout<<student.Back();
    student.Back().printcoursess();

}

if(num2==8)///operator
{
    cout<<"The index you want to view"<<endl;
    int z;
    cin>>z;
    cout<<student[z];
    student[z].printcoursess();


}
if(num2==9)///size
{
    cout<<"the size is "<<student.Size()<<endl;
}

if(num2==10)///capacity
{
    cout<<"the capacity is "<<student.Capacity()<<endl;
}


if(num2==11)///empty
    {
    int z=student.Empty();
        if(z==1)
            cout<<"Empty"<<endl;
        else if(z==0)
        cout<<"Not Empty"<<endl;

    }
    if(num2>11||num2<1)
    {
        cout<<"Enter write number"<<endl;
        goto b;
    }
    u:
cout<<"Would you like to perform other operations (y or n)?"<<endl;
char w;
cin>>w;
if(w=='y')

    {
        goto b;
    }

else if(w=='n')
{
    Main();
}
else if(w!='y'&&w!='n')
{
    cout<<"Please enter the write answer"<<endl;
    goto u;
}

}

