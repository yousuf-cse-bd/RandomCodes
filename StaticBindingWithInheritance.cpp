/**
 * @file: StaticBindingWithInheritance.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief: Polymorphism static binding with inheritance
 * @version: 0.1
 * @date: 2023-02-25
 * @since: SaturDay; 10:38 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Shape{
protected:
	string description{};
public:
	Shape(void) = default;
	Shape(const string_view &description):description{description}{
		cout<<"Custom constructor for Shape class."<<endl;
	}
	void draw(void) const{
		cout<<"Shape:: draw() called. Drawing: "<<description<<endl;
	}
	~Shape(void) = default;
};

class Oval : public Shape{
private:
	double xRadius{0.0};
	double yRadius{0.0};
public:
	Oval(void) = default;
	Oval(const double &xRadius, const double &yRadius, const string_view &description)
	:Shape{description}, xRadius{xRadius}, yRadius{yRadius}{ /*Call first Base constructor*/
		cout<<"Custom constructor for Oval class."<<endl;
	}
	void draw(void) const{
		cout<<"Oval:: draw() called. Drawing "<<description<<" with x-radius: "<<xRadius
			<<", y-radius: "<<yRadius<<endl;
	}
	~Oval(void) = default;
protected:
	double getXRadius(void)const{
		return xRadius;
	}
	double getYRadius()const{
		return yRadius;
	}	
};
class Circle : public Oval{
public:
	Circle(void) = default;
	Circle(const double &radius, const string_view &description)
		:Oval{radius, radius, description}{
		/*Here, Oval() constructor is an immediate base class */
		cout<<"Custom constructor for Circle class."<<endl;
	}
	void draw(void)const{
		cout<<"Circle:: draw() called. Drawing "<<description<<" with radius: "
		<<getXRadius()<<endl;
	}
};

/*More functions as you deal with more shape type.
30? 70? 100? It's messy*/
const void drawOval(const Oval &oval){
	oval.draw();
}
const void drawCircle(const Circle &circle){
	circle.draw();
}

int main(int argc, char const **argv){
	system("cls");
	cout.precision(1);
	cout<<fixed;
	
	Shape shape1{"Shape1"};
//	shape1.draw();
	
	Oval oval1{2.0, 3.5, "Oval1"};
//	oval1.draw();
	
	Circle circle1{3.3, "Circle1"};
//	circle1.draw();
 
	/*Base pointer*/
	Shape *shapePtr1 {&shape1};
	shapePtr1->draw();
	
	shapePtr1 = &oval1;
	shapePtr1->draw(); /*Draw an oval*/
	
	shapePtr1 = &circle1;
	shapePtr1->draw(); /*Draw an circle*/
	
	cout<<"--------------------------------------------------------------"<<endl;
	/*Base reference*/
	Shape &shapeReference = oval1;
	shapeReference.draw();
	
	cout<<"==============================================================="<<endl;
	drawCircle(circle1);
	drawOval(oval1);
	cout<<"---------------------------------------------------------------"<<endl;
	/*Shape stored in collections*/
	Circle circleCollection[]{circle1, Circle{10.0, "Circle2"}, Circle{20.0, "Circle3"}};
	Oval ovalCollection[]{oval1, Oval{22.3, 51.1, "Oval2"}};
	/*More arrays as you have more shape types, 100? Messy right?*/
	return 0;
}