/**
 * @file DanglingPointerSolution.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Solutions of Dangling Pointers
 * @version 0.1
 * @date 2023-01-17
 * @since TuesDay; 03:03 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

/*Solution1: Initialize your pointers immediately upon declaration*/
void solution1(void){
    cout<<"Solution 1"<<endl;
    int *pNumber1 {nullptr};
    int *pNumber2 {new int {101}};
    /*Check for nullptr before use*/
    if(pNumber2 != nullptr){
        cout<<"*pNumber2: "<<*pNumber2<<endl;
    }else{
        cout<<"Invalid address"<<endl;
    }
    delete pNumber1; /*Deallocation*/
    delete pNumber2; /*Deallocation*/
    pNumber1 = nullptr; /*Reseting*/
    pNumber2 = nullptr; /*Reseting*/
    cout<<"Happy ending 1...\n"<<endl;
}

/*Solution2: Right after delete on a pointer,
remember to reset the pointer to nullptr to make it CLEAR it doesn't point anywhere*/
void solution2(void){
    cout<<"Solution 2"<<endl;
    int *pNumber3 {new int {82}};
    /*Use the pointer however you want*/
    cout<<"pNumber3 - "<<pNumber3<<" - "<<*pNumber3<<endl; 
    delete pNumber3;
    pNumber3 = nullptr; /*Reset the pointer*/
    /*Check the nullptr before use*/
    if(pNumber3 != nullptr){
        cout<<"*pNumber3: "<<*pNumber3<<endl; 
    }else{
        cout<<"Invalid memory access!"<<endl;
    }
    cout<<"Happy ending 2...\n"<<endl;
}
/*Solution 3: For multiple pointers pointing same address, Make sure there is one
clear pointer(master pointer) that owns the memory (responsible for releasing when necessary),
other pointers should only be able to dereference when the master pointer is valid*/
void solution3(void){
    cout<<"Solution 3"<<endl;
    int *pNumber4 {new int {101}}; /*Let's say this is master pointer*/
    int *pNumber5 {pNumber4}; /*Slave pointer*/
    /*Dereference the pointer and use them*/
    cout<<"pNumber4 - "<<pNumber4<<" - "<<*pNumber4<<endl;
    if(pNumber4 != nullptr){/*Only use the slave pointers when the master pointer is valid*/
        cout<<"pNumber5 - "<<pNumber5<<" - "<<*pNumber5<<endl;
    }
    delete pNumber4; /*Master relese the memory*/
    pNumber4 = nullptr; /*Master is reset*/

    if(pNumber4 != nullptr){/*Only use the slave pointers when the master pointer is valid*/
        cout<<"pNumber5 - "<<pNumber5<<" - "<<*pNumber5<<endl;
    }
    else{
        cerr<<"WARNING!: Trying to use an invalid pointer."<<endl;
    }
    cout<<"Happy ending 3...\n"<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    solution1(), solution2(), solution3(); /*Using ',' comma operator*/
    return 0;
}
