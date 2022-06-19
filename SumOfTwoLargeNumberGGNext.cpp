/**
 * @file SumOfTwoLargeNumberGGNext.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*C++ Program to find sum of two large numbers*/
#include <iostream>
#include <string> // optional
#include <algorithm>
using namespace std;

/*Function for finding sum of larger number*/
string findSum(string str1, string str2){
    /*Before proceeding further, ensure length of str2 is larger*/
    if(str1.length() > str2.length()){
        swap(str1, str2);
    }
    /*Take an empty string for storing result*/
    string result = "";
    /*Calculate length of both string*/
    unsigned int n1 = str1.length();
    unsigned int n2 = str2.length();
    unsigned int difLength = n2 - n1;
    // cout<<"N1 = "<<n1<<endl;
    // cout<<"N2 = "<<n2<<endl;
    // cout<<"Difference = "<<difLength<<endl;

    /*Initially take carry zero*/
    unsigned int carry = 0;

    /*Traverse from end of both strings*/
    for(int i = n1 - 1; i>=0; i--){
        /*Do school mathematics, compute sum of current digits and carry*/
        // Here string expantion into char array
        unsigned int sum = ((str1[i] - '0') + (str2[i+ difLength] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
        // cout<<i<<" ";
    }

    /*Add remaining digits of str2[]*/
    for(int i = n2 - n1 - 1; i>=0; i--){
        unsigned int sum = ((str2[i] - '0')+carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    /*Remaining carry*/
    if(carry){
        result.push_back(carry + '0');
    }

    /*Reverse resultant the string*/

    reverse(result.begin(), result.end());
    return result;
}


/*Driver Code*/
int main(int argc, char const *argv[])
{
    /* code */

    string str1 = "7777555511111111";
    string str2 = "3332222221111";
    cout<<findSum(str1, str2);
    return 0;
}
