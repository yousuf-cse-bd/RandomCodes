/**
 * @file BMI_CalculatorNext.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Usually BMI calculation for local zone
 * @version 0.1
 * @date 2023-02-13
 * @since MonDay; 05:32 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1) /*Must numeric 1 not bool true (1)*/
using namespace std;

class CalculatorBMI{
    /*Member Variables*/
private:
    double weight{};
    double height{};
    double bmiValue;
    /*Member Methods*/
public:
    CalculatorBMI() = default;
    CalculatorBMI(const CalculatorBMI &source){
        cout<<"Copy constructor"<<endl;
    }
    CalculatorBMI *setWeight(const double &weight){
        this->weight = weight;
        return this;
    }
    CalculatorBMI *setHeight(const double &height){
        this->height = height;
        return this;
    }
    void bmiCalculation(void){ /*Implicitly double*/
        const double heightM {height * 0.3048}; /*Feet to meter*/
        /*Formula: kg/(heightMeter)^2*/
        bmiValue = weight/(heightM * heightM); 
    }
    /*Operator overloading mechanism*/
    friend ostream &operator <<(ostream &output, const CalculatorBMI &calculatorBMI){
        // calculatorBMI.bmiCalculation(); /*Compiled error*/
        output<<calculatorBMI.bmiValue;
        return output;
    }
    ~CalculatorBMI() = default;
};

const void resultFunction(CalculatorBMI &calculatorBMI){
    double weight {};
    cout<<"Enter your weight [KG.Grams] here: ";
    cin>>weight;

    double height {};
    cout<<"Enter your height [Feet.inches] here: ";
    cin>>height;

    calculatorBMI.setWeight(abs(weight))->setHeight(abs(height));
    calculatorBMI.bmiCalculation();
    cout<<"Your BMI value: "<<calculatorBMI<<" Kg/M^2"<<endl;
    
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    CalculatorBMI calculatorBMI{};
    resultFunction(calculatorBMI);
    system("pause>0");
    return 0;
}
