/**
 * @file StructClassInitialized.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Direct initialization struct/class member variable without any method | constructor
 * @version 0.1
 * @date 2023-03-15
 * @since WednesDay; 03:03 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

struct Person1{
	string name{};
	int age{};
	
	friend void operator<< (ostream &cout, const Person1 &person1){
		cout<<"["<<person1.name<<" : "<<person1.age<<"]\n";
	}
};

class Person2{
	friend ostream &operator<< (ostream &cout, const Person2 &person2){
		cout<<"["<<person2.name<<" : "<<person2.age<<"]";
		return cout;
	}
public:
	string name{};
	int age{};
};

int main(int argc, const char *const argv[]){
	cout<<fixed;
	cout.precision(2);
	Person1 p1{"Yousuf1", 26};
	cout<<"from struct, p1 = "<<p1;
	
	Person2 p2{"Yousuf2", 26};
	cout<<"from class, p2 = "<<p2<<endl;
	cout<<"\t\t\tHapyEnding!!!"<<endl;
    return 0;
}
