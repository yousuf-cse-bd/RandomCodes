///Getting reverse of a const string:
#include <bits/stdc++.h>
using namespace std;

char* reverseConstString(char const* myName)
{
    ///count string len
    int n = strlen(myName);

    ///create a dynamic pointer char array
    char *reverseName = new char[n];

    ///String copy(to), (from)
    strcpy(reverseName, myName);
    ///swapping char by char
    for(int i = 0, j = n - 1; i<j; i++, j--)
    {
        swap(reverseName[i], reverseName[j]);
    }
    ///return string
    return reverseName;
}

int main()
{

    const char *myName = "MuhammadYousufAli";
    printf("%s\n", reverseConstString(myName));

    return 0;
}
