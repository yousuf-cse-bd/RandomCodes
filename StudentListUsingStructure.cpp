#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Batch14
{
    char name[20];
    int id;
    float cgpa;

};

int main(int argc, char const *argv[])
{
    /* code */
    Batch14 batch14[5];
    // First Record
    strcpy(batch14[0].name, "YousufAli");
    batch14[0].id = 171311101;
    batch14[0].cgpa = 3.35;
    // Second Record
    strcpy(batch14[1].name, "AlMurshid");
    batch14[1].id = 171311105;
    batch14[1].cgpa = 3.35;

    // Third Record
    strcpy(batch14[2].name, "IsratJahan");
    batch14[2].id = 171311198;
    batch14[2].cgpa = 3.00;

    // Fourth Recodrd
    strcpy(batch14[3].name, "SumaiyaIslam");
    batch14[3].id = 171311199;
    batch14[3].cgpa = 3.40;
    // Fifth Record
    strcpy(batch14[4].name, "MustafizRohman");
    batch14[4].id = 171311103;
    batch14[4].cgpa = 3.30;

    // Sorting by named alphabetic

    for(int i = 0; i<5-1 ; i++)
    {
        for(int j = 0; j<5-i-1;j++)
        {
            if(strcmp(batch14[j].name, batch14[j+1].name) > 0)
            {
                // Enter changing or swapping
                // swap(batch14[j].name, batch14[j+1].name);
                // swap(batch14[j].id,batch14[j+1].id);
                // swap(batch14[j].cgpa, batch14[j+1].cgpa);

                char dummyName[20];
                int tmpID;
                float tmpCGPA;
                // Firstly named swap
                strcpy(dummyName, batch14[j].name);
                strcpy(batch14[j].name,batch14[j+1].name);
                strcpy(batch14[j+1].name, dummyName);

                // Secondly ID swap
                tmpID = batch14[j].id;
                batch14[j].id = batch14[j+1].id;
                batch14[j+1].id = tmpID;
                // Thirdly CGPA swap

                tmpCGPA = batch14[j].cgpa;
                batch14[j].cgpa = batch14[j+1].cgpa;
                batch14[j+1].cgpa = tmpCGPA;
            }
        }
    }

    // Result showing
    cout<<"ID\t\tName\t\tCGPA\n"<<endl;
    for(int i = 0; i<5; i++)
    {
        cout<<batch14[i].id<<"\t"<<batch14[i].name<<"\t"<<batch14[i].cgpa<<endl;
    }
    return 0;
}
