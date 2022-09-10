/**
 * @file PointerAsAReturnType.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer as a return type
 * @version 0.1
 * @date 2022-09-10
 * @since SaturDay; 05:24 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*x[5] all elements are stayed in HEAP memory for static key-word*/
int *functionX(){
    static int x[5] = {5,23,43,50,60};
    return x;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int *ptr, i;
    ptr = functionX();
    for(i = 0; i<5; i++){
        // cout<<"Element["<<i<<"] = "<<ptr[i]<<endl;
        cout<<"Element["<<i<<"] = "<<*(ptr+i)<<endl;
    }
    return 0;
}
