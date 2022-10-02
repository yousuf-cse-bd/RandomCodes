/**
 * @file AccountOfBillDC.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Cost accounting of electricity bill DC load
 * @version 0.1
 * @date 2022-10-02
 * @since SunDay; 03:31 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

class AccountOfBillDC
{
private:
    double wattsPower, totalCost;
    float pricePerUnit, voltV, ampereI;

public:
    AccountOfBillDC(float voltV, float ampereI, float pricePerUnit){
        this->voltV = voltV;
        this->ampereI = ampereI;
        this->pricePerUnit = pricePerUnit;
        calculateWatts();
        calculateMonthBill();
    }
    ~AccountOfBillDC(){
        // cout<<"\tCalled destructor...!"<<endl;
    }
private:
    void calculateWatts(){
        /*P = VI*/
        wattsPower = voltV * ampereI;
    }
    void calculateMonthBill(){
        /*KilloWatts = (hours * day * wattsPower)/1000*/
        double killoWatts;
        killoWatts = (24 * 30 * wattsPower)/1000;
        cout<<"Total Consumed: "<<killoWatts<<" Unit."<<endl;
        /*1Killo Watt == 1 Unit*/
        totalCost = killoWatts * pricePerUnit;
        cout<<"Total Cost: "<<totalCost<<" Taka, According Unit Price: "<<pricePerUnit<<" Taka."<<endl;
    }
};
/*Driver codes*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"\tUNO:"<<endl;
    /*Input: Volts, Amperes, Unit Per Price Respectively*/
    AccountOfBillDC uno = AccountOfBillDC(12.0, 0.5, 4.6727);
    cout<<"\tRouter:"<<endl;
    AccountOfBillDC router = AccountOfBillDC(12.0, 1.0, 4.6727);
    return 0;
}
