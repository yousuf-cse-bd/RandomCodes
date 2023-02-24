/**
 * @file: InsertionOperator.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief: InsertionOperator using void no-return typed
 * @version: 0.1
 * @date: 2023-02-24
 * @since: FriDay; 04:55 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class InsertionOperator{
	/*Operator (<<) overloading using void function*/
	friend void operator<< (ostream &output, const InsertionOperator &insertionOperator){
		output<<"InsertionOperator: ["<<insertionOperator.name<<", ";
		output<<insertionOperator.height<<" Feets, "<<insertionOperator.weight<<" KGs]"<<endl;
		/*This is not good for me*/
	}
	/*Best practice*/
//	friend ostream &operator<< (ostream &output, const InsertionOperator &insertionOperator){
//		output<<"InsertionOperator: ["<<insertionOperator.name<<", "<<insertionOperator.height
//		<<insertionOperator.weight<<"]"<<endl;
//		return output;
//	}
private:
	static constexpr const char *const defName{"Unnamed"};
	static constexpr double defHeight{0.0};
	static constexpr double defWeight{0.0};
	string name{};
	double height{};
	double weight{};
public:
	InsertionOperator(const string_view &name = defName, const double &height = defHeight,
		const double &weight = defWeight):name{name}, height{height}, weight{weight}{
		cout<<"A custom constructor with defualt paramiters."<<endl;
	}
	
	~InsertionOperator() = default;
};	

int main(int argc, char const **argv){
	system("cls");
	InsertionOperator insertionOperator1{};
	cout<<"insertionOperator1 =  "<<insertionOperator1;
	
	InsertionOperator insertionOperator2{"Yousuf", 5.5, 64};
	cout<<"insertionOperator2 =  "<<insertionOperator2;
	
	return 0;
}