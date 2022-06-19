#include <iostream>
#include <string>
// Required for std::numeric_limits
#include <limits>

struct Part
{
    /* data */
    std::string name;
    double cost;

};

int main()
{   
    const int size = 4;
    Part apart[size];

    for(int i = 0; i< size; i++)
    {
        std :: cout<<"Enter the name of part no: "<<i + 1 <<": ";
        getline(std::cin, apart[i].name);
        std::cout<<"Enter the price of '"<<apart[i].cost<<"': ";
        std::cin>>apart[i].cost;

        //flushes all newline characters
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
