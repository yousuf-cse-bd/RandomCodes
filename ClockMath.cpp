#include <iostream>
#include <cmath>
using namespace std;

///this code from geeksforgeek (anticlock-wise)

float calculateAngle(int hour, int minute)
{
    ///validate the input
    if(hour<=0 || hour>12 || minute<0 || minute>60)
    {
        cout<<"Wrong Input"<<endl;
        exit(0);
    }
    if(hour == 12 ||minute == 0)
    {
        hour = 0;
        minute = 0;
        hour = hour + 1;
        if(hour > 12)
        hour = hour - 12;
    }

    float hourAngle = (float) 0.5 * (hour * 60 + minute);
    float minuteAngle = (float)6*minute;

    float angle = abs(hourAngle - minuteAngle);
    angle = min(360 - angle, angle);
    return angle;
    
}

int main(int argc, char const *argv[])
{
    // cout<<calculateAngle(0, 61)<<endl;
    // cout<<calculateAngle(3, 30)<<endl;

    int h, m;
    cin>>h>>m;
    
    printf("%0.5f\n", calculateAngle(h, m));
    
    return 0;
}
