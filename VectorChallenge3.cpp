/**
 * @file VectorChallenge3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Vector challenge smallest, largest, find-a-number and mean-vlue the list
 * @version 0.1
 * @date 2022-12-11
 * @since SaturDay; 04:29 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

/*Prototype for displaying the menu and getting user selection*/
void displayMenu(void);
char getSelection(void);

/*Menu handeling function prototypes*/
void handleDisplay(const vector <int> &numbers);
void handleAdd(vector <int> &number);
void handleMean(const vector <int> &numbers);
void handleSmallest(const vector <int> &numbers);
void handleLargest(const vector <int> &number);
void handleFind(const vector <int> &numbers);
void handleQuit(void);
void handleUnkown(void);

/*Prototypes for functions that work with the list, to display it, calculation mean, etc*/
void displayList(const vector <int> &numbers);
double calculateMean(const vector <int> &numbers);
int getSmallest(const vector <int> &numbers);
int getLargest(const vector <int> &numbers);
bool finder(const vector <int> &numbers, int target);

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> numbers{};
    char selection {};
    do{
        displayMenu();
        selection = getSelection();
        switch (selection){
        case 'P':handleDisplay(numbers); break;
        case 'A': handleAdd(numbers); break;
        case 'M': handleMean(numbers); break;
        case 'S': handleSmallest(numbers); break;
        case 'L': handleLargest(numbers); break;
        case 'F': handleFind(numbers); break;
        case 'Q': handleQuit(); break;
        default: handleUnkown(); break;
        }
    }while(selection != 'Q');
    system("pause > 0");
    return 0;
}
void displayMenu(void){
    cout<<"---------------------MainMenu---------------------"<<endl;
    cout<<"\tP - Print Numbers of List"<<endl;
    cout<<"\tA - Add a Number in List"<<endl;
    cout<<"\tM - Print Mean of the Numbers"<<endl;
    cout<<"\tS - Print the Smallest Number"<<endl;
    cout<<"\tL - Print the Largest Number"<<endl;
    cout<<"\tF - Find a Number"<<endl;
    cout<<"\tQ - QUIT/EXIT"<<endl;
    cout<<"--------------------------------------------------"<<endl;
}
char getSelection(void){
    char selection{};
    cout<<"\tEnter Your Choice Here: ";
    cin>>selection;
    return toupper(selection);
}
void handleQuit(void){
    cout<<"\t\t\tGood Bye...!"<<endl;
}
void handleUnkown(void){
    cout<<"You Pressed Invalid Option..."<<endl;
}

void handleDisplay(const vector <int> &numbers){
    if(numbers.size() == 0){
        cout<<"[] - the list is empty."<<endl;
    }else{
        displayList(numbers);
    }
}
void displayList(const vector <int> &numbers){
    cout<<"[ ";
    for(auto num: numbers){
        cout<<num<<" ";
    }
    cout<<"]"<<endl;
}

void handleAdd(vector <int> &numbers){
    int num{};
    cout<<"Enter an integer to add the list: ";
    cin>>num;
    numbers.push_back(num);
    cout<<num<<" is added."<<endl;    
}

void handleMean(const vector <int> &numbers){
    if(numbers.size() == 0){
        cout<<"Unable to calculate mean - list is empty."<<endl;
    }else{
        cout<<fixed<<setprecision(2); /*After dot two digit printed*/
        cout<<"The mean value: "<<calculateMean(numbers)<<endl;
    }
}
double calculateMean(const vector <int> &numbers){
    double sum {0.0};
    for(auto num: numbers){
        sum += num;
    }
    sum = sum / numbers.size();
    return sum;
}

void handleSmallest(const vector <int> &numbers){
    if(numbers.size() == 0){
        cout<<"Unable to find smallest - list is empty."<<endl;
    }else{
        cout<<"The smallest number: "<<getSmallest(numbers)<<endl;
    }
}
int getSmallest(const vector <int> &numbers){
    int minNumber{numbers.at(0)};
    for(auto num: numbers){
        minNumber = min(minNumber, num);
    }
    return minNumber;
}

void handleLargest(const vector <int> &numbers){
    if(numbers.size() == 0){
        cout<<"Unable to find smallest - list is empty."<<endl;
    }else{
        cout<<"The largest number: "<<getLargest(numbers)<<endl;
    }
}
int getLargest(const vector <int> &numbers){
    int maxNumber{numbers.at(0)};
    for(auto num: numbers){
        maxNumber = max(maxNumber, num);
    }
    return maxNumber;
}

void handleFind(const vector <int> &numbers){
    if(numbers.size() == 0){
        cout<<"Unable to find a number - list is empty."<<endl;
    }else{
        int target {};
        cout<<"Enter the number to find: ";
        cin>>target;
        cout<<"The "<<target<<(finder(numbers, target)?" was found.":" was not found.")<<endl;
    }
}
bool finder(const vector <int> &numbers, const int target){
    for(auto num: numbers){ /*Linear search algorithm*/
        if(num == target){
            return true;
        }
    }
    return false;
}

