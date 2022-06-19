#include <iostream>
using namespace std;

class Classy
{
    char name[20];

public:
    void main_menu();
    void add(){
        cout<<"Added"<<endl;
    }
    void display(){
        cout<<"Display"<<endl;
    }
    void rooms(){
        cout<<"Rooms Call";
    }
    void edit(){
        cout<<"Editing"<<endl;
    }
    int check(int);
    void modify(int);
    void delete_rec(int);
};

void Classy ::main_menu()
{
    int choise;
    while (choise != 5)
    {
        cout << "\n\t\t\t\t*************" << endl;
        cout << "\t\t\t\t* MAIN MENU *" << endl;
        cout << "\t\t\t\t*************" << endl;
        cout << "\n\n\t\t\t\1 1.Book A Room" << endl;
        cout << "\t\t\t\2 2.Customer Record" << endl;
        cout << "\t\t\t\3 3Roomes Alloted" << endl;
        cout << "\t\t\t\4 4.Edit Record" << endl;
        cout << "\t\t\t\5 5.Exit..!" << endl;
        cout << "\n\t\t\tEnter Your Choise: ";

        cin >> choise;

        switch (choise)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            rooms();
            break;
        case 4:
            edit();
            break;
        case 5:
            break;

        default:
            cout << "\n\n\tWrong Choise...!!!" << endl;
            cout << "Press Any Key to Contiue..." << endl;
            break;
        }
    }
}
int main(int argc, char const *argv[])
{
    // Classy cl;
    // cl.main_menu();

    int a = 257 % 26;
    int b = 135 % 26;
    
    cout<<a<<"\t"<<b<<endl;
    char i;
    // int j = 1;
    // for(j,i = 1; i<10; i++)
    // {
    //     cout<<i<<"\t"<<j++<<endl;
    // }

    return 0;
}
