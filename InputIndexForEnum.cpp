/**
 * @file InputIndexForEnum.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Enum elelemnt accessing index using recursion function
 * @version 0.1
 * @date 2022-10-18
 * @since TuesDay; 10:44 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*Custom enum indexing, normally start with 0*/
enum WeekName {SunDay = 1, MonDay = 2, TuesDay = 3, WednesDay = 4, ThursDay = 5, FriDay = 6, SaturDay = 7};
class InputIndexForEnum{
private:
    WeekName weekName;
    /*A recursion method*/
    unsigned short int inputIndex(void){
        short int index;
        cout<<"[SunDay = 1, MonDay = 2, TuesDay = 3, WednesDay = 4, ThursDay = 5, FriDay = 6, SaturDay = 7]: ";
        cin>>index;
        if(index >= 1 && index <=7){
            return index;
        }else{
            return inputIndex();
        }
    }
public:
    InputIndexForEnum(){
        unsigned short int inedex = inputIndex();
        InputIndexForEnum :: weekName = (WeekName)inedex; /*Type casting*/
    }
    InputIndexForEnum(WeekName weekName){
        this->weekName = weekName;
    }
    ~InputIndexForEnum(){
        // cout<<"\t\tDesturctor..."<<endl;
        // const char *name[] = {"", "SunDay", "MonDay", "TuesDay", "WednesDay", "ThursDay", "FriDay", "SaturDay"};
        // cout<<"Day of Week Name: "<<*(name+weekName)<<endl;
    }
    void showDayName(void){
        const char *name[] = {"", "SunDay", "MonDay", "TuesDay", "WednesDay", "ThursDay", "FriDay", "SaturDay"};
        cout<<"Day of Week Name: "<<*(name+weekName)<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    InputIndexForEnum withoutArgument;
    withoutArgument.showDayName();
    InputIndexForEnum withArgument(MonDay);
    withArgument.showDayName();
    return 0;
}
