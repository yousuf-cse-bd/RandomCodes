/**
 * @file AnimalPolymorphism1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Polymorphism in real life example
 * @version 0.1
 * @date 2023-03-02
 * @since ThursDay; 06:53 AM
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
	virtual void breathes(void) const {
		cout<<"Animal:: breathe() called for: "<<description<<endl;
	}
	virtual ~Animal() = default;
};

class Feline : public Animal{
protected:
	string style{};
public:
	Feline() = default;
	Feline(const string_view &description, const string_view &style):
		Animal{description}, style{style}{}
		
	virtual void breathes(void) const override{
		cout<<"Feline :: breathes() called for: "<<description<<endl;
	}
	virtual void runs(void) const {
		cout<<"Feline "<<description<<" is running."<<endl;
	}
	virtual ~Feline() = default;
};

class Bird : public Animal{
protected:
	string wingColor{};
public:
	Bird() = default;
	Bird(const string_view &description, const string_view &wingColor):
		Animal{description}, wingColor{wingColor}{}
		
	virtual void breathes(void) const override{
		cout<<"Feline :: breathes() called for: "<<description<<endl;
	}
	virtual void flies(void) const {
		cout<<"Bird :: flies() called for: "<<description<<endl;
	}
	virtual ~Bird() = default;
};

class Pigeon : public Bird{
public:
	Pigeon() = default;
	Pigeon(const string_view &description, const string_view &wingColor):Bird{description, wingColor}{}
	virtual void breathes(void) const override{
		cout<<"Pigeon :: breathes() called for pigeon: "<<description<<endl;
	}
	virtual void flies(void) const override{
		cout<<"Pigeon :: flies() called for: "<<description<<endl;
	}
	virtual ~Pigeon() = default;
};

class Crow : public Bird{
public:
	Crow() = default;
	Crow(const string_view &description, const string_view &wingColor):Bird{description, wingColor}{}
	virtual void breathes(void) const override{
		cout<<"Crow :: breathes() called for: "<<description<<endl;
	}
	virtual void flies(void) const override{
		cout<<"Crow :: flies() called for crow: "<<wingColor<<endl;
	}
	virtual void cow(void) const{
		cout<<"Crow ::  cow called for crow: "<<description<<endl;
	}
	virtual ~Crow() = default;
};

class Dog : public Feline{
public:
	Dog() = default;
	Dog(const string_view &description, const string_view &style):Feline{description, style}{}
	virtual void breathes(void) const override{
		cout<<"Dog :: breathe() called for: "<<description<<endl;
	}
	virtual void barks(void) const {
		cout<<"Dog :: barks() called : Woof!"<<endl;
	}
	virtual void runs(void) const override{
		cout<<"Dog "<<description<<" is running."<<endl;
	}
	virtual ~Dog() = default;
};

class Cat : public Feline{
public:
	Cat() = default;
	Cat(const string_view &description, const string_view &style):Feline{description, style}{}
	virtual void breathes(void) const override{
		cout<<"Cat :: breathe() called for: "<<description<<endl;
	}
	virtual void miaw(void) const {
		cout<<"Cat :: miaw() called for cat "<<description<<endl;
	}  
	virtual void runs(void) const override{
		cout<<"Cat "<<description<<" is running."<<endl;
	}
	virtual ~Cat() = default;
};

int main(int argc, const char *const argv[]){
	/*Animal Polymorphism*/
	Dog dog1{"dog1", "dark gray"};
	Cat cat1{"cat1", "black stripes"};
	Pigeon pigeon1{"pigeon1", "white"};
	Crow crow1 {"crow1", "black"};
	
	Animal *animals[] {&dog1, &cat1, &pigeon1, &crow1};
	for(const auto &animal: animals){
		animal->breathes();
	}
	
	cout<<"-----------------------------------"<<endl;
	/*Feline polymorphism*/
	Dog dog2 {"dog2", "dark gray"};
	Cat cat2 {"cat2", "black dtripes"};
	
	Feline *felines[] {&dog2, &cat2};
	for(const auto &feline: felines){
		feline->runs();
	}
	cout<<"------------------------------------"<<endl;
	/*Bird polymorphism*/
	Pigeon pigeon2{"pigeon2", "white"};
	Crow crow2 {"crow2", "black"};
	Bird *birds[] {&pigeon2, &crow2};
	for(const auto & bird: birds){
		bird->flies();
	}
	cout<<"================================="<<endl;
	Pigeon *pPigeon3 = new Pigeon{"pigeon3", "white"};
	Crow *pCrow3 = new Crow{"crow3", "black"};
	if(pPigeon3 && pCrow3){
		Bird *birds1[] {pPigeon3, pCrow3};
		for(const auto &bird: birds1){
			bird->breathes();
		}
	}
	else{
		cout<<"Memory allocation is NOT done...!"<<endl;
	}
	
	delete pPigeon3;
	delete pCrow3;
	pPigeon3 = nullptr;
	pCrow3 = nullptr;
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
