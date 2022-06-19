/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Tuesday, 21 April 2020
 * Odd Even Different Way
 */

#include <iostream>
using namespace std;

int main(void){
   int x = 1001;

    if(x % 2 == 0){
        cout<<"Even"<<endl;
    }
    else if(x % 2 != 0){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Confused"<<endl;
    }
    return 0;
}