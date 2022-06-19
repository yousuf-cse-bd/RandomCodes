#include <iostream>
using namespace std;

class LogInWindows
{
    private:
    string name;
    string password;
    string email;
    public:
    LogInWindows()
    {
        cout<<"Constructor Calling.\n"<<endl;
    }
    void setValue(string name,string password,string email)
    {
        this->name = name;
        this->password = password;
        this->email = email;
    }
    void getValue()
    {
    if(name == "Yousuf" || name == "yousuf" && password == "12345"  && email == "yousuf@gmail.com" || email == "YOUSUF@GMAIL.COM") {
            cout<<"Name: "<<name<<endl;
            cout<<"Password: "<<password<<endl;
            cout<<"E-Mail: "<<email<<endl;
        }
        else{
            cout<<"*****Enter Valid Name, E-Mail and Password*****"<<endl;
        }
        
        
    }
    ~LogInWindows()
    {
        cout<<"\nDestructor Calling.\n"<<endl;
    }
};

int main()
{
    LogInWindows person1 = LogInWindows();

    string name = "Yousuf";
    string password = "12345";
    string email = "yousuf@gmail.com";

    // cout<<"Enter Your Name Here: ";
    // cin>>name;
    // cout<<"\nEnter Your Password Here: ";
    // cin>>password;
    // cout<<"\nEnter Your E-Mail Here: ";
    // cin>>email;
    
    person1.setValue(name,password,email);
    person1.getValue();

    return 0;
}