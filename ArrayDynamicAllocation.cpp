/**
 * @file ArrayDynamicAllocation.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dynamic array can not support  range based for loop and size() function
 * @version 0.1
 * @date 2023-01-21
 * @since ThursDay; 11:55 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr size_t size {10};
    /*Different ways you can declared an array dynamically and how they are initialized*/
    float *pSalaries {new (nothrow) float [size]}; /*Salaries array will contains garbage values*/

    /*Check nullptr for safety*/
    if(pSalaries != nullptr){
        cout<<pSalaries[0]<<endl;
    }
    else{
        cout<<"Memory allocation faild for pSalaries (float)...!"<<endl;
    }
    delete [] pSalaries;
    pSalaries = nullptr;

    /*Check nullptr for safety*/
    int *pStudents {new (nothrow) int [size]{}}; /*All values initialized to 0*/
    if(pStudents){
        cout<<pStudents[0]<<endl;
        cout<<pStudents[1]<<endl;
    }
    else{
        cout<<"Memory allocation faild for pStudents (int)...!"<<endl;
    }
    delete [] pStudents;
    pStudents = nullptr;
    
    /*Allocationg memory space for an array of size double vars.
    First 5 will be initialized with {1, 2, 3, 4, 5} and the rest will be zero's*/
    double *pScores {new (nothrow) double [size] {1, 2, 3, 4, 5}};
    /*Check nullptr for safety*/
    if(pScores){
        /*Print out elements.
        Can use regular array access notation or pointer arithmetic*/
        for(size_t i {0}; i < size; i++){
            cout<<"pScore["<<i<<"]: "<<pScores[i]<<" = "<<*(pScores + i)<<endl;
        }
    }
    else{
        cout<<"Memory allocation faild for pScore (double)...!"<<endl;
    }
    delete [] pScores;
    pScores = nullptr;

    return 0;
}
