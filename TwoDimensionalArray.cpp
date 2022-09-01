/**
 * @file TwoDimensionalArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dynamic array using pointer object also dynamic
 * @version 0.1
 * @date 2022-09-01
 * @since ThursDay; 08:12 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

/*Using class*/
class TwoDimensionalArray{
private:
    /* data */
    unsigned int rowsSize, columnsSize;
    /*Double pointer for 2D*/
    int **array;
public:
    TwoDimensionalArray(const unsigned int rowsSize, const unsigned int columnsSize){
        this->rowsSize = rowsSize;
        this->columnsSize = columnsSize;

        /*Memory block for rows*/
        array = new int* [rowsSize];
        for(unsigned int column = 0; column < columnsSize; column++){
            /*Memory block for columns*/
            array[column] = new int[columnsSize];
        }
        // valueAssignAsSellNumber();
    }
    /*Make sell using assign value*/
    void valueAssignAsSellNumber(){
        cout<<"All Sell Values are Below:\n";
        unsigned int startValue = 1;
        for(unsigned int row = 0; row < rowsSize; row++){
            for(unsigned int column = 0; column < columnsSize; column++){
                array[row][column] = startValue++;
                cout<<"\t"<<array[row][column]<<"\t";
            }
            cout<<endl;
        }
    }
    ~TwoDimensionalArray(){
        for(unsigned int column = 0; column <columnsSize; column++){
            /*All columns will be free*/
            delete[] array[column];
        }
        /*All rows will be free*/
        delete[] array;
        cout<<"Thanks...!"<<endl;
    }
};



int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Create an object as pointer-type, that's mean run time*/
    TwoDimensionalArray *arr1 = new TwoDimensionalArray(4, 5);
    arr1->valueAssignAsSellNumber();
    delete arr1;
    
    return 0;
}
