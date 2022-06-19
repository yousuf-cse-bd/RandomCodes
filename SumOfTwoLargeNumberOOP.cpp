/**
 * @file SumOfTwoLargeNumberOOP.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief C++ program to find sum of two large numbers.
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <algorithm>
using namespace std;

class SumOfTwoNumber{
private:
    string num1, num2;
    string result;
    public:
    SumOfTwoNumber(){
        system("cls");
        cout<<"Call Constructor."<<endl;
    }
    ~SumOfTwoNumber(){
        cout<<"\nLast Destructor***"<<endl;
    }

    void setData(string num1, string num2){
        this->num1 = num1;
        this->num2 = num2;
        // result = ""; // Here Optional
    }
    string calculateSumThem(){
        /*Beofore proceeding further, ensure length of num2 (str2) is larger*/
        if(num1.length() > num2.length()){
            swap(num1, num2);
        }
        /*Take an empty string for storing result*/
        // result = "";
        /*Calculate length of both strings*/
        unsigned int l1 = num1.length(), l2 = num2.length();
        /*Reverse both strings*/
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        unsigned int index, sum, carry = 0;
        for(index = 0; index<l1; index++){
            /*Do school mathematics, compute sum of current digits and carry*/
            sum = ((num1[index] - '0') + (num2[index] - '0') + carry);
            /*Set adder value*/
            result.push_back(sum % 10 + '0');
            /*Calculate carry for next step*/
            carry = sum / 10;
        }
        /*Add remaining digits of larger number*/
        for(index = l1; index<l2; index++){
            sum = ((num2[index] - '0') + carry);
            result.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        /*Add remaining carry*/
        if(carry){
            result.push_back(carry + '0');
        }

        /*Final result string reverse*/
        reverse(result.begin(), result.end());
        return result;
    }
    
};

/*Main driver code*/
int main(int argc, char const *argv[])
{
    /* code */
    SumOfTwoNumber findSumObject = SumOfTwoNumber();

    long long int lli = LONG_LONG_MAX;
    cout<<"LLI1 = "<<lli<<endl;
    cout<<"LLI2 = "<<lli<<endl;
    string str1 = to_string(lli);
    string str2 = to_string(lli);
    findSumObject.setData(str1, str2);
    cout<<"Sum = "<<findSumObject.calculateSumThem()<<endl;

   
    return 0;
}
