#include <iostream>
using namespace std;

void matchT20(float r1, float r2, int b)
{
    int ch = 3;
    printf("%c%c%c", ch, ch, ch);
    cout<<"For Twenty 20 Match";
    printf("%c%c%c\n", ch, ch, ch);
    float currentRunRates, requiredRunRates;
    int playedBalls = 120 - b;
    currentRunRates = (r2/playedBalls) * 6.0;
    printf("Current Run Rates: %0.2f\n", currentRunRates);

    requiredRunRates = ((r1 - r2 + 1)/b) * 6.0;
    printf("Required Run Rates: %0.2f\n", requiredRunRates);
}

void matchODI(float r1, float r2, int b)
{
    // cout<<"R1 = "<<r1<<"\nR2 = "<<r2<<"\nBalls = "<<b<<endl;
    float currentRunRates, requiredRunRates;
    int playedBalls = 300 - b;
    currentRunRates = (r2/playedBalls) * 6.0;
    printf("Current Run Rates: %0.2f\n", currentRunRates);

    requiredRunRates = ((r1 - r2 + 1)/b) * 6.0;
    printf("Required Run Rates: %0.2f\n", requiredRunRates);

}


int main(int argc, char const *argv[])
{
    int option;
    int oppositeTeamRuns, ownerTeamRuns, unplayedBalls;
    do
    {
        cout<<"\t1 For One Day Innings Match."<<endl;
        cout<<"\t2 For Twenty 20 Match."<<endl;
        cout<<"\t0 For EXIT...!"<<endl;
        cout<<"Select Your Option Now: ";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Pressed 1"<<endl;
            cout<<"Enter Opposite Team Runs Here: ";
            cin>>oppositeTeamRuns;
            cout<<"Enter Owner Team Runs Here: ";
            cin>>ownerTeamRuns;
            cout<<"UnPlayed Ball Numbers Here: ";
            cin>>unplayedBalls;
            

            matchODI(oppositeTeamRuns, ownerTeamRuns, unplayedBalls);

            break;
        case 2:
            cout<<"Pressed 2\n";

            cout<<"Enter Opposite Team Runs Here: ";
            cin>>oppositeTeamRuns;
            cout<<"Enter Owner Team Runs Here: ";
            cin>>ownerTeamRuns;
            cout<<"UnPlayed Ball Numbers Here: ";
            cin>>unplayedBalls;

            matchT20(oppositeTeamRuns, ownerTeamRuns, unplayedBalls);

            break;
        case 0: 
            cout<<"Exit...!\n";
            break;
        
        default:
            cout<<"Enter the Right Option..."<<endl;
            // break;
        }
    } while (option != 0);


    return 0;
}
