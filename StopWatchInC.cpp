/**
 * @file StopWatchInC.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Project: Stop Watch in C
 * @version 0.1
 * @date 2022-08-15
 * @since MonDay; 9:16 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <unistd.h>
using namespace std;
#pragma pack(1)
const unsigned int cycle = 60;
class StopWatch{
    private:
    unsigned int hour, minute, second;
    public:
    StopWatch(unsigned int hour, unsigned int minute, unsigned int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    
    void stopWatchFunction(){
        unsigned int hourCounter, minuteCounter, secondCounter;
        hourCounter = minuteCounter = secondCounter = 0;
        while(true){
            
            if(hour == hourCounter && minute == minuteCounter && second == secondCounter){
                cout<<"<><><><><><><><><<><><>:STOP_WATCH:<><><><><><><><><<><><>\n"<<endl;
                printf("\t\t\t%0.2d:%0.2d:%0.2d\n", hourCounter, minuteCounter, secondCounter);
                cout<<"\n<><><><><><><><><<><><><><><><><><><><><<><><><><><><><>\n"<<endl;
                cout<<"Hour: "<<hourCounter<<endl;
                cout<<"Minute: "<<minuteCounter<<endl;
                cout<<"Second: "<<secondCounter<<endl;
                break;
            }
            else{
                cout<<"<><><><><><><><><<><><><>:STOP_WATCH:<><><><><><><><><<><><>\n"<<endl;
                printf("\t\t\tTimer: %0.2d:%0.2d:%0.2d\n", hourCounter, minuteCounter, secondCounter);
                cout<<"\n<><><><><><><><><><><><><><><><><><><><><><><><><<><><><><>\n"<<endl;
                /*Delay 1 second*/
                sleep(1);
                /*Clear previous screen*/
                // cout<<"\033[2J\033[1;1H";
                system("cls");
            }
            secondCounter ++;
            if(secondCounter == cycle){
                minuteCounter ++;
                secondCounter = 0;
            }
            if(minuteCounter == cycle){
                hourCounter ++;
                minuteCounter = 0;
            }
        }
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    StopWatch myStopWatch  = StopWatch(0,0,10);
    myStopWatch.stopWatchFunction();
    
    return 0;
}
