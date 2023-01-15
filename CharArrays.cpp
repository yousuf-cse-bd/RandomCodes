/**
 * @file CharArrays.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief There are difference char array and C typed string
 * @version 0.1
 * @date 2023-01-15
 * @since SunDay; 12:00 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char name1 [] {"Yousuf"};
    const char name2 [] {'Y', 'o', 'u', 's', 'u', 'f','\0'};
    const char name3 [7] {'Y', 'o', 'u', 's', 'u', 'f'};
    const vector <char> name4 {'Y', 'o', 'u', 's', 'u', 'f'};
    const char *const name5 {"Yousuf"}; /*Not char array therefore size(name5) not supported*/
    const string name6 {"Yousuf"};
    cout<<"Name1: "<<name1<<" Len: "<<strlen(name1)<<"\tSize: "<<size(name1)<<endl;
    cout<<"Name2: "<<name2<<" Len: "<<strlen(name2)<<"\tSize: "<<size(name2)<<endl;
    cout<<"Name3: "<<name3<<" Len: "<<strlen(name3)<<"\tSize: "<<size(name3)<<endl;
    cout<<"Name4: ";
    for(const char &x: name4){cout<<x;}
    cout<<"\tSize: "<<name4.size()<<endl;
    cout<<"Name5: "<<name5<<" Len: "<<strlen(name5)<<endl;
    cout<<"Name6: "<<name6<<" Len: "<<name6.length()<<"\tSize: "<<size(name6)<<endl; /*Also, name6.size()*/

    const char yousuf [6] {'Y', 'o', 'u', 's', 'u', 'f'}; /*This is not a string*/
    printf("Yousuf: %s\nYousuf: ", yousuf);
    puts(yousuf); /*Default a newline*/
    cout<<"Yousuf: "<<yousuf<<endl;
    cout<<"Yousuf: ";
    for(size_t i{0}; i<sizeof(yousuf); i++){
        putchar(*(yousuf+i));
    }
    cout<<"\nYousuf: ";
    for(size_t i{0}; i<size(yousuf); i++){
        putchar(*(yousuf+i));
    }
    cout<<"\nYousuf: ";
    for(const char x: yousuf){
        putchar(x);
    }
    cout<<endl;

    return 0;
}
