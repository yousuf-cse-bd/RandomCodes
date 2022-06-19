/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 29 July 2019
 */

#include <iostream>
using namespace std;

class InsertItem
{
    int i,size,index, item;
    public:
    InsertItem(int n)
    {
        size = n;
    }
    void addItem(int A[])
    {
        cout<<"Enter Index Here: ";
        cin>>index;
        if(index<size)
        {
            cout<<"Enter New Item Here: ";
            cin>>item;
            for(i = size-1;i>=index;i--)
            {
            A[i+1] = A[i]; 
            }
            A[index] = item;
        }
        else
        {
            cout<<"Array IndexofBounce..!"<<endl;
        }
        
    }
    void showDatas(int A[])
    {
        for(i = 0; i<size + 1;i++)
        {
            cout<<"["<<i<<"]\tItem = "<<A[i]<<endl;
        }
    }
};

void inputDatas()
{
    int n,i;
    cout<<"Enter Nth Value Here :";
    cin>>n;
    int A[n+1];
     i = 0;
    while (i<n)
    {
        cout<<"["<<i<<"]\tItem = ";
        cin>>A[i];
        i++;
    }
    InsertItem insertItem(n);
    insertItem.addItem(A);
    insertItem.showDatas(A);
}
int main(int argc, char const *argv[])
{
    inputDatas();
    return 0;
}
