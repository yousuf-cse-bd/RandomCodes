/// C++ program for implementation of RR scheduling
#include<iostream>
using namespace std;


void findWaitingTime(int n,int bt[], int wt[], int quantum)
{
    int rem_bt[n];
    for (int i = 0 ; i < n ; i++)
        rem_bt[i] = bt[i];

    int t = 0;

    while (1)
    {
        bool done = true;


        for (int i = 0 ; i < n; i++)
        {

            if (rem_bt[i] > 0)
            {
                done = false;

                if (rem_bt[i] > quantum)
                {
                    rem_bt[i] = rem_bt[i] - quantum;
					t = t + quantum;
                }
                else
                {
                    t = t + rem_bt[i];

                    wt[i] = t - bt[i];

                    rem_bt[i] = 0;
                }
            }
        }
        if (done == true)
            break;
    }
}




///Function to calculate average time
void findavgTime(int n, int bt[],int quantum)
{
    int wt[n], total_wt = 0, total_tat = 0;

    /// Function to find waiting time of all processes
    findWaitingTime(n, bt, wt, quantum);



    /// Display processes along with all details
    cout<<"Processes\t"<<"BurstTime\t"<<"WaitingTime\t"<<endl;

    for (int i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];

        cout<<"P"<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<endl;
    }

    cout<<"\nAverage waiting time = "<<(float)total_wt / (float)n<<endl;
}

/// Driver code
int main()
{
    int quantum,n,i ;
    cout<<"Enter Process Number: ";
    cin>>n;
    int burst_time[n];
    for(i = 0; i<n; i++)
    {
        cout<<"Input BurstTime P"<<(i+1)<<": ";
        cin>>burst_time[i];
    }
    cout<<"\nEnter Time Quantum Here: ";
    cin>>quantum;

    findavgTime(n, burst_time, quantum);
    return 0;
}



