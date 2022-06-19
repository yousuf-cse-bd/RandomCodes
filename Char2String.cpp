#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    const char* multName[3] = {"Muhammad", "Yousuf", "Ali"};
    for(int i = 0; i<3; i++)
    {
        printf("%s ", multName[i]);
    }
    printf("\n");
    char ch1[11]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
    printf("%d\n", strlen(ch1));

    char ch2[]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'}; 
    printf("%d\n", strlen(ch2));

    string ch3="javatpoint"; 
    cout<<ch3.length()<<endl;
    return 0;
}
