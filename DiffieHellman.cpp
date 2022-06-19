/****
 * #problem: Diffie-Hellman Alogorithm
 * @Author: MuhammadYousufAli
 * @Since: 06th April 2021
 */

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long long n)
{
    bool flag = false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = true;
        }
    }
    if (flag == false)
        return true;
    else
        return false;
}
long long multiply(int base, int power, int moduler)
{
    long long result = 1;
    for (int i = 1; i <= power; i++)
    {
        result = result * base;
        result = result % moduler;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    // int q = 353, a = 3;
    // int xA = 97;
    // int xB = 223;
    int q, a, xA, xB, yA, yB;
    cout << "Enter a Prime Number Here: ";
    cin >> q;
    if (isPrime(q))
    {
        cout << "Enter The Primitive Root: ";
        cin >> a;
        cout << "Enter Private Key User A: ";
        cin >> xA;
        cout << "Enter Private Key User B: ";
        cin >> xB;
        if (xA < q && xB < q)
        {
            ///Compute Public Keys
            int yA = multiply(a, xA, q);
            int yB = multiply(a, xB, q);

            cout << "Public Key, User A: " << yA << endl;
            cout << "Public Key, User B: " << yB << endl;

            //Compute shared session keys as:
            int kAB1 = multiply(yB, xA, q);
            int kAB2 = multiply(yA, xB, q);

            if (kAB1 == kAB2)
            {
                cout << "Symmetric Keys" << endl;
                cout << "KAB1: " << kAB1 << "\tKAB2 :" << kAB2 << endl;
            }
            else
            {
                cout << "Invalid...!" << endl;
            }
        }
        else
        {
            cout << "Private Key Must be Smaller than Your Prime Number...!" << endl;
        }
    }
    else
    {
        cout << "Operation Faild...!" << endl;
    }

    return 0;
}
