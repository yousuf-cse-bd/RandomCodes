/**
 * @file PureVirtualFuncAbsClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief In method calling time don't use (->) arrow-operator
 * @version 0.1
 * @date 2023-03-03
 * @since FriDay; 07:45 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Interface{
private:
	friend ostream &operator<< (ostream &output, const Interface &interface){
		interface.print(output);
		return output;
	}
protected:
	virtual void print(ostream &output) const = 0;
public:
	virtual ~Interface() = default;
};

class Shape{
private:
	string name{};
protected:
	Shape() = default;
	Shape(const string_view &name):name{name}{
	}
public:
	virtual double perimeter(void) const = 0;
	virtual double surface(void) const = 0;
	/*If destructor is not public you won't be able tot delete base-pointer*/
	virtual ~Shape() = 0; /*Pure virtual destractor*/
};
Shape ::~Shape(){ /*Pure virtual destractor definition*/
	cout<<"~~~Shape Destructor~~~"<<endl;
}

class Circle final: public Shape{
private:
	double radius{};
	inline static constexpr double PI {3.1459};
public:
	Circle() = default;
	Circle(const string_view &name,  const double &radius):Shape{name}, radius{radius}{
		
	}
	virtual double perimeter(void) const override{
		return (2*PI*radius);
	}
	virtual double surface(void) const override{
		return (PI*radius * radius);
	}
	virtual ~Circle() = default;
};

class Rectangle final :public Shape{
private:
	double width {};
	double length{};
public:
	Rectangle() = default;
	Rectangle(const string_view &name, const double &width, const double &length)
		:Shape{name}, width{width}, length{length}{
		
	}
	
	virtual double perimeter(void) const override{
		return (2*length + 2*width);
	}
	virtual double surface(void) const override{
		return (length * width);
	}
	
	virtual ~Rectangle() = default;
};


int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	const Shape *shapeCircle = new Circle{"Circle", 10.0};
	if(shapeCircle){
		cout<<"Perimeter of Circle: "<<(*shapeCircle).perimeter()<<" Square Unit."<<endl;
		cout<<"Surface of Circle: "<<(*shapeCircle).surface()<<" Square Unit."<<endl;
		
		cout<<"Dynamic type of shapeRectangle: "<<typeid(*shapeCircle).name()<<endl;
	}
	else{
		cout<<"The memory allocation is NOT done...!"<<endl;
	}
	
	delete shapeCircle;
	shapeCircle = nullptr;
	
	const Shape *shapeRectangle = new Rectangle("Rectanle", 10.0,10.0);
	if(shapeRectangle){
		cout<<"Perimeter of Rectangle: "<<(*shapeRectangle).perimeter()<<" Sqaure Unit."<<endl;
		cout<<"Surface of Rectangle: "<<(*shapeRectangle).surface()<<" Sqaure Unit."<<endl;
		
		cout<<"Dynamic type of shapeRectangle: "<<typeid(*shapeRectangle).name()<<endl;
	}
	delete shapeRectangle;
	shapeRectangle = nullptr;
	
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
