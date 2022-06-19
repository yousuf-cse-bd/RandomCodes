#include <iostream>
#include <string.h>
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, char argv[])
{
    int i;
    short black = 0;
    short brown = 1;
    short red = 2;
    short orange = 3;
    short yellow = 4;
    short green = 5;
    short blue  = 6;
    short violet = 7;
    short gray = 8;
    short white = 9;
    float gold = 0.05;

    float silver = 0.10;
    float noColor = 0.20;
    string colorBands[4];
    cout<<"Enter 4 Color Here:"<<endl;
    for(i = 0;i<4; i++)
    {
        cin>>colorBands[i];
    }

    for(i = 0 ; i<4; i++)
    {
        if(colorBands[i] == "black")
        {
          colorBands[i] = black;
        }
    }

    return 0;
}
