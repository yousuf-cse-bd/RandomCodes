#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");

    char line[81], ctr;
    int i, c, end1 = 0, character = 0,words = 0, lines = 0;

    cout<<"Key In The Text."<<endl;
    cout<<"Give One Space After Each Word."<<endl;
    cout<<"When Completed, Press 'Return'.\n"<<endl;

    while(end1 == 0)
    {
        /*Reading a line of tex*/
        while (ctr = getchar() != '\n')
        {
            line[c++] = ctr;
        }
        line[c] = '\0'; // string end

        /*Counting the words in a line*/
        if(line[0] == '\0')
        break;
        else
        {
            words++;
            for(i = 0; line[i++] != '\0'; i++)
            {
                if(line[i] == ' ' || line[i] == '\t')
                words++;
            }
        }

        /* Counting lines and characters*/
        lines++;
        character += strlen(line);        
    }

    cout<<"Lines Number: "<<lines<<endl;
    cout<<"Words  Number: "<<words<<endl;
    cout<<"Character Number: "<<character<<endl;
    return 0;
}
