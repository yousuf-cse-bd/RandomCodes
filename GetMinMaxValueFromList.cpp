/**
 * @file GetMinMaxValueFromList.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Finding min and max values from vector list
 * @version 0.1
 * @date 2023-02-20
 * @since MonDay; 10:50 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

void minMax(const vector <size_t> &vectorList, size_t &minIndex, size_t &maxIndex){
    for(size_t i{0}; i < vectorList.size(); i++){
        if(vectorList.at(minIndex) >vectorList.at(i)){
            minIndex = i;
        }

        if(vectorList.at(maxIndex) < vectorList.at(i)){
            maxIndex = i;
        }
    }
}
bool linerSearch(const vector <size_t> &vectorList, const size_t &key){
    for(const size_t &element: vectorList){
        if(element == key){
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr size_t limit{10};
    vector <size_t> vectorList(limit);

    srand(time(nullptr));
    cout<<"Vector list: ";
    size_t i{0};
    while(i < limit){ /*Ignore duplicate value?*/
        vectorList.at(i) = (rand() % limit);
        cout<<vectorList.at(i)<<" ";
        i++;
    } 
    cout<<endl;

   
    size_t minIndex {0}, maxIndex{0};
    minMax(vectorList, minIndex, maxIndex);
    cout<<"MinValue: "<<vectorList.at(minIndex)<<" & its index: "<<minIndex<<endl;
    cout<<"MaxValue: "<<vectorList.at(maxIndex)<<" & its index: "<<maxIndex<<endl;
    return 0;
}
