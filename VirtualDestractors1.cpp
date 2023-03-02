/**
 * @file VirtualDestractors1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Must use virtual destructors for virual function
 * @version 0.1
 * @date 2023-03-02
 * @since ThursDay; 09;40 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Animal{
public:
	Animal(){
		cout<<"Animal constructor"<<endl;
	}
	virtual void overrideFunction(void) const {
		cout<<"This is an Animal Class."<<endl;
	}
	virtual ~Animal() {
		cout<<"\t\tAnimal destructor~"<<endl;
	}
};

class Feline : public Animal{
public:
	Feline(){
		cout<<"Feline constructor"<<endl;
	}
	
	virtual void overrideFunction(void) const override{
		cout<<"This is a Feline class."<<endl;
	}
	
	virtual ~Feline(){
		cout<<"\t\tFeline destructor~"<<endl;
	}
};

class Cat final : public Feline{
public:
	Cat(){
		cout<<"Cat constructor"<<endl;
	}
	
	virtual void overrideFunction(void) const override final{
		cout<<"This is a Cat class."<<endl;
	}
	
	virtual ~Cat(){
		cout<<"\t\tCat destructor~"<<endl;
	}
};

const void animal(void){
	Animal a;
}
const void feline(void){
	Feline f;
}
const void cat(void){
	Cat c;
}

int main(int argc, const char *const argv[]){
	animal();
	cout<<"--------------------------------"<<endl;
	feline();
	cout<<"---------------------------------"<<endl;
	cat();
	cout<<"--------------------------------"<<endl;
	
	Animal *a1 = new Animal{};
	delete a1;
	a1 = nullptr;
	cout<<"--------------------------------"<<endl;
	Animal *a2 = new Feline{};
	delete a2;
	a2 = nullptr;
	cout<<"--------------------------------"<<endl;
	Animal *a3 = new Cat{};
	delete a3;
	a3 = nullptr;
	cout<<"--------------------------------"<<endl;
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
