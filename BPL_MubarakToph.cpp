/**
 * @file BPL_MubarakToph.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int testCase;
    cin>>testCase;
    while (testCase --){
        /* code */
        string timeLine;
        cin>>timeLine;
        unsigned int count = 0;
        for(int i = 0; timeLine[i] != '\0'; i++){
            if(timeLine[i]>= '0' && timeLine[i] <= '6' || timeLine[i] == 'O'){
                ++count;
            }
        }
        if(count == 1){
            cout<<"1 BALLS"<<endl;
        }
        if(count <6){
            cout<<count<<" BALLS"<<endl;
        }
        if(count == 6){
            cout<<"1 OVER"<<endl;
        }
        if(count > 6){
            if(count % 6 == 0){
                cout<<count / 6 <<"OVERS"<<endl;
            } 
            else{
                if(count / 6 == 1){
                    if(count % 6 == 1){
                        cout<<count/6<<" OVER "<<count%6<<" BALL"<<endl;
                    }
                    else{
                        cout<<count/6<<" OVER "<<count % 6<<" BALLS"<<endl;
                    }
                }
                else{
                    cout<<count/6<<" OVERS "<<count % 6<<" BALLS"<<endl;
                }
            }
        }
    }
    
    return 0;
}
