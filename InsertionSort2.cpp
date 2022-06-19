#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int A[] = {0, 2, 3, 4, 1,5};
    for(unsigned int i = 1; i<sizeof(A) / sizeof(int); i++){
        int currentItem = A[i];
        int j = i - 1;
        //Descending order
        while (A[j] < currentItem && j >= 0){
            /* code */
            // A[j+1] = A[j];
            swap(A[j+1], A[j]);
            j--;
        }
        // A[j+1] = currentItem;     
    }

    // print output result: Descending order
    for(int item : A){
        cout<<item<<" ";
    }
    cout<<endl;

    return 0;
}


