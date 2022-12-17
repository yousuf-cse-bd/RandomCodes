/**
 * @file DynamicArrayChallenge.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dynamic array challenge using ponter return from function
 * @version 0.1
 * @date 2022-12-17
 * @since SaturDay; 05:45 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
void print(const int *const array, const unsigned int size); /*Function prototype*/
int *applyAll(const int *const array1, const unsigned int array1Size, const int *const array2, const unsigned int array2Size);

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int array1 [] {1, 2, 3, 4, 5};
    int array2 [] {10, 20, 30};
    const unsigned int array1Size {(sizeof(array1) / sizeof(int))};
    const unsigned int array2Size {(sizeof(array2) / sizeof(int))};
    cout<<"Array1: ";
    print(array1, array1Size); /*Argument array1 and its size*/
    cout<<"Array2: ";
    print(array2, array2Size); /*Argument array2 and its size*/
    int *result {nullptr};
    result = applyAll(array1, array1Size, array2, array2Size);
    constexpr unsigned int resultSize {array1Size * array2Size}; /*A new key-word*/
    cout<<"Result: ";
    print(result, resultSize);
    delete [] result;
    return 0;
}

int *applyAll(const int *const array1, const unsigned int array1Size, const int *const array2, const unsigned int array2Size){
    unsigned int sizeResult = array1Size * array2Size;
    int *result {nullptr};
    result = new int [sizeResult];
    for(unsigned int i {0}; i < sizeResult; i++){ /*All elements are assigned by one*/
        *(result + i) = 1;
    }
    /* (10x1), (10x2), (10x3), (10x4), (10x5)
        (20x1), (20x2), (20x3), (20x4), (20x5)
        (30x1), (30x2), (30x3), (30x4), (30x5)
    */
    unsigned int index {0};
    for(unsigned int i {0}; i < array2Size; i++){ /*Outer loop is small and inner loop is big*/
        for(unsigned int j {0}; j < array1Size; j++){
            *(result + index) = *(array2 + i) * *(array1 + j); /*Pointer offset notation*/
            index++;
        }
    }
    return result;
    delete [] result; /*My style || opinion*/
}

void print(const int *const array, const unsigned int size){
    cout<<"[ ";
    for(unsigned int i {0}; i < size; i++){
        cout<<*(array + i)<<" ";
    }
    cout<<"]";
    cout<<endl;
}
