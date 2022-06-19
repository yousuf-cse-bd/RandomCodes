// This problem is shown to me Hacker Rank Online Judge
// 3 + 3 + 3 + 2 + 1

#include <iostream>
using namespace std;

int simpleRecurion(int n, int a, int b, int c)
{
    if(n == 1)
    return a;
    if(n == 2)
    return b;
    if (n == 3)
    return c;
    else
    return simpleRecurion(n-1, a ,b , c) + simpleRecurion(n-2, a ,b , c) + simpleRecurion(n-3, a ,b , c);
}

int main(int argc, char const *argv[])
{
    /* code */
    int sum = simpleRecurion(5, 1, 2 , 3);
    cout<<sum<<endl;
    
    return 0;
}
