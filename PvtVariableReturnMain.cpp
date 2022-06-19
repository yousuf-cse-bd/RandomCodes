/**
 * @file Class.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
class PvtVariableReturnMain
{
private:
   int n;
public:
    PvtVariableReturnMain(int n){
        this->n = n;
    }
    ~PvtVariableReturnMain(){}
    int myFunction(){
        return n;
    }
};



int main(int argc, char const *argv[])
{
    /* code */
    PvtVariableReturnMain object = PvtVariableReturnMain(10);
    cout<<"Return the value: "<<object.myFunction()<<endl;
    return 0;
}
