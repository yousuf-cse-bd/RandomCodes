/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Tuesday, 21 April 2020
 * Shafee's Life Schedulling
 */

#include <iostream>
void sleep(void);
void awake(void);
using namespace std;

int main(void){
    
    sleep();
    awake();
    return 0;
}

void sleep(void){
    int fristStart;
    for(fristStart = 1; fristStart <= 10;fristStart++){
        if(fristStart == 1){
            cout<<"Shafee is Sleeping."<<endl;
        }
        else{
            cout<<"He is Sleeping."<<endl;
        }
    }
}

void awake(void){
    
}
