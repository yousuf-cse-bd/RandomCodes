/**
 * @file Histogram2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dynamic histogram displaying 
 * @version 0.1
 * @date 2022-12-04
 * @since SaturDay; 12:04 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <unsigned int> datas{};
    int element{0}; /*This variable must be declared before do-while loop*/
    do{
        cout<<"Enter an element here: ";
        cin>>element;
        datas.push_back(element);
    }while(element > 0);

    cout<<"Displaying the histogram:\n"<<endl;
    for(unsigned int i {0}; i < datas.size()-1; i++){ /*Last index's value is negative*/
        element = datas.at(i);
        unsigned int count {0};
        for(unsigned int j {1}; j <= element; j++){
            if(j % 5 == 0){
                count++;
                cout<<(count * 5);
            }else{
                cout<<"*";
            }
        }
        cout<<"("<<element<<")"<<endl;
    }

    return 0;
}
