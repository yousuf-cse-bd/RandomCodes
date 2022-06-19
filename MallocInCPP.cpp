#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int n, sum = 0; // variable declared and sum initialized with 0
    cout<<"Enter the Number of Element Here: "; //user message
    cin>>n;//input numberof the element
    //declared malloc() function
    int *ptrA = (int*)malloc(n*sizeof(int));

    //if memory is not sufficient then return NULL;
    if(ptrA == NULL)
    {
        cout<<"Sorry! Unable ot Allocate Memory."<<endl;
        exit(0);
    }

    for(int i = 1; i<=n; i++) //malloc does not start only [0] index
    {
        cout<<"Index: "<<i<<"\t\tElement = ";
        // scanf("%d",ptrA + i);
        cin>>ptrA[i];//*(ptrA + i) can be replaced by ptrA[i]
        sum = sum + *(ptrA + i); //using data and syntax

    }

    cout<<"Sum of the Element: "<<sum<<endl; //output the expected result

    free(ptrA); //the pointer is free from main memory(RAM)


    return 0;
}
