//Calloc() sum array

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n, sum = 0; //declared some variable withs sum assign = 0
    cout<<"Enter the Number of Element: "; //Here Message for User Input
    cin>>n; //input, n

    //declared calloc(2 parameter) function here and type int
    int *ptrA = (int*)calloc(n, sizeof(int));

    if (ptrA == NULL)
    {
        cout<<"Sorry! Unable to allocate memory."<<endl;
    }

    //Element Input and Logic with data fetching method
    for(int i = 1; i<=n; i++)
    {
        cout<<"Index: "<<i<<"\tElement = ";
        scanf("%d",ptrA + i);
        sum = sum + *(ptrA + i);
    }

    cout<<"Sum of the Element: "<<sum<<endl;

    free(ptrA);

    return 0;
}
