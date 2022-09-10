/**
 * @file QuickSortNitonsBook.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of return type pointer and function pointer
 * @version 0.1
 * @date 2022-09-10
 * @since SaturDay; 08:04 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

char stringList[5][5] = {"sad", "mad", "bad", "good", "ugly"};
int intList[] = {9,4,2,0,4,4,0,4,0};
/*Tow void type pointer variables as parameter*/
int stringSort(const void *a, const void *b){
    /*Two string compare and from void pointer type-casting to char-pointer-type*/
    return(strcmp((char*)a, (char*)b));
}
/*Tow int type pointer variables as parameter*/
int intSort(const int *a, const int *b){
    return (*a - *b);
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Sorted string list in ascending order:"<<endl;
    qsort((void*)stringList, 5,sizeof(stringList[0]), stringSort);
    for(unsigned int i = 0; i < 5; i++){
        cout<<stringList[i]<<' ';
    }
    cout<<"\nSorted int list in ascending order:"<<endl;
    qsort(intList,
    (sizeof(intList)/sizeof(int)), sizeof(int),
    (int(*) (const void*, const void*)) intSort);
    for(unsigned int i = 0; i < sizeof(intList)/sizeof(int); i++){
        cout<<intList[i]<<' ';
    }
    cout<<endl;
    return 0;
}
