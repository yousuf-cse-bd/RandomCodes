/**
 * @file CerrAndClog.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Some kinds of ostream
 * @version 0.1
 * @date 2022-12-28
 * @since WednesDay; 04:22 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"cout: Hello Yousuf!"<<endl;
    cerr<<"cerr output: Something went wrong!"<<endl;
    clog<<"clog output: This is log message."<<endl;
    return 0;
}
