/**
 * @file UnionBestPerforme.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Union: All variables nop need for at a time.
 * @version 0.1
 * @date 2022-09-16
 * @since FriDay; 06:07 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(0)

struct Stored{
    /*Common attribute*/
    double price;
    union UnionBestPerforme{
        struct Book{
            const char *bookName, *bookAuthor;
            unsigned int bookNumberOfPage;
        }book;

        struct Pen{
            const char *penColor, *penType;
        }pen;
    }items;
};



int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Stored instance, *ptr;
    ptr = &instance;
    /*Using pointer*/
    ptr->price = 999.99;
    ptr->items.book.bookName = "Easy Programming In C++";
    ptr->items.book.bookAuthor = "Md. Yousuf Ali";
    ptr->items.book.bookNumberOfPage = 570;

    cout<<"Book Name: "<<ptr->items.book.bookName<<endl;
    cout<<"Book Author: "<<ptr->items.book.bookAuthor<<endl;
    cout<<"Number of Pages: "<<ptr->items.book.bookNumberOfPage<<endl;
    cout<<"Book Price: "<<ptr->price<<" Take"<<endl;

    /*instance.price = 999.99;
    instance.items.book.bookName = "Easy Programming In C++";
    instance.items.book.bookAuthor = "Md. Yousuf Ali";
    instance.items.book.bookNumberOfPage = 570;

    cout<<"Book Name: "<<instance.items.book.bookName<<endl;
    cout<<"Book Author: "<<instance.items.book.bookAuthor<<endl;
    cout<<"Number of Pages: "<<instance.items.book.bookNumberOfPage<<endl;
    cout<<"Book Price: "<<instance.price<<" Take"<<endl;*/

    /*Using instance*/
    cout<<endl;
    instance.price = 5.00;
    instance.items.pen.penColor = "Black";
    instance.items.pen.penType = "Ball Pen";
    cout<<"Pen Type: "<<instance.items.pen.penType<<endl;
    cout<<"Pen Color: "<<instance.items.pen.penColor<<endl;
    cout<<"Pen Price: "<<instance.price<<" Taka"<<endl;


    return 0;
}
