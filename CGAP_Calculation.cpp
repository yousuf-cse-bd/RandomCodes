#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter Number of Subjects?: ";
    cin>>n;
    unsigned int numberOfSubject;
    numberOfSubject = (n > 0) ? n : n*(-1);
    // string subjectName[numberOfSubject];
    float creditPointMarks[numberOfSubject];
    int correspondingCourseCredit[numberOfSubject];

    double sumCreditPointMarks = 0;
    double sumCredits = 0;

    // scanf("\n");
    // Input all data
    float result = 0;
    for(int i = 0; i<numberOfSubject; i++)
    {
        // cout<<i+1<<": Enter Subject Name: ";
        // cin>>subjectName[i];
        cout<<i+1<<": ";
        cout<<"Enter Credit Points: ";
        cin>>creditPointMarks[i];
        cout<<"Enter Course Credit: ";
        cin>>correspondingCourseCredit[i];
        sumCreditPointMarks += creditPointMarks[i] * correspondingCourseCredit[i];
        sumCredits += correspondingCourseCredit[i];
        result = sumCreditPointMarks / sumCredits;
        cout<<"\nYour Resul: "<<result<<endl;
        // cout<<"\nEntered the subject: "<<allSubjects[i]<<endl;
    }
    // cout<<"Your Resul: "<<result<<endl;

    return 0;
}
