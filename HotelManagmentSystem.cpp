/****
 * Hotel Management System
 * @Author: MuhammadYousufAli
 */

#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include <dos.h>
#pragma pack(1)
using namespace std;

class HotelManagementSystem
{
    public:
    int room_no;
    char name[30];
    char address[50];
    char phone[15];

public:
///To Display The Main Menu
    void main_menu();
    void add();           //TO Book a Room
    void display();       ///to Display the Customer Record
    void rooms();         ///To Display Alloted Rooms
    void edit();          ///To Edit the Customer Record
    int check(int);       //To Check Room Status
    void modify(int);     ///To Modify the Record
    void delete_rec(int); ///To Delete the Record
};

void HotelManagementSystem :: main_menu()
{
    int choise;
    while (choise != 5)
    {
        cout << "\n\t\t\t\t*************" << endl;
        cout << "\t\t\t\t* MAIN MENU *" << endl;
        cout << "\t\t\t\t*************" << endl;
        cout << "\n\n\t\t\t\1.Book A Room" << endl;
        cout << "\t\t\2. Customer Record" << endl;
        cout << "\t\t\t\3. Roomes Alloted" << endl;
        cout << "\t\t\t4. Edit Record" << endl;
        cout << "\t\t\t5. Exit..!" << endl;
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
        }
    }
}
void HotelManagementSystem :: add()
{
    // clrscr();
    int r, flag;

    ofstream fout("Record.dat", ios::app);
    cout << "\n Enter Customer Details" << endl;
    cout << "**********************" << endl;
    cout << "\n Room Number: ";
    cin >> r;

    flag = check(r);

    if (flag)
    {
        cout << "\n Sorry..!!! Room is Already Booked" << endl;
    }
    else
    {
        room_no = r;
        cout << " Name: ";
        gets(name);
        cout << " Address : ";
        gets(address);
        cout << " Phone Number: ";
        gets(phone);

        fout.write((char *)this, sizeof(HotelManagementSystem));
        cout << "Room is Booked!!!" << endl;
        getch();
        fout.close();
    }
    getch();
    fout.close();
}

void HotelManagementSystem ::display()
{
    // clrscr();
    ifstream fin("Record.dat", ios::in);
    int r, flag;
    cout << "\n Enter Room Number: ";
    cin >> r;
    while (!fin.eof())
    {
        fin.read(char *) this, sizeof(HotelManagementSystem);
        if (room_no == r)
        {
            // clrscr();
            cout << "Custemer Details" << endl;
            cout << "****************" << endl;
            cout << "Room Number: " << room_no << endl;
            cout << "Name: " << name << endl;
            cout << "Phone: " << phone << endl;

            flag = 1;
            break;
        }
        if (flag == 0)
            cout << "Sorry Room Number not Found or Vacant!!" << endl;
        cout << "\n Press Any Key to Continue!!" << endl;
        getch();
        fin.close();
    }
}

void HotelManagementSystem ::rooms()
{
    // clrscr();
    ifstream fin("Reocrd.dat", ios ::in);
    cout << "\t\t\tList of Rooms Allotted" << endl;
    cout << "\t\t\t*********************" << endl;
    cout << "\n Room Number \tName\tAddress\tPhone Number" << endl;

    while (!fin.eof())
    {
        fin.read((char *)this, sizeof(HotelManagementSystem));
        cout << "\n\n"
             << room_no << "\t\t" << name << "\t\tAddress"
             << "\t\t" << address << "\t\t" << phone << endl;
    }
    cout << "\n\n\t\tPress Any Key to Continue!!" << endl;
    getch();
    fin.close();
}

void HotelManagementSystem ::edit()
{
    // clrscr();
    int choise, r;
    cout << "\nEDIT MENU" << endl;
    cout << "*********" << endl;
    cout << "\n1. Modify Customer Record" << endl;
    cout << "\n2. Delete Customer Record" << endl;

    cout << "Enter Your Choise Here: ";
    cin >> choise;

    // clrscr();
    cout << "\nEnter Room Number Here: ";
    cin >> r;

    switch (choise)
    {
    case 1:
        modify(r);
        break;
    case 2:
        delete_rec(r);
        break;
    default:
        cout << "\nWrong Choise!!" << endl;
    }
    cout << "\nPress Any Key to Continue!!!" << endl;
    getch();
}

int HotelManagementSystem ::check(int r)
{
    int flag = 0;
    ifstream fin("Record.dat", ios ::in);
    while (!fin.eof())
    {
        fin.read((char *)this, sizeof(HotelManagementSystem));
        if (room_no == r)
        {
            flag = 1;
            break;
        }
        
    }
    fin.close();
    return flag;
}

void HotelManagementSystem ::modify(int r)
{
    long pos, flag = 0;
    fstream file("Record.dat", ios::in | ios::out | ios::binary);
    while (!file.eof())
    {
        pos = file.tellg();
        file.read((char *)this, sizeof(HotelManagementSystem));
        if (room_no == r)
        {
            cout << "\nEnter New Details" << endl;
            cout << "*****************" << endl;
            cout << "Name: ";
            gets(name);
            cout << "\nAdress: ";
            gets(address);
            cout << "\nPhone Number: ";
            gets(phone);

            file.seekg(pos);
            file.write((char *)this, sizeof(HotelManagementSystem));
                    cout
                << "\nRecord is Modified!!" << endl;
            flag = 1;
            break;
        }
        if (flag == 0)
            cout << "\nSorry Room Number not Found or Vacant!!" << endl;
        file.close();
    }
}
void HotelManagementSystem ::delete_rec(int r)
{
    int flag = 0;
    char ch;
    ifstream fin("Record.dat", ios::in);
    ofstream fout("Temp.dat", ios::out);

    while (!fin.eof())
    {
        fin.read((char *)this, sizeof(HotelManagementSystem));
        if (room_no == r)
        {
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Phone Number: " << endl;
            cout << "\nDo You Want to Delete This Record(y/n): ";
            cin >> ch;

            if (ch == 'n')
            {
                flag = 1;
            }
            else
            {
                fout.write((char *)this, sizeof(HotelManagementSystem));
            }
            fin.close();
            fout.close();
        }
    }
    if (flag == 0)
    {
        cout << "\n Sorry Room Number Not Found or vacant!!" << endl;
    }
    else
    {
        remove("Record.dat");
        rename("Temp.dat", "Record.dat");
    }
}

int main(int argc, char const *argv[])
{
    HotelManagementSystem object;
    // textmode(C80);
    // textbackground(WHITE);
    // textcolor(RED);
    system("cls");
    cout << "\n\t\t\t****************************";
    cout << "\n\t\t\t* HOTEL MANAGEMENT PROJECT *";
    cout << "\n\t\t\t****************************";
    // sleep(2);
    cout << "\n\n\n\n\t\tMade By:";
    // sleep(2);
    cout << " The Crazy Programmer";
    // sleep(2);
    cout << "\n\n\n\n\n\t\t\t\tPress any key to continue!!";
    getch();

    object.main_menu();
    return 0;
}
