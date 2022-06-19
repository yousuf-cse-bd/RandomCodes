/*******
 * @author: Muhammad Yousuf Ali
 * @since WednesDay 25 May 2022
 * 9 is my favourite number
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    bool status = true;
    int givenNumber = 9;
    int multiplicationTable, i, favouriteNumer = 0;
    for(i = 1; i<=10; i++)
    {
        //Firstly processing for multpilication table
        multiplicationTable = i * givenNumber;
        cout<<givenNumber<<" x "<<i<<" = "<<multiplicationTable<<endl;
        //Sum of digits
        while (multiplicationTable != 0)
        {
            int digit = multiplicationTable % 10;
            favouriteNumer += digit;
            multiplicationTable /= 10;
        }
        // cout<<favouriteNumer<<endl;
        // Check Givennumber and favouritenumber isEqual
        if(givenNumber != favouriteNumer)
        {
            status = false;
            break;
        }
        favouriteNumer = 0;
        
    }
    status == true ? cout<<givenNumber<<" Favourite Number...!\n" : cout<<"Not Favouurite Number...!"<<endl;
    (i>10) ? cout<<"Also Favourite\n": cout<<"Not Favourite"<<endl;
    return 0;
}
