#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int a, b;
    a = 8;
    b = 11;
    // scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for(int i = a ; i<=b;i++)
      {
        if(0<i && i<=9)
        {
            if(i == 2)
            {
              printf("two\n");
              continue;  
            }
            
            if(i == 4)
            {
                printf("four\n");
                continue;
            }
            
            if(i == 6)
            {
                printf("six\n");
                continue;
            }
            
            if(i == 8)
            {
                printf("eight\n");
                continue;
            }
            
            if(i ==1)
            {
                printf("one\n");
                continue;
            }
            
            if( i== 3)
            {
                printf("three\n");
                continue;
            }
            
            if(i == 5)
            {
                printf("five\n");
                continue;
            }
            if(i == 7)
            {
              printf("seven\n");
              continue;  
            }
            
            if(i == 9)
            {
                printf("nine\n");
            continue;
            }

            
        }
        if(i>9)
        {
            if(i % 2  == 0)
            printf("even\n");
            if(i % 2 == 1)
            printf("odd\n");
        }  
        
      }
    return 0;
}
