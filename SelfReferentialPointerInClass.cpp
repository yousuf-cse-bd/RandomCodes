/**
 * @file SelfReferentialPointerInClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Self referential pointer using class
 * @version 0.1
 * @date 2022-09-29
 * @since ThursDay; 04:57 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)
class Node{
    public:
    int x;
    Node *next;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Node head, tail,link;
    head.x = 5;
    tail.x = 10;
    link.x = 20;

    head.next = tail.next = link.next = nullptr;
    head.next = &link;
    link.next = &tail;

    cout<<head.next->x<<endl; // 20
    cout<<head.next->next->x<<endl; //10


    return 0;
}
