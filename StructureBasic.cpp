/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 * ***Structure Basic: 1**** 
 */

#include <iostream>
using namespace std;

struct StructureBasic
{
    char name[20];
    int id;
};


int main(void)
{
    StructureBasic structureBasic = StructureBasic();
    cout<<"Enter Your Name Here: ";
    cin>>structureBasic.name;

    cout<<"\nEnter Your ID Here: ";
    cin>>structureBasic.id;

    cout<<"Your Name: "<<structureBasic.name<<endl;
    cout<<"Your ID: "<<structureBasic.id<<endl;
    
    return 0;
}