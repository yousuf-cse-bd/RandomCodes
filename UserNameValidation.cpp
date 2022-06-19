#include <iostream>
using namespace std;

int userNameValidation(string userName)
{
    int spacialChar = 0, l = userName.length();
    //check lentgh is 0 or more than 30
    if(l == 0 || l>30)
    return 0;

    for(int i = 0; i<l; i++)
    {
        char eachChar = userName.at(i);
        //no space allowed
        if(eachChar == ' ')
        return 0;
        //characters other than alphabets and numbers
        if(isalnum(eachChar)) //alphabest & numeric value supported
        continue;
        else
        {
            //periods and uderscore allowed but only one
            {
                if(eachChar == '_' || eachChar == '.')
                {
                    spacialChar++;
                    if(spacialChar > 1)
                    return 0;
                }
                else
                return 0;
            }
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    /* code */

    if(userNameValidation("Arxwwz"))
        cout<<"Valid"<<endl;
    else
        cout<<"InValid"<<endl;
    
    return 0;
}
