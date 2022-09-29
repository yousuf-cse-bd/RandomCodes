/**
 * @file LinkListUsingRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation an integer link list using recursive function
 * @version 0.1
 * @date 2022-09-29
 * @since ThursDay; 09:07 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)
/*A structure with self-referential pointer*/
struct Node{
    int x;
    Node *next;
};

/*Add node usin recusrion method*/
void addNode(Node *link){
    cout<<"Enter a new value [-1:Exit] here: ";
    cin>>link->x;

    if(link->x == -1){
        link->next = nullptr;
    }else{
        /*Creating a new node for each (link->x) is not -1*/
        link->next = (Node*) malloc(sizeof(Node));
        addNode(link->next);
    }
}
/*Show data using printNode() function*/
void printNode(Node *head){
    if(head->x == -1){
        cout<<"Empty Node..!"<<endl;
        return;
    }
    cout<<"All Node Element: ";
    while(head->next != nullptr){
        cout<<head->x<<" ";
        head = head->next;
    }
    free(head);
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Node *head;
    head = (Node*) malloc(sizeof(Node));
    addNode(head);
    printNode(head);
    free(head);
    return 0;
}
