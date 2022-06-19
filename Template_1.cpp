/****
 * @Author: Muhammad Yousuf Ali
 * @Since: 01 -08 - 2019
 */

#include <iostream>
using namespace std;
template <class anyType>

anyType add(anyType t1, anyType t2){
    return t1 + t2;
}

int main(int argc, char const *argv[])
{
   
    cout<<add(10,20)<<endl;
    cout<<add(10.1,5.0)<<endl;

    string firsName = "Muhammad";
    string lastName = " Yousuf";
    cout<<add(firsName,lastName)<<endl;

    return 0;
}
