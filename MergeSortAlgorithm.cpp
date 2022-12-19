/**
 * @file MergeSortAlgorithm.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation merge sort algorithm using vector reference variable 
 * @version 0.1
 * @date 2022-12-19
 * @since MonDay; 12:18 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

/*Merge sorting conquer part*/
void mergeSortConquer(vector <int> &list, const size_t left, const size_t mid, const size_t right){
    vector <int> temp (right + 1); /*Given vector size*/
    /*Index i is denoted leftSubList, j is denoted rightSubList*/
    size_t i{left};
    size_t j{mid+1}; /*j = mid + 1, becuase of rigth-sub-list lower index*/
    size_t k{left}; /*Index k for temp vector*/
    /*Traversing left-sub-list to right sub-list*/
    while(i <= mid && j <= right){
        if(list.at(i) < list.at(j)){
            temp.at(k) = list.at(i);
            i++, k++;
        }else{
            temp.at(k) =list.at(j);
            j++, k++;
        }
    }
    /*Remaining left-sub-list*/
    while(i <= mid){
        temp.at(k) = list.at(i);
        i++, k++;
    }
    /*Remaining right-sub-list*/
    while(j <= right){
        temp.at(k) =list.at(j);
        j++, k++;
    }
    /*Copy to temporary list to real-list*/
    for(i = left; i <= right; i++){
        list.at(i) = temp.at(i);
    }
}

/*Merge soriting divided part*/
void mergeSort(vector <int> &list, const size_t left, const size_t right){
    if(left == right){
        return;
    }
    else{ /*left < right*/
        size_t mid {left + (right - left)/2};
        mergeSort(list, left, mid);
        mergeSort(list, mid+1, right);
        mergeSortConquer(list, left, mid, right);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr size_t size {25};
    vector <int> list(size);
    srand(time(nullptr));
    for(size_t i {0}; i < size; i++){
        list.at(i) = (rand() % size);
    }

    constexpr size_t left{0}, right {size - 1};
    mergeSort(list, left, right);
    cout<<"Ascending order sorting: ";
    for(const auto x: list){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}
