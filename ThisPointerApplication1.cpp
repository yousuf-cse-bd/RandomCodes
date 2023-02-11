/**
 * @file ThisPointerApplication1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of this pointer and return this reference
 * @version 0.1
 * @date 2023-02-11
 * @since SaturDay; 05:23 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <string_view>
#pragma pack(1)
using namespace std;

class ThisPointerDog{ /*A dog representation*/
    /*Member Variables*/
private:
    string name {};
    string breed{};
    int *age {nullptr};

    /*Member Methods*/
public:
    ThisPointerDog(){
        cout<<"The constructor for "<<name<<" and reference: "<<this<<endl;
        age = new int;
    }

    ~ThisPointerDog(){
        cout<<"~The desturctor for "<<name<<" and reference: "<<this<<endl;
        delete age;
        age = nullptr;
    }
    /*Setter methods*/
    ThisPointerDog *setName(const string_view &name){ /*Not support const*/
        this->name = name;
        return this;
    }

    ThisPointerDog *setBreed(const string_view &breed){ /*Not support const*/
        this->breed = breed;
        return this;
    }

    ThisPointerDog *setAge(const int &age){ /*Not support const*/
        *(this->age) = age;
        return this;
    }

    const void showInfo(void){
        cout<<"The dog name: "<<name<<endl;
        cout<<"his breed: "<<breed<<endl;
        cout<<"and age: "<<*age<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    // ThisPointerDog dog1 {};
    // dog1.setName("Fluffy")->setBreed("Shepherd")->setAge(2);
    // dog1.showInfo();

    ThisPointerDog *ptrDog1 = new ThisPointerDog{};
    ptrDog1->setName("Pumba")->setBreed("Wire Fox Terrier")->setAge(4);
    ptrDog1->showInfo();
    delete ptrDog1;
    ptrDog1 = nullptr;
    cout<<"-------------------------------------------------------"<<endl;
    ThisPointerDog *ptrDog2 = new ThisPointerDog{};
    ptrDog2->setName("Fluffy")->setBreed("Shepherd")->setAge(2);
    ptrDog2->showInfo();
    delete ptrDog2;
    ptrDog1 = nullptr;


    return 0;
}

