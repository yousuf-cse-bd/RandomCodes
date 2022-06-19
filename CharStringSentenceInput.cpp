#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char firstChar;
    string lName;
    string sentence;

    cout<<"Enter First Char of Your Name: ";
    cin>>firstChar;

    cout<<"Enter Your Last Name: ";
    cin>>lName;
    
    cout<<"Write Here, i love you: ";
    scanf("\n"); //igore the new line 
    getline(cin, sentence);

    cout<<"Entered The Char: "<<firstChar<<endl;
    cout<<"Entered The Last Name: "<<lName<<endl;
    cout<<"The Sentence: "<<sentence<<endl;

    return 0;
}


