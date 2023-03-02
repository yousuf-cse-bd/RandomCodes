/**
 * @file DefaultArgWithVirtualFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Default arguments with virtual functions can be very confusing.   They're best avoided
 * @version 0.1
 * @date 2023-03-02
 * @since ThursDay; 05:56 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#pragma pack(1)
using namespace std;

class Base{
public:
	/*Don't use auto as return typed here*/
	virtual ssize_t add(const int &number1 = 15, const int &number2 = 20) const{
		return (number1 + number2);
	}
	virtual ~Base() = default;
};

class Derived final: public Base{
public:
	virtual ssize_t add(const int &number1 = 15, const int &number2 = 20) const{
		return (number1 + number2 + 1);
	}
	virtual ~Derived() = default;
};

int main(int argc, const char *const argv[]){
	Base b1{};
	Derived d1{};

	Base *ptr{&b1};
	cout<<"In Base: "<<ptr->add(10, 20)<<endl;
	
	ptr = &d1;
	cout<<"In Derived: "<<ptr->add(10, 20)<<endl;
	
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}

