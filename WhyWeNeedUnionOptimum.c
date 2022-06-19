// optimum solution
#include <stdio.h>
#pragma pack(1)

struct Store{ // All storing
    double price; // Common Attribute
    union {
        struct{ // For Book
            char *title;
            char *author;
            int numberOfPage;
        }book;

        struct{ // For Shirt
            char *color;
            char *size;
            char *design;
        }shirt;
    }items; 
};

int main(int argc, char const *argv[])
{
    /* code */
    struct Store s;
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
    // printf("Size of: %ld\n", sizeof(s));
    return 0;
}
