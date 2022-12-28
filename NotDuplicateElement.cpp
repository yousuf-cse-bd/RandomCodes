/**
 * @file NotDuplicateElement.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A vector list is loaded by integer elements without any dupliacate element
 * @version 0.1
 * @date 2022-12-28
 * @since WednesDay; 12:32 PM 
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;

class NotDuplicate{
private:
    vector <int> vectorList{};
    int element{};
public:
    NotDuplicate(){} /*Dedualt constrcutor*/
    NotDuplicate(const NotDuplicate &source):NotDuplicate(){}/*copy constructor*/
    /*These are by defualt inline functions*/
    void setElement(const int element = 0){
        this->element = element;
        inputElement();
    }
    int getElement(void)const{return element;}
    bool isDuplicate(void);
    void inputElement(void){
        if(isDuplicate()){
            cout<<element <<" is already exist..!"<<endl;
        }else{
            vectorList.push_back(element);
        }
    }
    void display(void)const;
    ~NotDuplicate(){}
};
/*This is also inline function by inline key-word*/
inline bool NotDuplicate ::isDuplicate(void){
    for(const auto &x: vectorList){
        if(x == getElement()){
            return true;
        }
    }
    return false;
} 
inline void NotDuplicate :: display(void) const{ /*Const means READ ONLY*/
    if(vectorList.empty()){
        cout<<"There is any element in the list."<<endl;
    }else if(vectorList.size() == 1){
        cout<<"The element: "<<vectorList.at(0)<<endl;
    }else{
        cout<<"The elements are: ";
        for(const auto &x: vectorList){
            cout<<x<<" ";
        }
        cout<<endl;
    }
        
}
inline void display(NotDuplicate notDuplicate){
    notDuplicate.display();
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    NotDuplicate object;
    display(object);
    object.setElement(10);
    display(object);
    object.setElement(100);
    display(object);
    object.setElement(10);

    return 0;
}
