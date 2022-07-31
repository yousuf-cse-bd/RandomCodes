/**
 * @file PrintingPlusSignUsingStar.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Plus sign pattern using star character
 * @version 0.1
 * @date 2022-07-29
 * @since FriDay; 11:26 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    /*If n value odd then figure will be looking good*/
    n = (n % 2 == 0)?--n : n;
    for(unsigned int i = 1; i<=n;i++){
        for(unsigned int j = 1; j<=n; j++){
            if(i == (n+1) / 2 || j == (n+1) / 2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
