/**
 * @file VectorPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer vector, function overloading with string
 * @version 0.1
 * @date 2022-12-12
 * @since MonDay; 12:16 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

void showData(vector <int> *ids){
    cout<<"Using function, IDs are: ";
    for(auto x: *ids){
        cout<<x<<" ";
    }
    cout<<endl;
}
void showData(vector <string> *name){
    cout<<"Using function, Names are: ";
    for(auto x: *name){
        cout<<x<<" ";
    }
    cout<<endl;
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> ids {101, 102, 103, 105};
    vector <int> *intPointer{&ids};
    cout<<"ID are: ";
    for(auto x: *intPointer){
        cout<<x<<" ";
    }
    cout<<endl;
    vector <string> names {"Muhammad", "Yousuf", "Ali"};
    vector <string> *vectorPointer{&names};
    
    cout<<"First Named: "<<(*vectorPointer).at(0)<<endl;
    /*Range based for-each loop is supported*/
    cout<<"Names are: ";
    for(auto name: *vectorPointer){
        cout<<name<<" ";
    }
    cout<<endl;

    showData(&ids);
    showData(&names);
    return 0;
}
