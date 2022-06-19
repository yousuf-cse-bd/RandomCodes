#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    string s1,s2, s3;
    char a, b;

    // cin>>s1>>s2;
    s1 = "abcd", s2 = "ef";
    int l1 = s1.length();
    int l2 = s2.length();
    cout<<l1<<" "<<l2<<endl;
    // s3 = s1.append(s2);
    // concatination of two strings
    s3 = s1 + s2;
    cout<<s3<<endl;

    a = s2[0];
    b = s1[0];

    s1[0] = a;
    s2[0] = b;
    cout<<s1<<" "<<s2<<endl;
    
    return 0;
}
