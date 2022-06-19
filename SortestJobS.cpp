#include <iostream>
using namespace std;

int main(void)
{
   int n,i,j;
   float awt,atat;
   awt = 0;
   atat = 0;
   cout<<"Enter Array Size Here Nth = ";
   cin>>n;
   int proc[n];
///int arrt[n];
   int wt[n];
   int tat[n];
   int bt[n];

   cout<<"Enter Process:"<<endl;
   for(i = 0; i<n;i++)
   {
       cout<<"P";
       cin>>proc[i];
   }
  /* cout<<"Enter ArrivalTime :\n";
    for(i = 0; i<n;i++)
   {
       cin>>arrt[i];
   }*/

    cout<<"Enter BurstTime :\n";
    for(i = 0; i<n;i++)
   {
       cin>>bt[i];
   }

   for(i = 0; i< n -1;i++)
   {
       for(j = i + 1; j<n; j++)
       {
          if(bt[i]>bt[j])
          {
              int tmp;
              tmp = bt[i];
              bt[i] = bt[j];
              bt[j] = tmp;

              tmp = proc[i];
              proc[i] = proc[j];
              proc[j] = tmp;
          }
       }
   }

    cout<<"\nProc:BurstTime:WaitingTime:TurnAroundTime:"<<endl;
    for(i = 0; i<n ;i++)
    {
        wt[0] = 0;
        wt[i+1] = wt[i] + bt[i];
        tat[i] = wt[i] + bt[i];
        cout<<"P"<<proc[i]<<"\t"<<bt[i]<<"\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
        awt = awt + wt[i];
        atat = atat + tat[i];

    }
    cout<<"\nTotal Waiting Time: "<<awt<<endl;
    cout<<"Average Waiting Time: "<<awt/n<<endl;
    cout<<"\nTotal Turn Around Time: "<<atat<<endl;
    cout<<"Average Turn Around Time: "<<atat/n<<endl;

    return 0;
}
