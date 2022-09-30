/**
 * @file DataBaseWithLinkList.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple link list which consists double data type using recursion
 * @version 0.1
 * @date 2022-09-29
 * @since ThursDay; 07:58 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <conio.h>
using namespace std;
#pragma pack(1)

struct Node{
    /*Compulsory array not pointer or mallaoc()*/
    char name[25];
    char id[10];
    char department[15];
    Node *next;
};
/*It is taken by recursive function*/
void addNode(Node *link){
    char check;
    cout<<"Do you want to enter data [y/n]: ";
    check = getchar();
    if(check == 'n'){
        link->next = nullptr;
    }
    else{
        fflush(stdin); /*KeyBoard buffer clearness*/
        cout<<"Enter name here: ";
        gets(link->name);
        fflush(stdin); /*KeyBoard buffer clearness*/
        cout<<"Enter ID here: ";
        gets(link->id);
        fflush(stdin); /*KeyBoard buffer clearness*/
        cout<<"Enter department name: ";
        gets(link->department);
        fflush(stdin); /*KeyBoard buffer clearness*/
        link->next = (Node*) malloc(sizeof(Node));
        addNode(link->next);
    }
    /*This part loop iteration.*/
    // while (check != 'n'){
        // link->next = (Node*) malloc(sizeof(Node));
        // cout<<"Enter name here: ";
        // cin>>link->name;
        // fflush(stdin);
        // cout<<"Enter ID here: ";
        // cin>>link->id;
        // fflush(stdin);
        // cout<<"Enter department name: ";
        // cin>>link->department;
        // fflush(stdin);
        // link = link->next;
        // cout<<"\n\tDo you want to enter again [y/n]: ";
        // check = getchar();
    // }
    // link->next = nullptr;
}
/*Showing the list...*/
void showList(Node *list){
    if(list->next == nullptr){
        cout<<"The list is empty...!"<<endl;
        return;
    }
    cout<<"\nName\tID\tDepartment"<<endl;
    cout<<"`````\t`````\t```````````"<<endl;
    while(list->next != nullptr){
        cout<<list->name<<"\t"<<list->id<<"\t"<<list->department<<endl;
        list = list->next;
    }
    free(list);
}

/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Dynamic memory allocation by malloc with size equaled stucture*/
    Node *list = (Node*) malloc(sizeof(Node));
    addNode(list);
    showList(list);
    free(list); /*De-allocation by free() function*/
    return 0;
}
