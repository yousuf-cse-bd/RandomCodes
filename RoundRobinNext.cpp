/// C++ program for implementation of RR scheduling
#include<iostream>
using namespace std;

/// Function to find the waiting time for all
/// processes
void findWaitingTime(int n,int bt[], int wt[], int quantum)
{
    /// Make a copy of burst times bt[] to store remaining
    /// burst times.
    int rem_bt[n];
    for (int i = 0 ; i < n ; i++)
        rem_bt[i] = bt[i];

    int t = 0; /// Current time

    /// Keep traversing processes in round robin manner
    /// until all of them are not done.
    while (1)
    {
        bool done = true;

        /// Traverse all processes one by one repeatedly
        for (int i = 0 ; i < n; i++)
        {
            /// If burst time of a process is greater than 0
            /// then only need to process further
            if (rem_bt[i] > 0)
            {
                done = false; /// There is a pending process

                if (rem_bt[i] > quantum)
                {
                    /// Increase the value of t i.e. shows
                    /// how much time a process has been processed
                    t = t + quantum;
                    /// Decrease the burst_time of current process
                    /// by quantum
                    rem_bt[i] = rem_bt[i] - quantum;
                }

                /// If burst time is smaller than or equal to
                /// quantum. Last cycle for this process
                else
                {
                    /// Increase the value of t i.e. shows
                    /// how much time a process has been processed
                    t = t + rem_bt[i];

                    /// Waiting time is current time minus time
                    /// used by this process
                    wt[i] = t - bt[i];

                    /// As the process gets fully executed
                    /// make its remaining burst time = 0
                    rem_bt[i] = 0;
                }
            }
        }

        /// If all processes are done
        if (done == true)
            break;
    }
}




///Function to calculate average time
void findavgTime(int n, int bt[],int quantum)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

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


