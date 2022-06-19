#include <iostream>
using namespace std;

// Optimized implementation of Bubble Sort
void swap(int * xp, int * yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Buble Sort
void bubkleSort(int A[], int n){
    int i, j;
    bool swapped;
    for(i = 0; i<n - 1; i++){
        swapped = false;
        for(j = 0; j<n - i - 1;j++){
            if(A[j] > A[j+1]){
                swap(&A[j], &A[j+1]);
                swapped = true;
                // cout<<"Swapped True"<<endl;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if(swapped == false){
            // cout<<"Br"<<endl;
            break;
        }
    }
}
/*Function to print an array*/

void printArray(int A[], int size){   
    for(int i = 0; i<size; i++){
        cout<<"A["<<i<<"] = "<<A[i]<<"\n";
    }
}
// Driver program to test above functions
int main(int argc, char const *argv[]){
    /* code */
    // int A[] = {64, 34, 25, 12, 22, 11, 90};
    int A[] = {1,2,3,4,5};
    int n = sizeof(A) / sizeof(int);
    bubkleSort(A, n);
    cout<<"Sorted Array:"<<endl;
    printArray(A, n);
    return 0;
}
