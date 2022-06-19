/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 30 July 2019
 */

#include <iostream>
using namespace std;


void selectionSort(int A[],int n)
{
    int i,j,tmp;
    for(i = 0; i<n -1; i++)
    {
        for(j = i + 1; j<n;j++)
        {
            if(A[i]<A[j])
            {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }
}

int binarySearch2(int A[], int n)
{
    int left,right,mid,x;
    cout<<"Enter a New Item Here: ";
    cin>>x;

    left = 0;
    right = n-1;
    while(left<=right) 
    {
        mid = left + (right - left)/2; //best pratice
        if(A[mid] == x)
        {
            return mid;
        }
        else if(A[mid]<x)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    int n,i;
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
    selectionSort(A,n);
    cout<<"After Sorting Descending Order..:"<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"["<<i<<"]\tItem = "<<A[i]<<endl;
    }
    int value =  binarySearch2(A,n);
    if(value ==-1)
    {
        cout<<"Not Found...!"<<endl;
    }
    else
    {
       cout<<"Found & Index:"<<value<<endl;
    }
    

    return 0;
}
