/**
 * @file WhyWeNeedUnionOptimum.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Special use of Union
 * @version 0.1
 * @date 2022-09-17
 * @since SaturDay; 10:01 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

struct Store{ // All storing
    double price; // Common Attribute
    union {
        struct{ // For Book
            const char *title;
            const char *author;
            int numberOfPage;
        }book;

        struct{ // For Shirt
            const char *color;
            const char *size;
            const char *design;
        }shirt;
    }items; 
};

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    Store s;
    s.items.book.title = "C Programming";
    s.items.book.author = "John";
    s.items.book.numberOfPage = 189;
    s.price = 1000;

    printf("Book Name: %s\n", s.items.book.title);
    printf("Book Authore: %s\n", s.items.book.author);
    printf("Number of Pages: %d\n", s.items.book.numberOfPage);
    printf("Book Price: %lf\n", s.price);
    // printf("Size of: %ld\n", sizeof(s));

    // Now for storing shirt
    s.items.shirt.color = "Black";
    s.items.shirt.size = "XL";
    s.items.shirt.design = "Polo Shirt";
    s.price = 750;

    printf("\nShirt Color: %s\n", s.items.shirt.color);
    printf("Shirt Size: %s\n", s.items.shirt.size);
    printf("Shirt Type: %s\n", s.items.shirt.design);
    printf("Shirt Price: %lf\n", s.price);
    printf("Size of: %ld\n", sizeof(s));
    return 0;
}
