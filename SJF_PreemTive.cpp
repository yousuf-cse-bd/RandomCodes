#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef struct proccess
{
    int artime,bt,ct,ta,wt,btt;
    string pro_id;

    /*
    artime = Arrival time,
    bt = Burst time,
    ct = Completion time,
    ta = Turn around time,
    wt = Waiting time
    */

} Schedule;

bool compare(Schedule a,Schedule b)
{
    return a.artime<b.artime;

    /* This Schedule will always return TRUE
    if above condition comes*/
}
bool compare2(Schedule a,Schedule b)
{
    return a.bt<b.bt;

    /* This Schedule will always return TRUE
    if above condition comes*/
}

int main()
{

    int n,i,j,pcom;
    double awt = 0;
    //n = number of processes, i= iteration variable

    cout<<"Enter the number of Process Here: ";
    cin>>n;

    Schedule pro[n];
    //An array of Processes
    cout<<"\nEnter the Process-ID, ArrivalTime, BurstTime, :::"<<endl;

    for(i=0; i<n; i++)
    {
        cin>>pro[i].pro_id;
        cin>>pro[i].artime;
        cin>>pro[i].bt;
        pro[i].btt=pro[i].bt; ///main bt to btt
    }

    sort(pro,pro+n,compare);

    /*sort is a predefined funcion  defined in algorithm.h header file,
    it will sort the processes according to their arrival time*/

    i=0;
    pcom=0;
    while(pcom<n)
    {
        for(j=0; j<n; j++)
        {
            if(pro[j].artime>i)
                break;
        }

        sort(pro,pro+j,compare2);

        /*sort is a predefined funcion  defined in algorithm.h header file,
        it will sort the processes according to their burst time*/

        if(j>0)
        {

            for(j=0; j<n; j++)
            {
                if(pro[j].bt!=0)
                    break;
            }
            if(pro[j].artime>i)
            {
                i=pro[j].artime;
            }
            pro[j].ct=i+1;
            pro[j].bt--;
        }
        i++;
        pcom=0;
        for(j=0; j<n; j++)
        {
            if(pro[j].bt==0)
                pcom++;
        }
    }

    cout<<"\nProID\tAtime\tBtime\tCtime\tTtime\tWtime\n";

    for(i=0; i<n; i++)
    {
        pro[i].ta=pro[i].ct - pro[i].artime;
        pro[i].wt=pro[i].ta - pro[i].btt;

        /*Printing the Process id, arrival time, burst time,
        completion time, turn around time, waiting time*/

        cout<<pro[i].pro_id<<"\t"<<pro[i].artime<<"\t"<<pro[i].btt<<"\t"<<pro[i].ct<<"\t"<<pro[i].ta<<"\t"<<pro[i].wt;
        cout<<endl;
        awt = awt + pro[i].wt;
    }
    cout<<"\nTotal Waiting Time: "<<awt<<endl;
    cout<<"Total Average Waiting Time: "<<(awt/n)<<endl;
    return 0;
}
