#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int grade;
        cin >> grade;
        if (grade >= 38 && grade % 5 >= 3){
            grade += 5 - grade % 5;
        }
        cout << grade << endl;
    }
    return 0;
}