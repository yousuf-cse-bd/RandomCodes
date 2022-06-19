/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 29 July 2019
 */
#include <iostream>
using namespace std;

class DeleteItem
{
    int size,i,item;
    public:
    DeleteItem(int n)
    {
        size = n;
    }
    void eleminateItem(int A[])
    {
        cout<<"Enter Index Which is Delete: ";
        cin>>item;
        for(i=item; i<size;i++)
        {
            A[i] = A[i+1]; 
        }
    }
    void showDatas(int A[])
    {
    for(i = 0; i<size - 1;i++)
        {
            cout<<"["<<i<<"]\tItem = "<<A[i]<<endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    int n, i;
    cout<<"Enter Nth Here: ";
    cin>>n;
    int A[n];
    i = 0;
    while (i<n)
    {
        cout<<"["<<i<<"]\tItem = ";
        cin>>A[i];
        i++;
    }
    DeleteItem deleteItem(n);
    deleteItem.eleminateItem(A);
    deleteItem.showDatas(A);
    return 0;
}
