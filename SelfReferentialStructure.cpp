/**
 * @file SelfReferentialStructure.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple example self referential structure
 * @version 0.1
 * @date 2022-09-15
 * @since ThursDay; 10:22 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)
struct Node{
    int x;
    Node *next;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Node head, tail, link;
    /*12 bytes*/
    // cout<<"Head: "<<sizeof(head)<<endl;
    // cout<<"Tail: "<<sizeof(tail)<<endl;
    // cout<<"Link: "<<sizeof(link)<<endl;
    /*Value assigining*/
    head.x = 5, tail.x = 10, link.x = 20;
    cout<<"Head.x = "<<head.x<<endl;
    cout<<"Tail.x = "<<tail.x<<endl;
    cout<<"Link.x = "<<link.x<<endl;
    /*Pointer variables will become NULL*/
    head.next = tail.next = link.next = NULL ;//nullptr;
    cout<<"Head.next = "<<head.next<<endl;
    cout<<"Tail.next = "<<tail.next<<endl;
    cout<<"Link.next = "<<link.next<<endl;
    /*Head points -> link*/
    head.next = &link;
    /*Link points -> tail*/
    link.next = &tail;
    /*Print of link's value*/
    cout<<"Now Value of Head: "<<head.next->x<<endl;
    cout<<"Now Value of Link: "<<head.next->next->x<<endl;
    /*New value assigning*/
    head.x = head.next->x = head.next->next->x = 101;
    cout<<"New Head.x = "<<head.x<<endl;
    cout<<"Hew Tail.x = "<<tail.x<<endl;
    cout<<"New Link.x = "<<link.x<<endl;
    
    return 0;
}
