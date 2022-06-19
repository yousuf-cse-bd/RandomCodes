/**
 * @file FirstMinimumValue.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief WAP return the position first minimum value among the first n elements of the given array x
 * @version 0.1
 * @date 2022-06-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <conio.h>
#include <climits>
using namespace std;

int minimumPosition(float x[], unsigned n){
    unsigned int i, index;
    float minValue = x[0];
    for(unsigned int i = 0; i<n; i++){
        if(minValue > x[i]){ // if array item big ->> return big
            minValue = x[i];
            index = i;
        }
    }
    return index;
}

int main(int argc, char const *argv[]){
    /* code */
    int n;
    float x[10] = {12.5, 3.1, 45.1, 8.2, 19.3, 10.0, 7.8, 23.7, 0.9, 5.2};
    unsigned int size = sizeof(x) / sizeof(float);
    cout<<"Size: "<<size<<endl;
    for(auto item: x){
        cout<<item<<" ";
    }
    cout<<endl;
    cout<<"Enter n value here: ";
    cin>>n;

    if(n>=1 && n<=10){
        unsigned int index = minimumPosition(x, n);
        cout<<"Within the first "<<n<<" Elements of array, the first minimum value is stored at index: "<<index<<endl;
        cout<<"And The Value: "<<x[index]<<endl;
        getch();
    }
    else{
        cout<<"Invalid value of n...Press any key to terminate the program..."<<endl;
        getch();
        exit(0);
    }
  
    return 0;
}
