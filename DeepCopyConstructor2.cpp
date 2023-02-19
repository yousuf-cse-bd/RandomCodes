/**
 * @file DeepCopyConstructor2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief You have to use deep-copy constructor when used heap memory
 * @version 0.1
 * @date 2023-01-23
 * @since MonDay; 03:36 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class DeepCopyConstructor{
    friend ostream &operator<< (ostream &output, const DeepCopyConstructor &deepCopyConstructor){
        output<<"deepCopyConstructor: ["<<*deepCopyConstructor.data<<"]";
        return output;
    }
private:
    int *data{nullptr};
public:
    DeepCopyConstructor(){};
    DeepCopyConstructor(int d){ /*Only pass by value*/
        data = new int;
        if(data){ /*Data is not nullptr*/
            *data = d;
        }
        else{
            cout<<"Memory allocation is NOT done..!"<<endl;
        }
    }
    /*Deep copy used delegating-constructor*/
    DeepCopyConstructor(const DeepCopyConstructor &source):DeepCopyConstructor{*source.data}{
        cout<<"\tDeepCopy - constructor"<<endl;
    }

    ~DeepCopyConstructor(){
        delete data;
        data = nullptr;
    }

    int getData(void){ /*Const does not work here*/
        return *data;
    }
};

const void showData(DeepCopyConstructor &deepCopyConstructor){
    cout<<"The value: "<<deepCopyConstructor.getData()<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DeepCopyConstructor d1 {10};
    cout<<"d1 = "<<d1<<endl;
    cout<<d1.getData()<<endl;
    cout<<"=============================================="<<endl;
    DeepCopyConstructor d2 {d1};
    cout<<"d2 = "<<d2<<endl;
    showData(d2);

    printf("Happy Ending...!%c %c %c\n", 2, 2, 2);
    return 0;
}
