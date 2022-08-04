/**
 * @file RandomNumber.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Random number generator
 * @version 0.1
 * @date 2022-08-04
 * @since ThursDay; 10:35 AM
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    /* code */
    srand(time(NULL));
    for(unsigned int i = 0; i<5; i++){
        int x = rand();
        printf("%d\n", x);
    }
    return 0;
}
