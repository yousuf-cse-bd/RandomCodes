/*****
*@Author: Muhammad Yousuf Ali
*@Since: 16 March 2020
*/

#include <iostream>
using namespace std;

int main(void)
{
    int A[] = {1,2,3,4,5};
    int i, max_element, min_element;
    max_element = A[0];
    min_element = A[0];

    for(i = 0; i<5;i++)
    {
        if(max_element<A[i])
        {
            max_element = A[i];
        }
        if(min_element>A[i])
        {
            min_element = A[i];
        }
    }

    cout<<"Max Element: "<<max_element<<"\nMin Eelement: "<<min_element<<endl; 
    
    return 0;
}