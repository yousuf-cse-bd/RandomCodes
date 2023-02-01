/**
 * @file LambdaFunctionCaptureLists.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Lambda function with capture list and capture mechanism
 * @version 0.1
 * @date 2023-02-01
 * @since WednesDay; 10:41 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Capture lists*/
    const int number1 {10}, number2 {15};
    const auto function1 = [number1, number2](){
        cout<<number1<<" + "<<number2<<" = "<<(number1 + number2)<<endl;
    };
    function1();

    /*Captured by value*/
    int c {42};
    auto function2 = [c](){ /*Inside lambda function is really a copy of c*/
        cout<<"Inner value: "<<c<<" &inner: "<<&c<<endl;
    };

    for(size_t i {0}; i < 5; i++){
        cout<<"Outer value: "<<c<<" &outer: "<<&c<<endl;
        function2();
        c++;
    }

    /*Captured by reference*/
    int cr {42};
    auto function3 = [&cr](){ /*Inside lambda function is really a copy of c*/
        cout<<"Inner value: "<<cr<<" &inner: "<<&cr<<endl;
    };

    for(size_t i {0}; i < 5; i++){
        cout<<"Outer value: "<<cr<<" &outer: "<<&cr<<endl;
        function3();
        cr++;
    }

    return 0;
}
