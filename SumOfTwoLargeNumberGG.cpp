/**
 * @file SumOfTwoLargeNumberGG.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Given two numbers as string. The number may be very large (May not fit in long long int),
 *        the task is to find sum of these two numbers
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief Input: str1 =  "3333311111111111";
 *        Input: str2 = "44422222221111";
 *        Output: Result = 3377733333332222
 * 
 */
#include <iostream>
#include <string> // optional
#include <algorithm>
using namespace std;
/*Function for the finding sum of larger numbers*/
string findSum(string str1, string str2){
    /*Before proceeding further, make sure length of str2 is larger*/

    if(str1.length() > str2.length()){
        swap(str1, str2);
    }
    // Take an empty string for storing result;
    string result = "";
    // Calculate length of bothe string
    unsigned int n1 = str1.length(), n2 = str2.length();
    // cout<<"N1 = "<<n1<<endl;
    // cout<<"N2 = "<<n2<<endl;

    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    unsigned int carry = 0;
    for(unsigned int i = 0; i<n1; i++){
        // Do School mathematics, compute sum of
        // current digits and carry
        unsigned int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    // Add remaning digits of larger number
    for(unsigned int i = n1; i<n2; i++){
        unsigned int sum = ((str2[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    // Add remaining carry
    if(carry){
        result.push_back(carry + '0');
    }
    //Reverse resultant string
    reverse(result.begin(), result.end());

    return result;
}

//Drive code
int main(int argc, char const *argv[])
{
    /* code */
    string str1 = "3333311111111111";
    string str2 = "44422222221111";
    cout<<findSum(str1, str2)<<endl;
    return 0;
}
