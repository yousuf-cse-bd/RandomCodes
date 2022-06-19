/**
 * @file OddEvenSeparata.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>
#include <algorithm> // just sort
using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

//Ascending order sort
void insertionSort1(vector <int> value){
    for(unsigned int i = 1; i<value.size(); i++){
        unsigned int j = i;
        while(j>0 && value[j - 1] > value[j]){
            swap(value[j-1], value[j]);
            --j;
        }
    }
}
//Descending order sort
void insertionSort2(vector <int> value){
    for(unsigned int i = 1; i<value.size(); i++){
        unsigned int j = i;
        while(j>0 && value[j - 1] < value[j]){
            swap(value[j-1], value[j]);
            --j;
        }
    }

    cout<<"Odd: ";
    for(auto x : value){
        cout<<x<<" ";
    }
    cout<<endl;
   
}

int main(int argc, char const *argv[])
{
    /* code */
    vector <int> V;
    for(unsigned int i = 1; i<=20; i++){
        V.push_back(i);
    }

    //Odd-even different
    vector <int> even;
    vector <int> odd;

    for(unsigned int i = 0; i<V.size(); i++){
        if(V[i] % 2 == 0){
            even.push_back(V[i]);
        }
        if(V[i] % 2 == 1){
            odd.push_back(V[i]);
        }
    }

    // Even ascending order sorted
    insertionSort1(even);
    cout<<"Even: ";
    for(auto x : even){
        cout<<x<<" ";
    }
    cout<<endl;

    //Odd descending order sorted
    // insertionSort2(odd);
   
    sort(odd.begin(), odd.end(), greater <int>());
    cout<<"Odd: ";
    for(int x : odd){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
