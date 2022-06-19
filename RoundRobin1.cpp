#include <iostream>
using namespace std;

int main()
{
    int n = 4,i;
    int bt[] = {5,4,1,6};
    int wt[n];
    int tat[n];
    int rem_bt[n];
    for(i = 0; i<n; i++)
    {
        rem_bt[i] = bt[i];
    }
    int timeSlice = 2;
    ///logic start
    int ct = 0;
    while(true)
    {
        bool done  = true;
        for(i = 0; i<n; i++)
        {
            if(rem_bt[i]>0)
            {
                done = false;
                if(rem_bt[i]>timeSlice)
                {

                    rem_bt[i] = rem_bt[i] - timeSlice;///sub rem_burst time by time slice
                    ct = ct + timeSlice; /// Current Time Added by time Slice

                }
                else
                {

                    ct = ct + rem_bt[i]; ///again current time added by rem_burstTime

                    wt[i] = ct - bt[i]; ///Sub current time from given burst time
                    tat[i] = wt[i] + bt[i]; ///for turn around time
                    rem_bt[i] = 0;

                }

            }
        }
        if(done == true)
            break;
    }
   ///logic end
    int avg = 0;
    for(i = 0; i<n; i++)
    {
        avg += wt[i];
        cout<<"P"<<(i+1)<<"\tWT: "<<wt[i]<<endl;
        //cout<<"P"<<(i+1)<<"\tTAT: "<<tat[i]<<endl;
    }
    cout<<"\nTotal Waiting Time: "<<avg<<endl;
    cout<<"Avg WT: "<<(float)avg / (float)n<<endl;


    return 0;
}
