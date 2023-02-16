/**
 * @file ObjectIO1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Best practice for OBJECT input-output system
 * @version 0.1
 * @date 2023-02-16
 * @since ThursDay; 10:51 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class ObjectIO{
    static constexpr const char *const defName {"Muhammad Yousuf Ali"};
    string name{};

public:
    ObjectIO(const string_view &name = defName); 
    ObjectIO(const ObjectIO &source):name{source.name}{
        cout<<"Copy constructor invoked"<<endl;
    }
    ~ObjectIO() = default;
    friend istream &operator>> (istream &input, ObjectIO &objectIO);
    friend ostream &operator<< (ostream &output, const ObjectIO &objectIO);
};

istream &operator>> (istream &input, ObjectIO &objectIO){
    input>>objectIO.name;
    return input;
}
ostream &operator<< (ostream &output, const ObjectIO &objectIO){
    output<<objectIO.name;
    return output;
}

ObjectIO::ObjectIO(const string_view &name):name{name}{}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ObjectIO objectIO1 {};
    cout<<"The object: "<<objectIO1<<endl;

    cout<<"Enter an object here: ";
    cin>>objectIO1;
    cout<<"Entered the object: "<<objectIO1<<endl;
    cout<<"--------------------------------------------"<<endl;
    ObjectIO *pObjectIO1 = new ObjectIO{};
    if(pObjectIO1){
        cout<<"Enter an object here2: ";
        cin>>*pObjectIO1;
        cout<<"Entered the object: "<<*pObjectIO1<<endl;
    }
    else{
        cerr<<"Memory allocation NOT done!"<<endl;
    }
    delete pObjectIO1;
    pObjectIO1 = nullptr;
    /*here, Supported all type of object for copy constrcutor like HEAP or Stack*/
    ObjectIO *pObjectIO2 = new ObjectIO{objectIO1};
    cout<<"Again the object: "<<*pObjectIO2<<endl;
    
    delete pObjectIO2;
    pObjectIO2 = nullptr;

    printf("Happy Ending...!%c %c %c\n", 2, 2, 2);
    return 0;
}
