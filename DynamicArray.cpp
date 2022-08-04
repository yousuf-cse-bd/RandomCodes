/**
 * @file DynamicArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dynamic memory allocation without function
 * @version 0.1
 * @date 2022-08-04
 * @since ThursDay; 9:23 AM
 * @copyright Copyright (c) 2022
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int n;
    cout<<"Enter nth value here: ";
    cin>>n;
    int *A = new int(5);
    for(unsigned int i = 0; i<n; i++){
        *(A+i) = i+1;
    }
    unsigned int sum = 0;
    for(unsigned int i = 0; i<n; i++){
        sum += *(A+i);
    }
    cout<<"Sum of them: "<<sum<<endl;
    sum = 0;
    for(unsigned int i = 0; i<n; i++){
        sum += A[i];
    }
    cout<<"Sum of them: "<<sum<<endl;
    delete(A);
    return 0;
}
