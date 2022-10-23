/**
 * @file CricketRunRate.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief One day and T20 match innings run rate
 * @version 0.1
 * @date 2022-10-23
 * @since SunDay; 11:28 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class CricketRunRate{
private:
    unsigned int totalballsPerInnings;
    int oppositeTeamRuns, ownTeamRuns, unplayedBalls, playedBalls;
    float currentRunRate, askingRunRate, over;
public:
    CricketRunRate(unsigned int totalballsPerInnings){
        this->totalballsPerInnings = totalballsPerInnings;
        over = 6;
    }
    void runRateCalculation(void){
        cout<<"Enter the opposite team's runs: ";
        cin>>oppositeTeamRuns;
        cout<<"Enter own team's runs: ";
        cin>>ownTeamRuns;
        cout<<"Enter unplayed balls: ";
        cin>>unplayedBalls;
        playedBalls = totalballsPerInnings - unplayedBalls;
        currentRunRate = (ownTeamRuns * over)/playedBalls;
        printf("\tCurrent Run Rate: %0.2f\n", currentRunRate);

        askingRunRate = (oppositeTeamRuns - ownTeamRuns + 1);
        askingRunRate = askingRunRate / unplayedBalls;
        askingRunRate = askingRunRate * over;
        printf("\tAsking Run Rate: %0.2f\n", askingRunRate);
    }
    ~CricketRunRate(){}
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    CricketRunRate match(300);
    match.runRateCalculation();
    return 0;
}
