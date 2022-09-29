/**
 * @file LinkListRecursionMethod.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation a char-type-array (string) link list using recursive function
 * @version 0.1
 * @date 2022-09-29
 * @since ThursDay; 09:44 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <cstring>
using namespace std;
#pragma pack(1)
/*I could not use string data type*/
struct Node{
    char name[20];
    Node *next;
};
/*Add element uisng */
void addNode(Node *link){
    cout<<"Enter the name here [!Exit]: ";
    cin>>link->name;
    if(strcmp(link->name,"Exit") == 0 || strcmp(link->name,"EXIT") == 0 || strcmp(link->name,"exit") == 0 ){
        link->next = nullptr;
    }else{
        /*Create a new node here*/
        link->next = (Node*) malloc(sizeof(Node));
        addNode(link->next);
    }
}
void printList(Node *head){
    if(head->next == nullptr){
        cout<<"Empty Node..!"<<endl;
        return;
    }
    cout<<"All Elements :";
    while(head->next != nullptr){
        cout<<head->name<<" ";
        head = head->next;
    }
    cout<<endl;
    free(head);
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Node *head;
    head = (Node*) malloc(sizeof(Node));
    addNode(head);
    printList(head);

    free(head);
    return 0;
}

