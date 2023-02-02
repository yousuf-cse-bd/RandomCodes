/**
 * @file TemplateFunctionWithPointerParamiters.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Be care full for using pointer in template function, here maximum() compared addresses
 * @version 0.1
 * @date 2023-02-02
 * @since ThursDay; 08:39 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

template <typename dataType>
constexpr auto maximum(const dataType *const value1, const dataType *const value2){
    return (*value1 > *value1)?*value1:*value2;
} 

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const int intNumber1 {51}, intNumber2 {7};
    cout<<"The max value: "<<maximum(&intNumber1, &intNumber2)<<endl;
    return 0;
}
