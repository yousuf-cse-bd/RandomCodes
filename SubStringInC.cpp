#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    char str[] = "this is javatpoint with c and java";
    char *sub;
    sub = strstr(str, "java");
    cout<<"SubString: "<<sub<<endl;

    char myName[] = "TUSHAR";

    (strcmp(myName, "USHA") == 0) ? cout<<"Exist\n":cout<<"!Exist"<<endl;


    char *exist;
    exist = strstr(myName, "USHA");
    cout<<myName<<" is "<<exist<<endl;

    return 0;
}
