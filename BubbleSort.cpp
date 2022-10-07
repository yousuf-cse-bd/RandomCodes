/**
 * @file BubbleSort.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Construct bubble sort in main function
 * @version 0.1
 * @date 2019-11-20
 * @since: WedensDay; 09:12 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*Very ordinary coding style*/
int main(void){
    system("cls");
    int i, j, n;
    int tmp;
    cout<<"Enter Nth = ";
    cin>>n;
    int A[n];

    for(i = 0; i<n ;i++){
        cout<<"["<<i<<"] = ";
        cin>>A[i];
    }

    for(i = 0;i<n - 1;i++){
        for(j = 0; j<n - i - 1 ;j++){
            if(A[j]>A[j+1]){
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }

    cout<<endl;
    for(i = 0; i<n ;i++){
        cout<<"["<<i<<"] = "<<A[i]<<endl;
    }

    return 0;
}

