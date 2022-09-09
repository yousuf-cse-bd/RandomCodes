/**
 * @file EnumDataType.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Enum data type for week day
 * @version 0.1
 * @date 2022-09-09
 * @since FriDay; 05:32 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    enum week{Sun, Mon, Tue, Wed, Thur, Fri, Sat};
    week firstDay = Sun;
    /*Retun index value unsigned int*/
    cout<<firstDay<<endl;
    cout<<sizeof(firstDay)<<endl; // 4 bytes
    return 0;

}
