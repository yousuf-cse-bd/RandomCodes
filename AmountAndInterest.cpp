/**
 * @file AmountAndInterest.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloadin example (<<)
 * @version 0.1
 * @date 2023-02-14
 * @since TuesDay; 09:26 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class AmountAndInterest{
private:
    double amount{};
    double interest{};

public:
    AmountAndInterest():AmountAndInterest{0, 0}{} /*Called delegating constructor*/
    AmountAndInterest(const double amount, const double interest):amount{amount}, interest{interest}{
        calculation();
    }
    void calculation(void){
        amount += (amount * (interest/100));
    }
private:
    friend ostream &operator << (ostream &output, const AmountAndInterest &amountInterest){
        output<<"Now Amount: "<<amountInterest.amount;
        return output;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    AmountAndInterest amountAndInterest{100, 10};
    cout<<amountAndInterest<<endl;
    return 0;
}
