/**
 * @file TestCaseForSortAlgorithm.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Five individual elelments permuation generator
 * @version 0.1
 * @date 2022-09-11
 * @since SunDay; 06:14 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    FILE *filePointer;
    filePointer = fopen("InputData.txt", "w");
    unsigned int serial = 1;
    string number = "12345";
    char num[6];
    cout<<serial++<<": "<<number<<endl;
    while(next_permutation(number.begin(), number.end())){
        // cout<<serial++<<": "<<number<<endl;
        /*String to character-Array*/
        for(unsigned short int i = 0; i<5; i++){
            num[i] = toascii(number[i]);
            fprintf(filePointer,"%c ", num[i]);
        }
        num[5] = '\0';
        fprintf(filePointer,"\n");
        printf("%d: %s\n",serial++, num);
        
    }
    fclose(filePointer);
    return 0;
}
