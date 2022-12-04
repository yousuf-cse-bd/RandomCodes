/**
 * @file VectorChallenge2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Vector challenge smallest, largest and mean the list
 * @version 0.1
 * @date 2022-12-04
 * @since SaturDay; 11:00 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class VectorChallenge2{
private:
    vector <int> numbers {};
    long long int sum{0};
    double meanValue {0.0};
public:
    void printNumbers(void){
        if(numbers.size() != 0){
            cout<<"[ ";
            for(auto num: numbers){ /*Range based for loop*/
                cout<<num<<" ";
            }
            cout<<"]"<<endl;
        }else{
            cout<<"[The List is Empty]"<<endl;
        }
    }

    void addNumber(void){
        int element{0};
        cout<<"Enter an element here: ";
        cin>>element;
        numbers.push_back(element);
        cout<<element<<" is Added"<<endl;
    }

    void meanValueCalculation(void){
        if(numbers.size() != 0){
            for(auto num: numbers){ /*Range based for loop*/
                sum += num;
            }
            cout<<"Sum of Numbers: "<<sum<<endl;
            cout<<fixed<<setprecision(2);
            meanValue =static_cast <double> (sum) / numbers.size();
            cout<<"The Mean Value: "<<meanValue<<endl;
            sum = 0;
        }else{
            cout<<"Unable to Calculate the Mean - No Data!"<<endl;
        }
    }
    void smallestNumber(void){
        if(numbers.size() != 0){
            int smallestValue {numbers.at(0)};
            for(unsigned int i {1}; i < numbers.size(); i++){
                if(smallestValue > numbers.at(i)){
                    smallestValue = numbers.at(i);
                }
            }
            cout<<"The Smallest Number: "<<smallestValue<<endl;
        }else{
            cout<<"Unable to Determine the Smallest Number - List is Empty!"<<endl;
        }
    }
    void largestNumber(void){
        if(numbers.size() != 0){
            int largestValue {numbers.at(0)};
            for(unsigned int i {1}; i < numbers.size(); i++){
                if(largestValue < numbers.at(i)){
                    largestValue = numbers.at(i);
                }
            }
            cout<<"The Largest Number: "<<largestValue<<endl;
        }else{
            cout<<"Unable to Determine the Largest Number - List is Empty!"<<endl;
        }
    }

    void allClearVector(void){
        numbers.clear();
        cout<<"The List is Cleared...!"<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    VectorChallenge2 solve1{};
    char choice {};
    do{
        cout<<"---------------------MainMenu---------------------"<<endl;
        cout<<"P - Print Numbers of List"<<endl;
        cout<<"A - Add a Number in List"<<endl;
        cout<<"M - Print Mean of the Numbers"<<endl;
        cout<<"S - Print the Smallest Number"<<endl;
        cout<<"L - Print the Largest Number"<<endl;
        cout<<"C - Clear Existing the List"<<endl;
        cout<<"Q - QUIT/EXIT"<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Enter Your Choice Here: ";
        cin>>choice;
        switch(choice){
            case 'p': /*Print the elements*/
            case 'P': solve1.printNumbers(); break;
            case 'a':
            case 'A': solve1.addNumber();break;
            case 'm':
            case 'M': solve1.meanValueCalculation();break;
            case 's':
            case 'S': solve1.smallestNumber(); break;
            case 'l':
            case 'L': solve1.largestNumber();break;
            case 'c':
            case 'C': solve1.allClearVector(); break;
            case 'q':
            case 'Q': cout<<"EXIT...!"<<endl; break;
            default : cout<<"You Pressed Invalid Option..."<<endl; break;
        }
    }while(choice != 'q' && choice != 'Q');
    cout<<"\t\t\tGoodbye...!"<<endl;

    return 0;
}
