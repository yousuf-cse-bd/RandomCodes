/****
 * @author: Muhammad Yousuf Ali
 * @since: 10th July 2021
 * @code: Simple Phonebook
 */


#include <iostream>
using namespace std;

class PhoneBook
{
    public:
    string name;
    long number;
};


int main(int argc, char const *argv[])
{
   PhoneBook phoneBook[5];
   phoneBook[0].name = "YOUSUF";
   phoneBook[0].number = 1723811717;

   phoneBook[1].name = "MARUF";
   phoneBook[1].number = 1719655781;


   phoneBook[2].name = "ALI";
   phoneBook[2].number = 1571495052;

   phoneBook[3].name = "IMTIAZ";
   phoneBook[3].number = 1571368190;

   phoneBook[4].name = "TAMEEM";
   phoneBook[4].number = 1719581924;


   for(int i = 0; i<5-1; i++)
   {
       for(int j = i+1; j<5; j++)
       {
           if(phoneBook[i].name>phoneBook[j].name);
           swap(phoneBook[i].name, phoneBook[j].name);
           swap(phoneBook[i].number, phoneBook[j].number);
       }
   }

   for(int i = 0; i<5 ;i++)
   {
       cout<<phoneBook[i].name<<"\t"<<phoneBook[i].number<<endl;
   }

   int A[] = {5, 2, 3, 4, 1};
   cout<<endl;
   for(int item : A)
   {
       cout<<item<<" ";
   }
   cout<<endl;

   ///Buble sort
   for(int i = 0; i<5-1; i++)
   {
       for(int j = 0; j<5; j++)
       {
           if(A[j] > A[j+1])
           swap(A[j], A[j+1]);
       }
   }

    for(int item : A)
    {
        cout<<item<<" ";
    }
   cout<<endl;
    return 0;
}
