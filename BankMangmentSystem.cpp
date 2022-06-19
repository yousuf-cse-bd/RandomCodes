/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Sunday, 12 July 2020
 * ***Bank Management System**** 
 */

#include <iostream>
using namespace std;

class BankManagement
{
    private:
    string name;
    int accountNumber;
    double balance, tmp;

    public:
    BankManagement()
    {
        cout<<"******************** WELCOME ********************"<<endl;
    }
    void open(void);
    void deposite(void);
    void withdraw(void); 
    void searchs(void);
    void display(void);

    ~BankManagement()
    {
        cout<<"\n******************** THANKS **********************"<<endl;
    }
    
};

void BankManagement :: open(void)
{
    cout<<"Enter Your Name Here: ";
    cin>>name;
    cout<<"Enter Account Number Here: ";
    cin>>accountNumber;
    cout<<"Enter The Ammount of Money Here: ";
    cin>>balance;
}

void BankManagement :: deposite()
{
    int accNum;
    cout<<"Enter your account number here: ";
    cin>>accNum;
    if(accountNumber ==  accNum)
    {
        cout<<"Enter The Ammount of Money for Saving: ";
        cin>>tmp;
        balance = balance + tmp;
        cout<<"\n\n\tJob Has Done Well..."<<endl;
    }
    else
    {
        cout<<"Your Bank Account is not Correct...!"<<endl;
    }
}

void BankManagement :: withdraw()
{
    int accNum;
    cout<<"Enter your account number here: ";
    cin>>accNum;
    if(accountNumber == accNum)
    {
        double ammount;
        cout<<"Enter the ammunt do you want withdraw now?: ";
        cin>>ammount;
        if(ammount <= balance)
        {
            ammount = balance - ammount;
            cout<<"Your cash ammount: "<<ammount<<" TK only."<<endl;
        }
        else
        {
            cout<<"Your ammount is not sufficient...!"<<endl;
        }
    }
    else
    {
        cout<<"Your account number is not correct...!Sorry."<<endl;
    }
    
}

void BankManagement :: display()
{
    int accNum;
    cout<<"Enter your account number here: ";
    cin>>accNum;
    if(accountNumber == accNum)
    {
        cout<<"You have "<<balance<<" TK only remain."<<endl;
    }
    else
    {
       cout<<"Your account number is not correct...!Sorry."<<endl; 
    }
}
int main(void)
{
    BankManagement bankManagement = BankManagement();

    int option;
    do
    {
        /* code */
        cout<<"1 for Open Account?"<<endl;
        cout<<"2 for Deposite Balance?"<<endl;
        cout<<"3 for withdraw?"<<endl;
        cout<<"4 for Display?"<<endl;
        cout<<"0 for TERMINATE!"<<endl;
        for(unsigned int i = 0; i<50;i ++)
        {
            cout<<"=";
        }
        cout<<"\nEnter your option here?: ";
        cin>>option;
        switch (option)
        {
        case 0:
            cout<<"EXIT....!"<<endl;
            break;
        case 1:
            bankManagement.open();
            break;
        case 2:
            bankManagement.deposite();
            break;
        case 3:
            bankManagement.withdraw();
            break;
        case 4:
            bankManagement.display();
            break;
        default:
            break;
        }
    } while (option != 0);
    
    return 0;
}