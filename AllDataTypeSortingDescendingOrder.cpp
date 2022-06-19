/**
 * @file AllDataTypeSortingDescendingOrder.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char county[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H', '\0'};
    cout<<"Char Array: "<<county<<endl;
    unsigned int s1 = sizeof(county);
    cout<<"Size, s1 = "<<s1<<endl;

    // Sorting the array in descending order
    sort(begin(county), end(county), greater <char>());
    cout<<"Sorting the Array:"<<endl;
    for(unsigned int i = 0; i<s1; i++){
        cout<<county[i]<<" ";
    }
    cout<<endl;
    int A[] = {5, 3, 2, 1, 4};
    unsigned int s2 = sizeof(A) / sizeof(int);
    cout<<"\nIntegr Array:"<<endl;
    // for(unsigned int i = 0; i != s2; i++){
    //     cout<<A[i]<<" ";    
    // }
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<endl;

    // Sorting the array in descending order 3 method
    // sort(A, A + s2, greater<int>());
    // sort(begin(A), end(A), greater <>());
    sort(begin(A), end(A), greater <int>());
    cout<<"Sorted the element:"<<endl;
    for(auto x : A){
        cout<<x<<" ";
    }
    cout<<endl;

    float realNumbers[] = {1.15, 2.25, 3.33, 4.5, 5.9};
    cout<<"Real Numbers:"<<endl;
    for(float x : realNumbers){
        cout<<x<<" ";
    }
    cout<<endl;
    // Sorting the array in descending order
    sort(begin(realNumbers), end(realNumbers), greater <float>());
    cout<<"Sorted the element:"<<endl;
    for(float x : realNumbers){
        cout<<x<<" ";
    }
    cout<<endl;

    double rNums[] = {1.15, 2.25, 3.33, 4.5, 5.9};
    cout<<"Double values:"<<endl;
    for(double x : rNums){
        cout<<x<<" ";
    }
    cout<<endl;
    // sorting the array items
    sort(begin(rNums), end(rNums), greater<double>());
    cout<<"Sortrd values:"<<endl;
    for(double x : rNums){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
