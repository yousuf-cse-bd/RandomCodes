#include <iostream>
using namespace std;

struct QuizApplication
{
    /* data */
    string questions;
    string options[3];
};


void showResult(QuizApplication quizApplication[])
{
    int ans, i , j;
    for(i = 0; i<3; i++)
    {
        cout<<quizApplication[i].questions<<endl;
        for(j = 0; j<3; j++)
        {
            cout<<"\t"<<j + 1<<". "<<quizApplication[i].options[j]<<endl;
        }
        cout<<"Choose 1-3: ";
        cin>>ans;
        if(i == 0)
        {
            if(ans == 3)
            cout<<"Correct!"<<endl;
            else
            cout<<"Incorrect!"<<endl;
        }
        else if(i == 1)
        {
            if(ans == 2)
            cout<<"Correct!"<<endl;
            else
            cout<<"Incorect!"<<endl;
        }
        else if(i==2)
        {
            if(ans == 1)
            cout<<"Correct!"<<endl;
            else
            cout<<"Incorect!"<<endl;
        }
        
    }
}


int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    QuizApplication quizApplication[3];
    //Load Questions
    quizApplication[0].questions = "What is the smallest country?";
    quizApplication[1].questions = "What's the biggest animal in the world?";
    quizApplication[2].questions = "How many elements are there in the periodic table?";

    //For 1st question
    quizApplication[0].options[0] = "USA";
    quizApplication[0].options[1] = "India";
    quizApplication[0].options[2] = "Vatican City";
    
    //For 2nd question
    quizApplication[1].options[0] = "Elephant";
    quizApplication[1].options[1] = "Blue Whale";
    quizApplication[1].options[2] = "Great White Shark";

    //For 3rd question
    quizApplication[2].options[0] = "118 Elements";
    quizApplication[2].options[1] = "119 Elements";
    quizApplication[2].options[2] = "120 Elements";

    //calling function with argument
    showResult(quizApplication);
   
    system("pause>0");

    return 0;
}
