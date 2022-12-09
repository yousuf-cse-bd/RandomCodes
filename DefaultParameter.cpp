/**
 * @file DefaultParameter.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Default paramterize argument and its application
 * @version 0.1
 * @date 2022-12-09
 * @since FriDay; 12:09 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

void givenGreeting(string name, const string prefix = "Mr.", string suffix = ""){
    string greeting {"Hello, "};
    greeting += prefix + " " + name + " " + suffix; 
    cout<<greeting<<endl;
    // cout<<"Hello, "<<prefix<<" "<<name<<" "<<suffix<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    givenGreeting("Glenn Jones", "Dr.", "M.D.");
    givenGreeting("James Rogers", "Professor", "Ph.D.");
    givenGreeting("Frnak Miller", "Dr.");
    givenGreeting("William Smith");
    givenGreeting("Mary Howard", "Mrs", "Ph.D");

    return 0;
}
