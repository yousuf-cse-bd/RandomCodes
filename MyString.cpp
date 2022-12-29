/**
 * @file MyString.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Make string using dynamic character typed array & copy constructor
 * @version 0.1
 * @date 2022-12-29
 * @since ThursDay; 05:07 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
#pragma pack(1)
using namespace std;

class MyString{
private:
   char *str{nullptr};
public:
    MyString():str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
    MyString(const char *const s):MyString(){
        if(s == nullptr){
            str = new char[1];
            *str = '\0';
        }else{
            str = new char[strlen(s)];
            strcpy(str, s);
        }
    }
    MyString(const MyString &source):MyString{source.str}{
        // str = new char[strlen(source.str)];
        // strcpy(str, source.str);
    }
    ~MyString(){
        delete [] str;
    }
    void display(void)const{
        cout<<str<<": "<<getLenght()<<endl;
    }
    size_t getLenght(void)const{
        return (strlen(str));
    }
    const char *getStr(void)const{
        return str;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    MyString empty;
    empty.display();
    MyString yousuf("YousufAli");
    yousuf.display();

    MyString student{yousuf};
    student.display();


    return 0;
}
