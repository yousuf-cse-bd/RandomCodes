#include <iostream>
using namespace std;
void selectionSort(double A[], int n)
{
    int i, j, tmp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }
}
int binarySearch(double A[], int n)
{
    cout << "Ascendirng Order Sort:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    double x;
    cout << "Enter New Value Here: ";
    cin >> x;
    int left, right, mid;
    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (A[mid] == x)
        {
            return mid;
        }
        else if (A[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter N  = ";
    cin >> n;

    double A[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "[" << i << "]\tItem = ";
        cin >> A[i];
    }
    selectionSort(A, n);
    int test = binarySearch(A, n);
    (test != -1) ? cout << "Found at Index: " << test << endl:cout << "Not Found...!" << endl;

    return 0;
}