#include <iostream>
using namespace std;

int main(void)
{
  int n,i,m;
  n = 1;
  while (n<=20)
  {
     m = 0;
        for(i = 1 ; i<=10;i++)
        {
            m = m + n;
            
            if(i == 10)
            {
                cout<<n<<" x "<<i<<" = "<<m<<endl;
                cout<<endl;
            }
            else
            {
                cout<<n<<" x "<<i<<" = "<<m<<endl;
            }
            
        } 
      n++;
  }
  
    return 0;
}