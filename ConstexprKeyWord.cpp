/**
 * @file ConstexprKeyWord.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constant-expression in modern C++
 * @version 0.1
 * @date 2022-12-18
 * @since SaturDay; 12:04 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class ConstantExpression{
private:
    static const int c1;
    static constexpr int c2{1}; /*Must initialization other wise comiler throwing error*/
};
const int ConstantExpression :: c1 = 1;

constexpr size_t factorial(const unsigned short int n){ /*constexpr unsigned short int is not valid*/
    if(n <= 1){
        return 1;
    }else{
        return n*(factorial(n-1));
    }
}

constexpr inline int add(const int &a, const int &b) {return (a + b);}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"The factorial: "<<factorial(5)<<endl;
    int a{}, b{};
    cout<<"Enter first value here: ";
    cin>>a;
    cout<<"Enter next value here: ";
    cin>>b;
    cout<<"Added them: "<<add(a, b)<<endl;
    cout<<"Added 5 and 3: "<<add(5, 3)<<endl;
    return 0;
}
