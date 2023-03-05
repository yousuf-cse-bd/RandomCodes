/**
 * @file DelegatingConstructor2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Delegating constructor type 2 and advantage: no need this
 * @version 0.1
 * @date 2023-03-05
 * @since SunDay; 11:56 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <memory>
#pragma pack(1)
using namespace std;

class Test{
private:
	int number1{}, number2{}, number3{}, number4{};
public:
	Test(void):Test{0, 0, 0, 0}{
		cout<<"Default constructor"<<endl;
	}
	Test(const int &number1):Test{number1, 0, 0, 0}{
		cout<<"Single paramiterize constructor"<<endl;
	}
	Test(const int &number1, const int &number2):Test{number1, number2, 0, 0}{
		cout<<"Double paramiterize constructor"<<endl;
	}
	Test(const int &number1, const int &number2, const int &number3):
		Test{number1, number2, number3, 0}{
		cout<<"Triple paramiters"<<endl;
	}
	Test(const int &number1, const int &number2, const int &number3, const int &number4)
		:number1{number1}, number2{number2}, number3{number3}, number4{number4}{
		cout<<"Four paramiters"<<endl;
	}
	void display0(void) const {
		cout<<"Number1: "<<number1<<endl;
		cout<<"Number2: "<<number2<<endl;
		cout<<"Number3: "<<number3<<endl;
		cout<<"Number4: "<<number4<<endl;
	}
	void display1(void) const {
		cout<<"Number1: "<<number1<<endl;
		cout<<"Number2: "<<number2<<endl;
		cout<<"Number3: "<<number3<<endl;
		cout<<"Number4: "<<number4<<endl;
	}void display2(void) const {
		cout<<"Number1: "<<number1<<endl;
		cout<<"Number2: "<<number2<<endl;
		cout<<"Number3: "<<number3<<endl;
		cout<<"Number4: "<<number4<<endl;
	}void display3(void) const {
		cout<<"Number1: "<<number1<<endl;
		cout<<"Number2: "<<number2<<endl;
		cout<<"Number3: "<<number3<<endl;
		cout<<"Number4: "<<number4<<endl;
	}
	void display4(void) const {
		cout<<"Number1: "<<number1<<endl;
		cout<<"Number2: "<<number2<<endl;
		cout<<"Number3: "<<number3<<endl;
		cout<<"Number4: "<<number4<<endl;
	}
	~Test(void) = default;
};

int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	shared_ptr <Test> t0 = make_shared <Test>();
	t0->display0();
	
	shared_ptr <Test> t1 = make_shared <Test>(1);
	t1->display1();
	
	shared_ptr <Test> t2 = make_shared<Test>(1, 2);
	t2->display2();
	
	shared_ptr <Test> t3 = make_shared <Test>(1, 2, 3);
	t3->display3();
	
	shared_ptr <Test> t4 = make_shared<Test>(1, 2, 3, 4);
	t4->display4();
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
