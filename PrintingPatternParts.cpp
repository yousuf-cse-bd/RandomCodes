/**
 * @file PrintingPatternParts.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Printing pattern using loops, Credit: MirnmoyHossain
 * @version 0.1
 * @date 2022-07-26
 * @since Tuesday, 8:19 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    
    int n;
    cout<<"Enter nth number here: ";
    cin>>n;
    for(int row = n; row >= 1; row--){
        for(int column = n; column > row; column--){
            cout<<column<<" ";
        }
        for(int column = 1; column <= 2 * row - 1; column++){
            cout<<row<<" ";
        }
        for(int column = row + 1; column <=n; column++){
            cout<<column<<" ";
        }
        cout<<endl;
    }

    for(int i = 1; i<n; i++){
        for(int j = n; j>i; j--){
            cout<<j<<" ";
        }
        for(int j = 1; j<=2*i-1; j++){
            cout<<i+1<<" ";
        }
        for(int j = i + 1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
