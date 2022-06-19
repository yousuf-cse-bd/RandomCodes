/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 29 July 2019
 */

#include <iostream>
using namespace std;

class InsertionSort
{
    int i,j, item;
    public:
    void insertionSort(int A[],int n)
    {
        for(i = 1 ; i<n ; i++)
        {
            item = A[i];
            j = i-1;
            while(j>=0 && A[j]>item)
            {
                A[j+1] = A[j];
                j--;
            }
            A[j+1] = item;
        }
    }
};



int main(int argc, char const *argv[])
{
    int n,i;
    cout<<"Enter nth Value Here: ";
    cin>>n;
    int A[n];
    i = 0;
    while (i<n)
    {
        cout<<"["<<i<<"]\tItem = ";
        cin>>A[i];
        i++;
    }
    InsertionSort insertionSort;//Class type variable(object)
    insertionSort.insertionSort(A,n);
    cout<<"After Sorting Ascending Order..:"<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"["<<i<<"]\tItem = "<<A[i]<<endl;
    }
    return 0;
}
