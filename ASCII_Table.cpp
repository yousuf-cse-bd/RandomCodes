#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    cout<<"Dec\tChar\n-------------"<<endl;
    for(int i = 0; i<256; i++)
    {
        cout<<i<<"\t";
        printf("%c\n", i);
    }
    return 0;
}
