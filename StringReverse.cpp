#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    string s1,s2, s3;

    // cin>>s1>>s2;
    s1 = "abcd", s2 = "ef";
    int l1 = s1.size();
    cout<<l1<<endl;

    int l2 = s2.size();
    cout<<l2<<endl;

    s3 = s1.append(s2);

    cout<<s3<<endl;

    int l = s3.size();

    string rev = s3.substr(1,l-2);
    reverse(rev.begin(), rev.end());
    cout<<rev<<" ";
    s1 = s3.substr(0, 1);
    s2 = s3.substr(l-1, l);

    s1 = s1.append(s2);
    cout<<s1<<"\n";    
   
    
    return 0;
}
