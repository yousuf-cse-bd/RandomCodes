/**
 * @file NumberGuessingGame.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple number guessing game
 * @version 0.1
 * @date 2023-02-04
 * @since SaturDay; 07:46 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    srand(time(nullptr));
    constexpr int maxLimit {5};
    int guessNumber {};
    while(true){
        cout<<"Enter your guess between 1 to "<<maxLimit<<": ";
        cin>>guessNumber;
        const int randomNumber {rand() % maxLimit + 1};
        if(guessNumber == randomNumber){
            cout<<"You have won.!!!"<<endl;
            break;
        }
        else{
            cout<<"You have lost..!"<<endl;
            cout<<"The random number was: "<<randomNumber<<endl;
        }
    }
    system("pause>0");
    return 0;
}
