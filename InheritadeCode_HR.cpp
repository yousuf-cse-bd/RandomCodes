#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */
class BadLengthException : public length_error {
private:
    int x;
public:
    BadLengthException(int n) : length_error(to_string(n)), x(n) { }
    int getLength() const { return x; }
};


bool checkUsername(string username)
{
	bool isValid = true;
	int n = username.length();
	if(n < 5){
		throw BadLengthException(n);
	}
	for(int i = 0; i<n-1; i++)
	{
		char eachChar = username.at(i);
		if(eachChar == 'w' && eachChar == 'w')
		{
			isValid = false;
		}
	}
	return isValid;
}

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--)
	{
		string username;
		cin>>username;

		try
		{
			bool isValid = checkUsername(username);
			if(isValid)
			{
				cout<<"Valid"<<endl;
			}
			else
			{
				cout<<"Invalid"<<endl;
			}
		}catch(BadLengthException e){
			cout<<"Too short: "<<e.what()<<endl;
		}
	}
	return 0;
}