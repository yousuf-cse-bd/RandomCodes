/**
 * @file CGAP_Calculation.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple CGPA calculation
 * @version 0.1
 * @date 2022-09-07
 * @since WednesDay; 08:20 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
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
    for(int i = 0; i < numberOfSubject; i++){
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
        cout<<"\nYour Result: "<<result<<endl;
        // cout<<"\nEntered the subject: "<<allSubjects[i]<<endl;
    }
    // cout<<"Your Resul: "<<result<<endl;

    return 0;
}
