#include <bits/stdc++.h>
using namespace std;

typedef struct SJF
{
    int art,bt,ct,tat,wt,brt;///burst remaining time = brt
    string proc_id;

} schedule;

bool compare1(schedule a, schedule b)
{
    return a.art<<b.art;
}
bool compare2(schedule a, schedule b)
{
    return a.bt<b.bt;
}

int main(void)
{

    int n;
    cout<<"Enter Process Number Here: ";
    cin>>n;
    schedule pro[n]; ///process type array
    int i, j, pcom;
    cout<<"Enter ProID , ArrivalTime & BurstTime(Respectively):"<<endl;
    for(i = 0; i<n; i++)
    {
        cin>>pro[i].proc_id;
        cin>>pro[i].art;
        cin>>pro[i].bt;
        pro[i].brt = pro[i].bt;
    }

    ///sort using arrival time
    sort(pro,pro+n,compare1);
    i = 0 ;
    pcom = 0;
    while(pcom < n)
    {
        for(j = 0; j<n;j++)
        {
            if(pro[j].art>i)
                break;
        }

        sort(pro,pro+j,compare2);
        if(j>0)
        {
            for(j = 0; j<n;j++)
            {
                if(pro[j].bt != 0)
                    break;
            }
            if(pro[j].art>i)
            {
                i = pro[j].art;
            }
            pro[j].ct = i + 1;
            pro[j].bt --;
        }

        i ++;
        pcom  = 0;
        for(j = 0; j<n ;j++)
        {
            if(pro[j].bt ==0)
                pcom++;
        }
    }

    double awt = 0;
    cout<<"\nPro-ID\tAtime\tBtime\tCtime\tTTime\tWtime"<<endl;
    for(i = 0; i<n;i++)
    {
        pro[i].tat = pro[i].ct - pro[i].art;
        pro[i].wt = pro[i].tat - pro[i].brt;
        cout<<pro[i].proc_id<<"\t";
        cout<<pro[i].art<<"\t";
        cout<<pro[i].brt<<"\t";
        cout<<pro[i].ct<<"\t";
        cout<<pro[i].tat<<"\t";
        cout<<pro[i].wt<<"\n";
        awt = awt + pro[i].wt;

    }

    cout<<"\nTotal Waiting Time: "<<awt<<endl;
    cout<<"Total Average Waiting Time: "<<(awt/n)<<endl;
    return 0;
}
