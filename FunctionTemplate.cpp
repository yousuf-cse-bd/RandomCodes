/**
 * @file FunctionTemplate.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple function template
 * @version 0.1
 * @date 2023-02-01
 * @since WednesDay; 04:38 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

template <typename dataType>
const auto functionTemplate(const dataType &var){ /*You can write return type dataType instead auto keyword*/
    return var;
}

template <typename dataType>
const auto inputFunction(const dataType &var){
    cout<<"From caller function: "<<var<<endl;
    dataType inputData {};
    cout<<"Enter a value here: ";
    cin>>inputData;
    cout<<"From called function: ";
    return inputData;
}

/*Template function can not provided defualt paramiterize function*/
template <typename dataType>
const auto defualtParamiterizeFunction(const dataType value = "MuhammadYousufAli"){
    return value;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const string name {"Yousuf"};
    cout<<functionTemplate(name)<<endl;

    int id {171311101};
    cout<<functionTemplate(id)<<endl;
    const string strValue {"Ali"};
    cout<<inputFunction(strValue)<<endl;

    const int registerdNumber {181206};
    cout<<inputFunction(registerdNumber)<<endl;

    cout<<"The from called function: "<<defualtParamiterizeFunction(123)<<endl; /*Must be passed argumnet value*/
    return 0;
}
