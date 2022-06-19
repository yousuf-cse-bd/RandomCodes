#include <iostream>
using namespace std;

#define MAXGRILS 4
#define MAXITEM 3

int main(int argc, char const *argv[])
{
    /* code */
    int i, j;
    long long int grandTotal = 0;
    int tableValue[MAXGRILS][MAXITEM] = {
        {310, 257, 365},
        {210, 190, 325},
        {405, 235, 240},
        {260, 300, 380},
        };
    // printf("Input data\n");
    // cout<<"Enter values, one at a time, row-wise:"<<endl;
    // for(i = 0; i<MAXGRILS; i++)
    // {
    //     for(j = 0; j<MAXITEM; j++)
    //     {
    //         cin>>tableValue[i][j];
    //     }
    // }

    cout<<"\nThe table values:"<<endl;
    for(i = 0; i<MAXGRILS; i++)
    {
        for(j = 0; j<MAXITEM; j++)
        {
            cout<<tableValue[i][j]<<"\t";
        }
        cout<<endl;
    }

    /*Computing Girls Total*/
    int girlsTotal[MAXGRILS] = {0};
    cout<<"\nGIRLS TOTAL"<<endl;
    for(i = 0; i<MAXGRILS; i++)
    {
        girlsTotal[i] = 0;
        cout<<"SalesGirl["<<i+1<<"] = ";
        for(j = 0; j<MAXITEM; j++)
        {
            girlsTotal[i] += tableValue[i][j]; 
        }
        cout<<girlsTotal[i]<<endl;
        // grandTotal = grandTotal + girlsTotal[i];
    }

    /*Computing Item Total*/
    int itemsTotal[MAXITEM] = {0};
    cout<<"\nITEM TOTAL"<<endl;
    for(i = 0; i<MAXITEM; i++)
    {
        itemsTotal[i] = 0;
        cout<<"Item["<<i+1<<"] = ";
        for(j = 0; j<MAXGRILS; j++)
        {
            itemsTotal[i] += tableValue[j][i];
        }
        cout<<itemsTotal[i]<<endl;
        grandTotal += itemsTotal[i];
    }

    cout<<"Grand Total: "<<grandTotal<<endl;
    return 0;
}
