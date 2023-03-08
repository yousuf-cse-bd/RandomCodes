/**
 * @file NumberConversionIomanip.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief There are 4 types of number, decimal to another three
 * @version 0.1
 * @date 2023-03-08
 * @since TuesDay; 05:25 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <memory>
#include <algorithm>
#pragma pack(1)
using namespace std;

class Interface{
private:
	friend ostream &operator<< (ostream &cout, const Interface &interface){
		interface.print(cout);
		return cout;
	}
	virtual void print(ostream &cout) const = 0; /*Pure virtual function*/
	
public:
	Interface(void) = default;
	virtual ~Interface(void) = default;
};

class NumberSystem : public Interface{
	virtual void print(ostream &cout) const override{
		cout<<showpos<<showbase<<uppercase;
		cout<<"In Binary: "<<binaryNumber<<endl;
		cout<<"In Decimal: "<<decimalNumber<<endl;
		cout<<"In Octal: "<<oct<<octalNumber<<endl;
		cout<<"In HexDecimal: "<<hex<<hexaDecimalNumber;
	}
private:
	static constexpr int defDecimalNumber{255};
	int decimalNumber{};
	int octalNumber{};
	int hexaDecimalNumber{};
	string binaryNumber{};
public:
	NumberSystem(const int &decimalNumber = defDecimalNumber):decimalNumber{decimalNumber}{
		hexaDecimalNumber = octalNumber = decimalNumber;
		decimal2Binary(decimalNumber);
	}
	void decimal2Binary(int decimalNumber){
		while(decimalNumber != 0){
			int binaryDigit {decimalNumber % 2};
			binaryNumber += toascii(binaryDigit + '0');
			decimalNumber >>= 1; /*decimalNumber /= 2*/
		}
		reverse(binaryNumber.begin(), binaryNumber.end());
	}
	
	virtual ~NumberSystem(void) = default;
};

int main(int argc, const char *const argv[]){
	unique_ptr <NumberSystem> unPtr = make_unique <NumberSystem>(255);
	cout<<*unPtr<<endl;
	
	return 0;
}