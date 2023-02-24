/**
 * @file: OperatorOverloading3.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief: Extraction(>>) & insertion(<<) operator overloading using void in C++
 * @version: 0.1
 * @date: 2023-02-24
 * @since: FriDay; 05:26 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class X{
	friend void operator>>(istream &input, X &x){ /*Must reference operator is needed*/
//		input>>x.name;
		getline(input, x.name); /*Take a line*/
	}
	friend void operator<<(ostream &output, const X &x){
		output<<x.name<<endl;
	}
private:
	string name{};
public:
	X() = default;
	~X() = default;
};

int main(int argc, char const **argv){
	system("cls");
	X x1;
	cout<<"Enter a value here: ";
	cin>>x1;
	cout<<"The entered value: "<<x1;
	return 0;
}