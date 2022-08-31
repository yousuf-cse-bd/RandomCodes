/**
 * @file TimeCountingRecursionAndIteration.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Time difference between recursive function and loop iteration.
 * @version 0.1
 * @date 2022-08-31
 * @since WednesDay; 12:13 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
using namespace std;
/*Count length of string using loop iteration*/
unsigned int lengthOfString(const char * line){
    unsigned int length = 0;
    while(*line++){
        length++;
    }
    return length;
}
/*Count length of string using recurive function*/
unsigned int lenthOfStringLine(const char* line){
    if(*line){
        return (1 + lenthOfStringLine(line + 1));
    }else{
        return (0);
    }
}

/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    time_t startTime, endTime;
    const char* line = "Muhammad Yousuf Ali";
    // cout<<lengthOfString(line)<<endl;

    time(&startTime);
    cout<<"Start Time for Iteration: "<<startTime<<endl;
    for(unsigned int count = 0; count < 100000000; count++){
        lengthOfString(line);
    }
    time(&endTime);
    cout<<"End Time for Iteration: "<<endTime<<endl;
    cout<<"Precessing time wtih iteration: "<<(endTime - startTime)<<" Seconds"<<endl;
    // cout<<lenthOfStringLine(line)<<endl;

    time(&startTime);
    cout<<"\nStart Time for Recursion: "<<startTime<<endl;
    for(unsigned int count = 0; count < 100000000; count++){
        lenthOfStringLine(line);
    }
    time(&endTime);
    cout<<"End Time for Recursion: "<<endTime<<endl;
    cout<<"Precessing time wtih Recursion: "<<(endTime - startTime)<<" Seconds"<<endl;
    return 0;
}
