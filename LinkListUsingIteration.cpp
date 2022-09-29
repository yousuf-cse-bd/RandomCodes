/**
 * @file LinkListUsingIteration.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation an integer link list using loop iteration
 * @version 0.1
 * @date 2022-09-29
 * @since ThursDay; 11:18 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack()
/*A structure having self referential pointer */
struct Node{
    int x;
    Node *next;
};

/*Add node using loop iteration*/
void addNode(Node *link){
    while(true){
        cout<<"Enter a value here not -1: ";
        cin>>link->x;
        if(link->x == -1){
            link->next = nullptr;
            return;
        }
        else{
            link->next = (Node*) malloc(sizeof(Node));
            link->x = link->x;
            link = link->next; /*Pointing to next node*/
        }
    }
}
/*Just print the list*/
void printList(Node *head){
    if(head->next == nullptr){
        cout<<"Your Node Empty...!"<<endl;
        exit(0);
    }
    cout<<"Printing Element: ";
    while(head->next != nullptr){
        cout<<head->x<<" ";
        head = head->next;
    }
    free(head);
    free(head->next);
}

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
