/**
 * @file StreamOperationInPvt.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Stream operations in private mood within inteface class 
 * @version 0.1
 * @date 2023-03-04
 * @since SaturDay; 10:30 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Interface1{
	friend void operator>> (istream &cin, Interface1 &interface1){
		interface1.input(cin);
	}
	friend void operator<< (ostream &cout, const Interface1 &interface1){
		interface1.output(cout);
	}
	
	virtual void input(istream &cin) = 0;
	virtual void output(ostream &cout) const = 0;
};

class Interface2{
	friend istream &operator>> (istream &cin, Interface2 &interface2){
		interface2.input(cin);
		return cin;
	}
	friend ostream &operator<< (ostream &cout, const Interface2 &interface2){
		interface2.output(cout);
		return cout;
	}
	
	virtual void input(istream &cin)  = 0;
	virtual void output(ostream &cout) const = 0;
};

class Test1 : public Interface1{
string x{};
	virtual void input(istream &cin) override{
		cin>>x;
	}
	virtual void output(ostream &cout) const override{
		cout<<x;
	}
};

class Test2 : public Interface2{
string x{};
	virtual void input(istream &cin) override{
		cin>>x;
	}
	virtual void output(ostream &cout) const override{
		cout<<x;
	}
};


int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	Test1 t1{};
	cin>>t1;
	cout<<t1;
	cout<<endl; /*Void return type for another cout statement*/
	
	cout<<"--------------------------------------"<<endl;
	
	Test2 t2{};
	cin>>t2;
	cout<<t2<<endl;
	
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
