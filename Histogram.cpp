/**
 * @file Histogram.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Horizontal histogram displaying
 * @version 0.1
 * @date 2022-12-03
 * @since SaturDay; 11:09 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int size{};
    cout<<"Enter the size of vector here: ";
    cin>>size;

    vector <int> datas;
    for(unsigned int i {0}; i < size; i++){
        int element{};
        cout<<"Enter data item: "<<(i+1)<<": ";
        cin>>element;
        datas.push_back(element);
    }

    cout<<"Displaying the Histogram:"<<endl;
    for(auto element: datas){
        unsigned count {0};
        element = (element < 0)?element*(-1):element;
        for(unsigned int i {1}; i <= element; i++){
            if(i % 5 == 0){
                count++;
                cout<<(5*count);
            }else{
                cout<<"*";
            }
        }
        cout<<"("<<element<<")"<<endl;
    }
    return 0;
}
