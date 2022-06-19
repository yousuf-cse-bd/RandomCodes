///50, 87

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned  totalRiceGram ,totalConsumedRiceGram;
    cout<<"Istiak, Enter Total Rice Value: ";
    cin>>totalRiceGram;
    cout<<"Again, Total Consume Rice: ";
    cin>>totalConsumedRiceGram;

    unsigned div, rem;

    div = totalRiceGram / totalConsumedRiceGram;
    rem = totalRiceGram % totalConsumedRiceGram;

    cout<<"Your Answer: "<<div<<"th"<<" & Remainder Rice: "<<rem<<endl;;

    return 0;
}
