#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // char data[]= "Tech CSE Tuterials";
    // cout<<sizeof(data)<<endl;
    // cout<<sizeof(long long)<<endl;

    int sum, x, i;
    sum = 0;

    for(i = 0, x = 0; i<=10; i += 2)
    {
        x = i + 3; 
        if(i == 2)
        continue;

        if(i >= 8)
        break;

        sum += i + x;

        printf("i = %d x = %d sum = %d\n", i, x, sum);
    }
    printf("\nOutside loop i = %d x = %d sum = %d\n", i, x, sum);

    return 0;
}
