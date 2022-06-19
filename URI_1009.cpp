// Salary with Bonus
#include <iostream>
using namespace std;

int main()
{

    string name;
    double salary, hour, bonus;
    cin>>name;
    cin>>salary>>bonus;
    salary = salary + bonus * 0.15;
    printf("TOTAL = R$ %.2lf\n", salary);


    return 0;
}