#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{

    static int count;
    string word;
    cout<<"Enter a String Here: ";
    cin>>word;

    sort(word.begin(), word.end());
    while (next_permutation(word.begin(), word.end()))
    {
        cout<<++count<<": "<<word<<endl;
    }

    

    return 0;
}