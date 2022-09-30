/**
 * @file InterchangeSwap.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Universal interchange (swap) code using macros
 * @version 0.1
 * @date 2022-09-30
 * @since FriDay; 07:26 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#define interChange(x, y) do{typeof(x) interChange = x; x = y; y = interChange;} while (false)

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *s1 = "Yousuf Ali";
    const char *s2 = "Muhammad Ali";

    interChange(s1, s2);
    cout<<"s1 = "<<s1<<"\ts2 = "<<s2<<endl;

    string firstName = "Md. Yousuf", lastName = "Ali";

    interChange(firstName, lastName);
    cout<<"First Name: "<<firstName<<"\nLast Name: "<<lastName<<endl;
    return 0;
}
