/**
 * @file BigFactorial.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The best way for find factorial from a positive integer
 * @version 0.1
 * @date 2022-11-10
 * @since ThursDay; 04:37 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType>
class BigFactorial{
private:
    DataType number;
    unsigned short int *factorial;
public:
    BigFactorial(DataType number){
        this->number = number;
        factorial = (unsigned short int*) malloc(sizeof(unsigned short int));
    }
    void calculateFactorial(void){
        *factorial = 1; /*First index is 1*/
        DataType size = 1; /*New size of the array*/
        for(DataType x = 2; x <= number; x++){
            size = multiply(x, size);
        }
        cout<<number<<"! Factorial: ";
        for(long long int i = size - 1; i >= 0 ; i--){
            cout<<*(factorial+i);
        }
        cout<<endl;
    }
    DataType multiply(DataType x, DataType size){
        DataType carry = 0; /*Initialize by zero*/
        DataType product;
        for(DataType i = 0; i != size; i++){
            product = *(factorial + i)*x + carry;
            *(factorial + i) = product % 10; /*Store the last digit, LSD to in the array(factorial)*/
            carry = product / 10; /*Store the MSB or rest value to carry*/
        }
        /*Put the carray again left side to in the factorial*/
        while(carry != 0){
            *(factorial + size) = carry % 10;
            carry /= 10;
            size++;
        }
        return size;
    }
    ~BigFactorial(){
        free(factorial);
    }
};
/*A stan-alone function which generate factorial from a positive number using recursion method*/
unsigned long long int factorialRecursion(unsigned short int n){
    if(n <= 1){ /*0! = 1 and 1! = 1*/
        return 1;
    }else{
        return (n*factorialRecursion(n-1));
    }
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number;
    cout<<"\tEnter a positive number here: ";
    cin>>number;
    /*To make absolute value*/
    number = (number > 0)? number : number*(-1);

    if(number <= 20){
        cout<<number<<"! Factorial: "<<factorialRecursion(number)<<endl;
    }else{
        BigFactorial <unsigned short int> factorial(number);
        factorial.calculateFactorial(); 
    }
    system("pause>0");
    
    return 0;
}