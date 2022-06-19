// Salary
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int number, hour;
    float salary;

    cin>>number>>hour;
    cin>>salary;

    salary = salary * hour;
    cout<<"NUMBER = "<<number<<"\nSALARY = ";
    printf("U$ %.2f\n", salary);



    return 0;
}
