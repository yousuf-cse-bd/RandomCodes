/**
 * @file CounterChars.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String: Vowels, Consonants, SpcecailChar, Words counter
 * @version 0.1
 * @date 2022-08-22
 * @since MonDay, 09:40 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int i, vowel, consonant, digit, word, other;
    vowel = consonant = digit = word = other = 0;
    char string[80], ch;
    printf("Type a string: ");
    scanf("%[^\n]", string);
    i = 0;
    while((ch = tolower(string[i++])) != '\0'){
        // printf("Char: %c\n", ch);
        if(ch == 'a' ||  ch == 'e' ||ch == 'i' || ch == 'o' || ch == 'u')
            // printf("Vowel: %c\n", ch);
           vowel++;
        else
            if((ch > 'a' && ch < 'e') || (ch > 'e' && ch < 'i') || (ch > 'i' && ch < 'o') || (ch > 'o' && ch < 'u') || (ch > 'u'))
                consonant++;
            // printf("Consonant: %c\n", ch);

            else
            if( ch >= '0' && ch <='9')
                digit++;
                // printf("Digit: %c\n", ch);
            else
                if(ch == ' ')
                    word++;
                    // printf("Space: %c\n", ch);
                else
                other++;
                // printf("Spacial: %c\n", ch);

    }
    word++;
    printf("# Number of Vowels\t: %d\n", vowel);
    printf("# Number of Consonant\t: %d\n", consonant);
    printf("# Number of Digits\t: %d\n", digit);
    printf("# Number of Words\t: %d\n", word);
    printf("# Number of Other Chars\t: %d\n", other);
    getche();
    return 0;
}
