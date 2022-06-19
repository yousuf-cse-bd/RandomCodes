/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Sunday, 12 July 2020
 * ***String Function Exmaple**** 
 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char firstName[] = "Yousuf";
   char lastName[] = "Ali";

   cout<<firstName<<"\t"<<lastName<<endl;
   cout<<strlen(firstName)<<endl;
   ///strcpy(to__,<-from);
   strcpy(firstName,lastName);
   cout<<firstName<<endl;
   cout<<lastName<<endl;

   


    return 0;
}