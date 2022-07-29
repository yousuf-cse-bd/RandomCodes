/**
 * @file DoWhileLoop.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Do While Loops
 * @version 0.1
 * @date 2022-07-29
 * @since Friday; 5:15PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    // type 1
    unsigned int counter = 1;
    do{
        cout<<counter<<" ";
        counter++;
    }while(counter <= 10);
    cout<<endl;

    // type 2
    counter = 1;
    do{
        /* code */
        cout<<counter++<<" ";
    } while (counter <= 10);
    cout<<endl;
    
    // type 3
    counter = 1;
    do{
        cout<<counter<<" ";
    }while(++counter<=10);
    cout<<endl;
    return 0;
}
