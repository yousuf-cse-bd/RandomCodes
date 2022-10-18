/**
 * @file EnumAndClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constructor overloading and enum data type
 * @version 0.1
 * @date 2022-10-18
 * @since TuesDay; 09:58 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
#pragma pack(1)
using namespace std;

enum accountType {Current = 1, Saving = 2, Fixed = 3};
class EnumAndClass{
private:
    unsigned int id;
    char name[25];
    accountType accType;
    unsigned short int inputIndex(void){
        short int index;
        cout<<"Enter Account Type[Current = 1, Saving = 2, Fixed = 3]: ";
        cin>>index;
        if(index > 0 && index <= 3){
            return index;
        }else{
            cout<<"\tYour Entered Index is Not Valid...!"<<endl;
            return inputIndex();
        }
    }
public:
    EnumAndClass(){
        unsigned short int index;
        cout<<"Enter Account Number: ";
        cin>>id;
        cout<<"Enter Account Holder: ";
        cin>>name;
        
        index = inputIndex();
        accType = (accountType)index;
    }
    EnumAndClass(unsigned int id, const char *name, accountType accType){
        this->id = id;
        strcpy(this->name, name);
        this->accType = accType;
    }
    void showData(void){
        const char *typeName[] = {"", "Current", "Saving", "Fixed"};
        cout<<"Account Number: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Account Type: "<<*(typeName+accType)<<endl;
    }
    ~EnumAndClass(){}
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    EnumAndClass object;
    object.showData();

    EnumAndClass yousuf(101, "Yousuf", Saving);
    yousuf.showData();
    return 0;
}
