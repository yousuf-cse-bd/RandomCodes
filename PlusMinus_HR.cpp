/****
 * Plus Minus
 * @Author: MuhammadYousufAli
 * @Since: 17th February 2021
 */

#include <iostream>
using namespace std;

int n;

void plusMinus(int A[], int n)
{
    double countPositive, countNegative, countNeutral;
    countPositive = countNegative = countNeutral = 0.0;

    double result = 0.0;
    for (size_t i = 0; i < n; i++) ///Unsign int
    {
        if (A[i] > 0)
        {
            countPositive++;
        }
        else if (A[i] < 0)
        {
            countNegative++;
        }
        else
        {
            countNeutral++;
        }
    }

    result = countPositive / n;
    printf("%0.6lf\n",result);
    result = 0.0;

    result = countNegative / n;
    printf("%0.6lf\n",result);
    result = 0.0;

    result = countNeutral / n;
    printf("%0.6lf\n",result);
    result = 0.0;
}

int main(int argc, char const *argv[])
{

    cin >> n;
    int A[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    plusMinus(A, n);


    return 0;
}