/**
 * @file FindMidNumnerUsingTernaryOperator.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
void midNumberTernaryOperator(float a, float b, float c){
    ((a < b && b < c) || (c < b && b < a))?cout<<"MidB: "<<b<<endl:
    ((b < c && c < a) || (a < c && c < b))?cout<<"MidC: "<<c<<endl:
    cout<<"MidA: "<<a<<endl;
}

void findMidNumber(float a, float b, float c){
    // Checking B
    if((a < b && b < c) || (c < b && b < a)){
        cout<<"MidB: "<<b<<endl;
    }
    // Checking A
    else if((b < a && a < c) || (c < a && a < b)){
        cout<<"MidA: "<<a<<endl;
    }
    else{
        cout<<"MidC: "<<c<<endl;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    float n1, n2,n3;
    // n1 = 10, n2 = 50, n3 = 30;
    cout<<"Enter three random not duplicate numbers:"<<endl;
    cin>>n1>>n2>>n3;

    findMidNumber(n1, n2, n3);
    midNumberTernaryOperator(n1, n2, n3);
    return 0;
}
