
#ifndef FCIVECTOR_H
#define FCIVECTOR_H
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

template <class t>
class Fcivector
{
private:
    t *elements;
    int numberOfelement=0;
    int capacity;

    string z;


public:


    Fcivector()
    {
        elements=new t [0];
        capacity=0;
};


void push_Back(t value)
{


    t *newarr=new t[numberOfelement];///to add new elements in array of size bigger than the last elements


    for(int i=0;i<numberOfelement;i++)///copy elements in the new array
    {
            newarr[i]=elements[i];


    }
    delete [] elements;
    numberOfelement++;
    elements=new t[numberOfelement];///increase size of old array
     for(int i=0;i<numberOfelement-1;i++)
    {

          elements[i]=newarr[i];

    }
    elements[numberOfelement-1]=value;///ADD the new element in array
    delete[] newarr;




        if (numberOfelement==1)/// to calculate the capacity
        {
            capacity=1;
        }
       if(capacity<numberOfelement)
        {
            capacity=(numberOfelement-1)*2;

        }
}
void print ()
{
    for(int i=0;i<numberOfelement;i++)
    {
        cout<<elements[i]<<endl;
    }
}
int Size()
{
    return numberOfelement;

}
void pop_Back()
{
    if(numberOfelement>0)
    {
        numberOfelement--;
        cout<<"The last element deleted successfully"<<endl;

    }
    else
    {
        cout<<"Error,you have entered wrong index"<<endl;
    }

}
bool Empty()
{
    return numberOfelement==0;
}
void Clear()
{
    numberOfelement=0;
    capacity=0;
}
t &Front()
{
if (numberOfelement>0)
{
    return elements[0];
}
else
{
    cout<<"Error,you have entered wrong index"<<endl;
    exit(0);
}
}
t  &Back()
{
    if (numberOfelement>0)
{
    return elements[numberOfelement-1];
}
else
{
    cout<<"Error,you have entered wrong index"<<endl;
    exit(0);
}

}

t *Begin()
{
    return elements;
}

int Capacity()
{
    return capacity;

}

void Erase (t *position)
{

int index=position-Begin();

if(index<0 || index>numberOfelement-1)
{
        cout<<"you have entered wrong index"<<endl;
        exit(0);
}

else
{


    numberOfelement--;

    for(int i=index;i<numberOfelement;i++)
    {
        elements[i]=elements[i+1];
    }
}
}

void Insert(t *position,t value)
{
    int index=position-Begin();///to get back the index
    if (index<0|| index>numberOfelement)
    {
        cout<<"you have entered wrong index"<<endl;
        exit(0);
    }
    else
{
    int x=0;
    numberOfelement++;
    t *newarr=new t[numberOfelement];
    int z;

    for(int i=0;i<numberOfelement;i++)
    {


        if( i==index)
        {
            newarr[i]=value;

        }
        else
        {
            newarr[i]=elements[x];
            x++;
        }
    }
    delete [] elements;
    elements=new t[numberOfelement];
     for(int i=0;i<numberOfelement;i++)
    {



          elements[i]=newarr[i];


    }
    delete[] newarr;
    cout<<"elements added successfully"<<endl;
}

}


t &operator  [](int index)
{
    if (numberOfelement==0 || index<0 || index>(numberOfelement-1))
    {
        cout<<"Error you have entered invalid index"<<endl;
        exit(0);

    }
    else {
    return elements[index];
    }
}
    t *Find(t x )
    {
        for(int i=0;i<numberOfelement;i++)
        {
            if(elements[i]==x)
                return &elements[i];
        }


    }

};
#endif // FCIVECTOR_H
