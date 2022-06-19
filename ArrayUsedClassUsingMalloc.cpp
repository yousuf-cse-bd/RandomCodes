/**
 * @file ArrayUsedClassUsingMalloc.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

class ArrayUsedClass1
{
private:
    /* data */
    int n,i;
    int *P;
public:
    ArrayUsedClass1(unsigned int size)
    {   
        n = size;
        P = (int*) calloc(n,sizeof(int));
        cout<<"Constructor is up..."<<endl;
    }
    ~ArrayUsedClass1()
    {
        cout<<"Destrcutor is called...!"<<endl;
        free(P);
        P = NULL;
    }
    // input
    void inputItems()
    {
        for(i = 0; i<n; i++)
        {
            cout<<"Index: "<<i<<"\tItem = ";
            cin>>P[i];
        }
    }
    void showItems()
    {
        for(i = 0; i<n; i++)
        {
            cout<<"Index: "<<i<<"\tItem = "<<P[i]<<endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int size;
    cout<<"Enter size of the array: ";
    cin>>size;

    ArrayUsedClass1 ob(size);
    cout<<"Load the array:"<<endl;
    ob.inputItems();
    cout<<"Print the array:"<<endl;
    ob.showItems();
    return 0;
}
