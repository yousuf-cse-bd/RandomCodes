#include <stdio.h>
#pragma pack(1)

// It consist more memory allocation

struct WhyWeNeedUnion
{
    /* data */
    double price;
    char *title;
    char *author;
    int numberOfPages;
    char *color;
    char *size;
    char *design;
};


int main(int argc, char const *argv[])
{
    /* code */

    struct WhyWeNeedUnion storeBook;
    storeBook.title = "C Programming";
    storeBook.author = "Paulo Cohelo";
    storeBook.numberOfPages = 190;
    storeBook.price = 205;
    printf("Size is: %ld\n", sizeof(storeBook));
    return 0;
}
