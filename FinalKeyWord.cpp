/**
 * @file FinalKeyWord.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Final means final not allow down stream
 * @version 0.1
 * @date 2023-03-02
 * @since ThursDay; 12:10 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Animal{
protected:
	string description{};
public:
	Animal() = default;
	Animal(const string_view &description):description{description}{
		
	}
	virtual void breathe(void) const {
		cout<<"Animal:: breathe() called for "<<description<<endl;
	}
	virtual ~Animal() = default;
};

class Feline: public Animal{
protected:
	string style{};
public:
	Feline() = default;
	Feline(const string_view &description, const string_view &style)
		:Animal{description}, style{style}{
	}
	virtual void breathe(void) const override{
		cout<<"Feline:: breathe() called for "<<description<<endl;
	}
	virtual void run(void) const {
		cout<<"Feline "<<description<<" is running."<<endl;
	}
	virtual ~Feline() = default;
};

class Dog : public Feline{
public:
	Dog() = default;
	Dog(const string_view &description, const string_view &style)
		:Feline{description, style}{
	}
	virtual void bark(void) const {
		cout<<"Dog:: bark() called woof..!"<<endl;
	}
	/*The run method in subclass of Dog can't be overrided
	 Further, derived classes are focused to use the implementation in Dog*/
	virtual void run(void) const override final{
		cout<<"Dog :: run() called."<<endl;
	}
	virtual ~Dog() = default;
};

class BullDog: public Dog{
public:
	BullDog() = default;
	/*Will throw a compiler error*/
//	virtual void run(void) const override{
//		cout<<"BullDog:: run() called."<<endl;
//	}
	virtual ~BullDog() = default;
};

class Cat final : public Feline{
public:
	Cat() = default;
	Cat(const string_view &description, const string_view &style)
		:Feline{description, style}{
	}
	/*Useless virtual method. Cat is final, so no one will be deriving from
	 this class and have a chance to specialize it*/
	virtual void miaw(void) const{
		cout<<"Cat:: miaw() called for cat "<<description<<endl;
	}
	virtual void run(void) const override{
		cout<<"Cat :: run() called."<<endl;
	}
	virtual ~Cat() = default;
};
/*Public Cat (final): Can not derive from final base class*/
//class WildCat: public Cat{
//public:
//	WildCat() = default;
//	
//	~WildCat() = default;
//};


int main(int argc, const char *const argv[]){
	
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
