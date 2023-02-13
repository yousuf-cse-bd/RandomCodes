/**
 * @file AccessSpeciferPublic.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Testing inheritance access specifier for public mode
 * @version 0.1
 * @date 2023-02-13
 * @since MonDay; Since 09:34 PM
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
    string getPrivateData(void) const{
        return mPrivate;
    }
public:
    string mPublic{"Public"};
    Base() = default;
    ~Base() = default;
};

class Derived : public Base{
public:     
    void myFunction(void)const{
        cout<<"\t\tIn Derived Class"<<endl;
        cout<<"Public Data: ("<<mPublic<<") Till Public."<<endl; /*Now: Public*/
        cout<<"Protected Data: ("<<mProtected<<") Till Proteccted"<<endl; /*Now: Protected*/
        // cout<<"Private Data: "<<mPrivate<<endl; /*Not inherited*/

        cout<<"Get Private Data Using Protected Function(Base): "<<getPrivateData()<<endl;
    }

    // string getPrivateData(void){ /*Compiler error*/
    //     return mPrivate;
    // }
    Derived() = default;
    ~Derived() = default;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Derived d1 {};
    d1.myFunction();
    cout<<"----------------------------------------------"<<endl;
    cout<<"In main(public): "<<d1.mPublic<<endl;
    // cout<<"In main(protected): "<<d1.mProtected<<endl; /*Compiler error: main is not derived class*/
    // cout<<"In main(private): "<<d1.mPrivate<<endl;
    return 0;
}
