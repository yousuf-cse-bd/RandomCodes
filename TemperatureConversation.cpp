#include <iostream>
using namespace std;
#define F_LOW 0
#define F_MAX 250
#define STEP 25

int main(int argc, char const *argv[])
{
    typedef float REAL;
    REAL fahrenheit, celcius;

    fahrenheit = F_LOW;
    cout<<"Fahrenheit\tCelcius\n"<<endl;
    while (fahrenheit <= F_MAX)
    {
        celcius = (fahrenheit - 32)/1.8;
        printf("%5.1f\t%13.2f\n", fahrenheit, celcius);
        fahrenheit = fahrenheit + STEP;
    }
    
    
    return 0;
}
