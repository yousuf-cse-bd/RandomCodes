#include <iostream>
using namespace std;

int getLargest(int Arr[], int n)
{
    int largest = 0;
    for(int i = 1; i<n; i++)
    {
        if(Arr[i] > Arr[largest])
        largest = i;
    }
    return largest;
}

int secondLargest(int Arr[], int n)
{
    int largest = getLargest(Arr, n);
    // cout<<largest<<endl;
    int resultIndex = -1;
    for(int i = 0; i<n; i++)
    {
        if(Arr[i] != Arr[largest])
        {
            if(resultIndex == -1)
            {
                resultIndex = i;
                // cout<<"inner if = "<<resultIndex<<endl;
            }
            else if(Arr[i]>Arr[resultIndex])
            {
                // cout<<"Arr[i] = "<<Arr[i]<<">Arr[ResultIndex] = "<<Arr[resultIndex]<<endl;
                resultIndex = i;
            }
        }
    }
    return resultIndex;
}
int main(int argc, char const *argv[])
{
    int Arr[] = {5, 20, 12, 20, 10};
    // int Arr[] = {10,10,10};
    int n = sizeof(Arr) / sizeof(int);

    int result = secondLargest(Arr, n);
    if(result!=-1)
    cout<<"The Second Largst Value: "<<Arr[result]<<endl;
    else
    cout<<"No Second Largest Value!"<<endl;
    
    return 0;
}
