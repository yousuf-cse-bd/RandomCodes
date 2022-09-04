/**
 * @file NiceChar.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief All nice characters
 * @version 0.1
 * @date 2022-09-04
 * @since SunDay; 06:19 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

class NiceChar
{
private:
    /* data */
    unsigned int ascii;
public:
    NiceChar(unsigned int n){
        for(ascii = 1; ascii <= n; ascii++){
            printf("%d = %c\n", ascii, ascii);
        }
    }
    ~NiceChar(){}
};


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    NiceChar *nice = new NiceChar(6);
    delete nice;

    return 0;
}
