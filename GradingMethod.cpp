/****
 * @Author: Muhammad Yousuf Ali
 * @Since: 19 March 2020
 */

#include <iostream>
using namespace std;

void gradingMethod(int marks)
{
    if(marks >= 80 && marks<=100)
    {
        cout<<"A+"<<endl;
    }
    else if(marks >= 75 && marks <80)
    {
        cout<<"A"<<endl;
    }
    else if(marks >= 70 && marks <75)
    {
        cout<<"A-"<<endl;
    }
    else if(marks >= 65 && marks <70)
    {
        cout<<"B+"<<endl;
    }
    else if(marks >= 60 && marks <65)
    {
        cout<<"B"<<endl;
    }
    else if(marks >= 55 && marks <60)
    {
        cout<<"B-"<<endl;
    }
    else if(marks >= 50 && marks <55)
    {
        cout<<"C+"<<endl;
    }
    else if(marks >= 45 && marks <50)
    {
        cout<<"C"<<endl;
    }
    else if(marks >= 40 && marks <45)
    {
        cout<<"D"<<endl;
    }
    else if(marks<40)
    {
        cout<<"F"<<endl;
    }
    else
    {
        cout<<"Out Of Range"<<endl;
    }
    
}

int main(void)
{
    int marks;
    while (true)
    {
        cout<<"Enter Your Marks Here: ";
        cin>>marks;
       if(marks<0)
       {
           return 0;
       }
       else
       {
           gradingMethod(marks);
       }
       
    }
    
    return 0;
}