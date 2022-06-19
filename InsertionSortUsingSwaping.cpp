/**
 * @file InsertionSortUsingSwaping.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>
using namespace std;
void showTheVector(vector <int> V);

/*The vector sorted by ascending order*/
void insertionSortAlgorithm(vector <int> V){
    for(unsigned int i = 1; i<V.size(); i++){
        unsigned int j = i;
        while(j>0 && V[j - 1] > V[j]){ // PreArray is greater than PostArray
            swap(V[j-1], V[j]);
            --j;
        }
    }
    showTheVector(V);
}

void showTheVector(vector <int> V){
    for(auto x : V){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    vector <int> V;
    for(unsigned int i = 10; i>=1; i--){
        V.push_back(i);
    }
    insertionSortAlgorithm(V);
    
    return 0;
}
