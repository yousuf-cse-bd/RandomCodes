#include <iostream>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    pair <string, pair <int, char> > student;
    student = make_pair("Yousuf", make_pair(101, 'B'));

    cout<<"Name: "<<student.first<<",\tID: "<<student.second.first<<",\tGrade: "<<student.second.second<<endl;    

    pair <string, string> name ("Yousuf", "Ali");

    //Before Swapping
    cout<<"Name: "<<name.first<<" "<<name.second<<endl;
    swap(name.first, name.second);
    //After Swapping
    cout<<"Name: "<<name.first<<" "<<name.second<<endl;


    return 0;
}
