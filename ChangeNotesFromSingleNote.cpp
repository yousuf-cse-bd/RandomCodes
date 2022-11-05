/**
 * @file ChangeNotesFromSingleNote.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Note change into pieces notes
 * @version 0.1
 * @date 2022-11-05
 * @since SaturDay; 10:20 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
#include <algorithm>
#pragma pack(1)
using namespace std;

class ChangeNotesFromSingleNote{
private:
    /* data */
    unsigned long long int givenNote;
    unsigned short int *changeNotes;
    unsigned short int note1000, note500, note200, note100, note50, note20, note10, note5, note2, note1;
    void bangladeshAllNotes(void){
        cout<<note1000<<"\t"<<note500<<"\t"<<note200<<"\t"<<note100<<"\t"<<note50<<endl;
        cout<<note20<<"\t"<<note10<<"\t"<<note5<<"\t"<<note2<<"\t"<<note1<<endl;
    }
public:
    ChangeNotesFromSingleNote(const char *country){
        unsigned short int length = strlen(country);
        char thisCountry[length];
        for(unsigned short int i = 0; i<length; i++){
            *(thisCountry + i) = tolower(*(country+i));
        }
        *(thisCountry + length) = '\0';
        if(strcmp(thisCountry, "bangladesh") == 0){ /*Same string return 0*/
            note1000 = 1000, note500 = 500, note200 = 200, note100 = 100, note50 = 50, note20 = 20, note10 = 10, note5 = 5, note2 = 2, note1 = 1;
            bangladeshAllNotes();
        }
    }
    void inputNoteAmount(void){
        cout<<"Enter the note amount here: ";
        cin>>givenNote;
    }
    void changeBangladeshNotes(void){
        changeNotes = (unsigned short int*) malloc(sizeof(unsigned short int));
        unsigned short int t = 0;
        unsigned long long int note = givenNote;
        while(note != 0){
            if(note >= note1000){
                *(changeNotes + t++) = note1000;
                note = note - note1000;
            }else if(note >= note500){
                *(changeNotes + t++) = note500;
                note = note - note500;
            }else if(note >= note200){
                *(changeNotes + t++) = note200;
                note = note - note200;
            }else if(note >= note100){
                *(changeNotes + t++) = note100;
                note = note - note100;
            }else if(note >= note50){
                *(changeNotes + t++) = note50;
                note = note - note50;
            }else if(note >= note20){
                *(changeNotes + t++) = note20;
                note = note - note20;
            }else if(note >= note10){
                *(changeNotes + t++) = note10;
                note = note - note10;
            }else if(note >= note5){
                *(changeNotes + t++) = note5;
                note = note - note5;
            }else if(note >= note2){
                *(changeNotes + t++) = note2;
                note = note - note2;
            }else if(note >= note1){
                *(changeNotes + t++) = note1;
                note = note - note1;
            }
        }
        showNotes(t);
    }
    void showNotes(unsigned short int t){
        /*Taka (t) is not zero, then process*/
        if(t){
            unsigned long long int sumNotes = 0;
            unsigned int count1000, count500, count200, count100, count50, count20, count10, count5, count2, count1;
            count1000 = count500 = count200 = count100 = count50 = count20 = count10 = count5 = count2 = count1 = 0;
            cout<<"\tChange Notes: ";
            while(t--){
                switch (*(changeNotes + t)){
                case 1000: count1000++; break;
                case 500: count500++; break;
                case 200: count200++; break;
                case 100: count100++; break;
                case 50: count50++; break;
                case 20: count20++; break;
                case 10: count10++; break;
                case 5: count5++; break;
                case 2: count2++; break;
                case 1: count1++; break;
                default:
                    cout<<"Is default has any chance!"<<endl;
                    break;
                }
                cout<<*(changeNotes + t)<<" ";
            }
            cout<<endl;
            if(count1000){
                cout<<"\tTaka One Thousand: "<<count1000<<" Times."<<endl;
                sumNotes += note1000 * count1000;
            }
            if(count500){
                cout<<"\tTaka Five Hundred: "<<count500<<" Times."<<endl;
                sumNotes += note500 * count500;
            }
            if(count200){
                cout<<"\tTaka Two Hundred: "<<count200<<" Times."<<endl;
                sumNotes += note200 * count200;
            }
            if(count100){
                cout<<"\tTaka One Hundred: "<<count100<<" Times."<<endl;
                sumNotes += note100 * count100;
            }
            if(count50){
                cout<<"\tTaka Fifty: "<<count50<<" Times."<<endl;
                sumNotes += note50 * count50;
            }
            if(count20){
                cout<<"\tTaka Twenty: "<<count20<<" Times."<<endl;
                sumNotes += note20 * count20;
            }
            if(count10){
                cout<<"\tTaka Ten: "<<count10<<"Times."<<endl;
                sumNotes += note10 * count10;
            }
            if(count5){
                cout<<"\tTaka Five: "<<count5<<" Times."<<endl;
                sumNotes += note5 * count5;
            }
            if(count2){
                cout<<"\tTaka Two: "<<count2<<" Times."<<endl;
                sumNotes += note2 * count2;
            }
            if(count1){
                cout<<"\tTaka One: "<<count1<<" Times."<<endl;
                sumNotes += note1;
            }
            if(sumNotes){
                // cout<<"Sum of notes: "<<sumNotes<<endl;
                string sum = to_string(sumNotes);
                for(short int i = sum.size() - 3; i > 0; i -= 3){
                    sum.insert(sum.begin() + i, ',');
                }
                cout<<"Sum of notes: #"<<sum<<"# Taka"<<endl;
            }
        }
    }
    ~ChangeNotesFromSingleNote(){
        free(changeNotes);
    }
};
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"\t***Maxmimum Currency Limit: 99,99,999***"<<endl;
    ChangeNotesFromSingleNote bankNotes("bangladesh");
    bankNotes.inputNoteAmount();
    bankNotes.changeBangladeshNotes();
    
    return 0;
}
