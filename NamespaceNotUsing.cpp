#include <iostream>
// using namespace std;
using std :: cout;
using std :: cin;
using std :: string;
using std :: endl;

namespace Namespace1
{
    string name = "Yousuf";
    int age = 25;
} // namespace namespace1

namespace Namespace2
{
    string name = "Sumon";
    int age = 24;
} // namespace Namespace2
 


int main(int argc, char const *argv[])
{
    /* code */
    system("cls");

    int age = 25;
    // int age = 26; // runtime error re-declaration

    cout<<"Name: "<<Namespace1 :: name <<endl;
    cout<<"Age: "<<Namespace1 :: age <<endl;

    cout<<"Name: "<<Namespace2 :: name<<endl;
    cout<<"Age: "<<Namespace2 :: age<<endl;


    return 0;
}
