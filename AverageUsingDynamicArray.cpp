/**
 * @file AverageUsingDynamicArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate average using malloc() HEAP
 * @version 0.1
 * @date 2022-09-23
 * @since FriDay; 10:46 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*User-defined function with default parameter*/
float average(unsigned int n = 10){
    float *elements = (float*) malloc(n * sizeof(int));
    // int score;
    float sum = 0.0;
    for(register unsigned int i = 0; i < n; i++){
        cout<<i+1<<": Enter Score Here: ";
        cin>>*(elements+i);
        sum += *(elements+i);
    }
    free(elements);
    cout<<"\tAverage of them: ";
    return (sum / n);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<average()<<endl;
    return 0;
}
