/**
 * @file MultiplicationTableUsingArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A table of the products of two factors, especially the integers 1 to 10.
 * @version 0.1
 * @date 2022-07-29
 * @since FriDay; 5:24 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

const unsigned int rowSize = 10;
const unsigned int columnSize = 10;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int table[rowSize][columnSize];
    unsigned int row, column;

    cout<<"\t\t\t==================="<<endl;
    cout<<"\t\t\tMULIPLICATION TABLE"<<endl;
    cout<<"\t\t\t==================="<<endl;
    cout<<"\n=======================================================";
    cout<<"====================="<<endl;
    for(unsigned int i = 0; i<rowSize; i++){
        row = i + 1;
        for(unsigned int j = 0; j<columnSize; j++){
            column = j + 1;
            table[i][j] = row * column;
            printf("%d\t", table[i][j]);
        }
        cout<<endl;
    }
    return 0;
}
