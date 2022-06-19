#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char myString[] = "MdYousufAli";
    cout<<"My Name (All UpperCase): "<<strupr(myString)<<endl;
    cout<<"My Name (All LowerCase): "<<strlwr(myString)<<endl;

    cout<<('a' - 'A')<<endl;
    printf("a = %d\tA = %d\n", 'a', 'A');

    return 0;
}
