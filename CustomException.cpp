/**
 * @file CustomException.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com) 
 * @brief Best practice for custom exception
 * @version 0.1
 * @date 2023-03-06
 * @since MonDay; 10:39 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class DividedByZeroException{};
class NegativeValueException{};

constexpr double calculation(const double &miles, const double &gallones){
	if(gallones == 0){
		throw DividedByZeroException();
	}
	else if(miles < 0 || gallones < 0){
		throw NegativeValueException();
	}
	return (miles / gallones);
}

int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	double miles{};
	double gallones{};
	
	cout<<"Enter the miles driven: ";
	cin>>miles;
	cout<<"Enter the gallons used: ";
	cin>>gallones;
	try{
		double milesPerGallones{calculation(miles, gallones)};
		cout<<"Resutl: "<<milesPerGallones<<" Miles per gallones"<<endl;
	}
	catch(const DividedByZeroException &ex){
		cerr<<"Sorry, You can't divided by zero!!!"<<endl;
	}
	catch(const NegativeValueException &ex){
		cerr<<"Sorry, One your parameters is negative!!!"<<endl;
	}

	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
