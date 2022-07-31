/**
 * @file BigMiddleSmallValueUsingTernaryOperator.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of ternary operator for job.
 * @version 0.1
 * @date 2022-07-28
 * @since ThursDay; 8:12 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int firstNumber, secondNumber, thirdNumber;
    cout<<"\tEnter the first number here: ";
    cin>>firstNumber;
    cout<<"\tEnter the second number here: ";
    cin>>secondNumber;
    cout<<"\tEnter the third number here: ";
    cin>>thirdNumber;

    /*Finding big value include three numbers*/
    (firstNumber > secondNumber)? (firstNumber > thirdNumber)?
    cout<<"The big value first: "<<firstNumber<<endl :
    cout<<"The big value second: "<<secondNumber<<endl:
    (secondNumber > thirdNumber)?
    cout<<"The big value second: "<<secondNumber<<endl:
    cout<<"The big value third: "<<thirdNumber<<endl;

    /*Finding small value include three numbers*/
    (firstNumber < secondNumber)? (firstNumber < thirdNumber)?
    cout<<"The small value first: "<<firstNumber<<endl:
    cout<<"The small value third: "<<thirdNumber<<endl:
    (secondNumber < thirdNumber)? 
    cout<<"The small value second: "<<secondNumber<<endl:
    cout<<"The small value third: "<<thirdNumber<<endl;
    
    /*Finding middle value include three numbers*/
    if((firstNumber < secondNumber && secondNumber < thirdNumber) || (firstNumber > secondNumber && secondNumber > thirdNumber)){
        cout<<"The middle value second: "<<secondNumber<<endl;
    }
    else if((secondNumber < firstNumber && firstNumber < thirdNumber) || (secondNumber > firstNumber && firstNumber > thirdNumber)){
        cout<<"The middle value first: "<<firstNumber<<endl;
    }
    else{
        cout<<"The middle value third: "<<thirdNumber<<endl;
    }

   
    
    return 0;
}
