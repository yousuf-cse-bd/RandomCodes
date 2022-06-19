#include <iostream>
using namespace std;

struct SmartPhone
{
    /* data */
    string name;
    int storageSpace; 
    string color;
    float price;
};
//nested structure
struct Persion
{
    /* data */
    string name;
    int age;
    SmartPhone smartPhone;
};


void printSmartPhoneInfo(SmartPhone smartPhone)
{   
    cout<<"Name: "<<smartPhone.name<<endl;
    cout<<"Color: "<<smartPhone.color<<endl;
    cout<<"Storage Space: "<<smartPhone.storageSpace<<" GB"<<endl;
    cout<<"Price: "<<smartPhone.price<<endl;
}   

void printPersionInfo(Persion persion)
{
    cout<<"Name: "<<persion.name<<endl;
    cout<<"Age: "<<persion.age<<endl;

    printSmartPhoneInfo(persion.smartPhone);
}

int main(int argc, char const *argv[])
{
    /* code */
    system("cls"); //clear screen command
    SmartPhone smartPhone;
    //Normal Procedure
    string name = "iPhone 12";
    int storageSpace = 32; 
    string color = "Black";
    float price = 999.99;

    string name2 = "Samsung Galaxy S21 Ultra";
    int storageSpace2 = 64; 
    string color2 = "Gray";
    float price2 = 888.88;

    //Advance Procedure(using strucure)
    smartPhone.name = "iPhone 12";
    smartPhone.color = "Black";
    smartPhone.storageSpace = 32;
    smartPhone.price = 999.99;

    
    //Number 2 entity
    SmartPhone smartPhone2;
    smartPhone2.name = "Samsung Galaxy S21 Ultra";
    smartPhone2.color = "Gray";
    smartPhone2.storageSpace = 64;
    smartPhone2.price = 888.88;

    //Call function pass arguments
    // printSmartPhoneInfo(smartPhone);
    // cout<<endl;
    // printSmartPhoneInfo(smartPhone2);

    //Nested structure calling
    Persion p;
    p.name = "Saldina";
    p.age = 26;
    p.smartPhone = smartPhone2; //Samsung
    cout<<endl;
    printPersionInfo(p);
   
    system("pause>0");
    return 0;
}
