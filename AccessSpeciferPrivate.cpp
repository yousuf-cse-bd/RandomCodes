/**
 * @file AccessSpeciferPrivate.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Testing inheritance access specifier for private mode
 * @version 0.1
 * @date 2023-02-13
 * @since MonDay; Since 09:36 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Base{
private:    
    string mPrivate{"Private"}; /*Private data does not inheriting perform*/
protected:  
    string mProtected{"Protected"};
public:
    string mPublic{"Public"};
    Base() = default;
    ~Base() = default;
};

class Derived : private Base{
public:     
    void myFunction(void)const{
        cout<<"\t\tIn Derived Class"<<endl;
        cout<<"Public Data: ("<<mPublic<<") Now Private"<<endl; /*Now: Private*/
        cout<<"Protected Data: ("<<mProtected<<") Now Private"<<endl; /*Now: Private*/
        // cout<<"Private Data: "<<mPrivate<<endl; /*Not inherited*/
    }

    Derived() = default;
    ~Derived() = default;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Derived d1 {};
    d1.myFunction();
    cout<<"----------------------------------------------"<<endl;
    // cout<<"In main(public): "<<d1.mPublic<<endl; /*Now: Private; Compiler error*/
    // cout<<"In main(protected): "<<d1.mProtected<<endl; 
    // cout<<"In main(private): "<<d1.mPrivate<<endl;
    return 0;
}