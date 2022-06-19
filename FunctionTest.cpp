#include <iostream>
void yousuf(void); //Function Prototype
using namespace std;

void paremeterizeFunc(int i, char ch, double d){
    cout<<"Intger: "<<i<<endl;
    cout<<"Char: "<<ch<<endl;
    cout<<"Double: "<<d<<endl;
}

int main()
{
    system("cls");
    paremeterizeFunc(101, 'Y', 3.35);
    cout<<"This is Main Method."<<endl;
    yousuf();
    return 0;
}
void yousuf(void)
{
    cout<<"This User Defined Function."<<endl;
}
