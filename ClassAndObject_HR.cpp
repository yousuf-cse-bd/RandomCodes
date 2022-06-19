#include <iostream>
using namespace std;

class Student
{
    public:
    int scores[5];
    void input()
    {
        for(int i = 0; i<5; i++)
        {
            cin>>scores[i];
        }
    }
    int calculateTotalScore()
    {
        long int sum = 0;
        for(int i = 0; i<5 ; i++)
        {
            sum += scores[i];
        }

        return sum;
    }
};


int main(int argc, char const *argv[])
{
    /* code */

    int n; //number of students
    cin>>n;
    Student *s = new Student[n]; //an array of n students
    for(int  i = 0; i<n;i++)
    {
        s[i].input();
    }
    //calculate kristen's score
    int kristenScore  = s[0].calculateTotalScore();
    //determine how many students scoreed  higher than kristen
    int count = 0;
    for(int i = 1; i<n; i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kristenScore)
        {
            count ++;
        }
    }
    //print result
    cout<<count<<endl;

    return 0;
}
