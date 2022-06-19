// // 4 4 4 4 4 4 4
// // 4 3 3 3 3 3 4
// // 4 3 2 2 2 3 4
// // 4 3 2 1 2 3 4
// // 4 3 2 2 2 3 4
// // 4 3 3 3 3 3 4
// // 4 4 4 4 4 4 4 

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int maxValue(int n1, int n2)
// {
//     if(n1 > n2)
//     return n1;
//     else
//     return n2;
// }


// int main(int argc, char const *argv[])
// {
//     /* code */
//     system("cls");
//     int n = 4;
//     int len = n * 2 - 1;
//     for(int row = 1;row <= len; row++)
//     {
//         for(int column = 1; column <= len; column++)
//         {
//             int mx = maxValue(abs(row - n), abs(column - n));
//             cout<<mx+1<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
#include <stdio.h>
using namespace std;
#include <iostream>

#define min(a, b) ((a) < (b) ? (a) : (b))

int main() 
{
    int n;
    scanf("%d", &n);
    int len = n * 2 - 1;
    for(int row = 0; row < len; row++)
    {
        for(int col = 0; col < len; col++)
        {
            int m = min(row, col);
            // cout<<"Int m = "<<m<<endl;
            m = min(m, len - row - 1);
            // cout<<"m = "<<m<<endl;
            m = min(m, len - col - 1);
            // cout<<"M = "<<m<<endl;
            printf("%d ", n - m);
        }
        printf("\n");
    }
    return 0;
}