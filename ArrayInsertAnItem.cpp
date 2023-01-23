/**
 * @file ArrayInsertAnItem.cpp
 * @author your name (you@domain.com)
 * @brief Insert an element of existing array with array notation
 * @version 0.1
 * @date 2023-01-23
 * @since MonDay; 11:13 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int n, newItem, i;
    cout<<"Enter Nth Value Here: ";
    cin>>n;
    int A[n+1];
    for(i = 0; i<n; i++){
        cout<<"A["<<i<<"]: ";
        cin>>A[i];
    }

    int position;
    cout<<"Enter the Position where Inserting an Item: ";
    cin>>position;
    if(position > n){
        cout<<"Overflow the Array Sized...!"<<endl;
        exit(0);
    }
    else{
        for(i = n; i>=position; i--){
            A[i] = A[i-1];
        }
        cout<<"Enter the new Item Here: ";
        cin>>newItem;
        A[position] = newItem; 

        // Out Put:
        int N = sizeof(A) / sizeof(int);
        for(i = 0; i<N; i++){
            cout<<"A["<<i<<"]: "<<A[i]<<endl;
        }
    }
    
    return 0;
}
