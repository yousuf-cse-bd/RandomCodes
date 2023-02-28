/**
 * @file: InterfaceClass.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief: We use abstract classes and pure vitrual functions to achieve it 
 * @version: 0.1
 * @date: 2023-02-28
 * @since: MonDay; 04:35 AM
 * @copyright: Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;

class InterfacePrintable{
	friend ostream &operator<< (ostream &output, const InterfacePrintable &object){
		object.print(output);
		return output;
	}
public:
	virtual void print(ostream &output) const = 0; /*A pure virtual class*/
	virtual ~InterfacePrintable() = default;
};

class Account : public InterfacePrintable{
public:
	virtual void print(ostream &output) const override{
		output<<"Account:: Class"<<endl;
	}
	virtual ~Account() = default;
};

class Savings: public Account{
public:
	virtual void print(ostream &output) const override{
		output<<"Savings:: Class"<<endl;
	}
	virtual ~Savings() = default;
};

class Checking: public Account{
public:
	virtual void print(ostream &output) const override{
		output<<"Checking:: Class"<<endl;
	}
	virtual ~Checking() = default;
};

class Trust: public Account{
public:
	virtual void print(ostream &output) const override{
		output<<"Trust:: Class"<<endl;
	}
	virtual ~Trust() = default;
};

class Cat: public InterfacePrintable{
public:
	virtual void print(ostream &output) const override {
		output<<"Mew Mew..!"<<endl;
	}
	virtual ~Cat() = default;
};

const void print(const InterfacePrintable &object){
	cout<<object<<endl;
}

int main(int argc, const char *const argv[]){
	vector <Account*> objects {new Account{}, new Savings{}, new Checking{}, new Trust{}};
	for(const auto &object: objects){
		cout<<*object<<endl;
	}
//	cout<<"Deallocation Memory"<<endl;
	for(auto &object: objects){
		delete object;
		object = nullptr;
	}
	
	Cat *cat = new Cat{};
	if(cat){
		cout<<*cat<<endl;
		print(*cat);
	}
	else{
		cerr<<"Memory allocation is NOT done!"<<endl;
	}
	delete cat;
	cat = nullptr;
	
	cout<<"\nHappyEnding..."<<endl;
	return 0;
}