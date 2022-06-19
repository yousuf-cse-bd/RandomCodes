/**
 * @file EOF.cpp
 * @author your name (you@domain.com)
 * @brief Reverse Root, Timus 1001
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
   vector <long long int> V;
   long long int num;
   while (scanf("%lld", &num) != EOF) {
        V.push_back(num);
   }

   for(unsigned int i = V.size() - 1; i>=0; i--){
        printf("%.4lf\n", sqrt(V[i]));
   }
   
    return 0;
}
