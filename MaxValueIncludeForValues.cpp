/**
 * @file MaxValueIncludeForValues.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int max_of_four(int * a, int * b, int * c, int * d) {
    // int A[4] = {a, b, c, d};
    
    if(*a > *b && *a > *c && *a > *d){
        return *a;
    }
    else if(*b > *a && *b > *c && *b > *d){
        return *b;
    }
    else if(*c > *a && *c > *b && *c > *d){
        return *c;
    }
    else if(*d > *a &&  *d > *b && *d > *c){
        return *d;
    }
    else {
        return -1;
    }
}
/*Driver code*/
int main(int argc, char const *argv[])
{
    /* code */
    int n1, n2, n3, n4;
    cout<<"Enter N1 = ";
    cin>>n1;
    cout<<"Enter N2 = ";
    cin>>n2;
    cout<<"Enter N3 = ";
    cin>>n3;
    cout<<"Enter N4 = ";
    cin>>n4;
    cout<<"Max Value: "<<max_of_four(&n1, &n2, &n3, &n4)<<endl;
    return 0;
}
