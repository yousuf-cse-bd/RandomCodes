#include <iostream>
using namespace std;

int main()
{
    int n,i,timeSlice;
    cout<<"Enter Process Number Here: ";
    cin>>n;
    int burstTime[n];
    int waitingTime[n];
    int remBt[n];
    cout<<endl;
    for(i = 0 ; i<n ; i++)
    {
        cout<<"Enter Burst Time for P"<<(i+1)<<": ";
        cin>>burstTime[i];
        remBt[i] = burstTime[i];
    }
    cout<<"\nEnter Time Slice Here: ";
    cin>>timeSlice;

    int currentTime = 0;
    while(true)
    {
        bool done  = true;
        for(i = 0; i<n; i++)
        {
            if(remBt[i]>0)
            {
                done  = false;
                if(remBt[i]>timeSlice)
                {
                    currentTime = currentTime + timeSlice;
                    remBt[i] = remBt[i] - timeSlice;
                }
                else
                {
                    currentTime = currentTime + remBt[i];
                    waitingTime[i] = currentTime - burstTime[i];
                    remBt[i] = 0;
                }
            }
        }
        if(done == true)
            break;
    }

    int avg = 0;
    cout<<"\nProcess\tBurstTime\tWaitingTime"<<endl;
    for(i = 0; i<n; i++)
    {
        avg = avg + waitingTime[i];
        cout<<"P"<<(i+1)<<"\t"<<burstTime[i]<<"\t\t"<<waitingTime[i]<<endl;
    }

    cout<<"\nTotal Waiting Time: "<<avg<<endl;
    cout<<"Avg Waiting Time: "<<(float)avg/(float)n<<endl;

    return 0;
}
