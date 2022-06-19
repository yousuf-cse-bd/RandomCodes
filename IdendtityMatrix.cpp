#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter Size of the Matrix Here: ";
    cin>>size;

    int identity[size][size];
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            if(i == j){
                identity[i][j] = 1;
            }
            else{
                identity[i][j] = 0;
            }
        }
    }

    for(int i = 0; i<size; i++){
        for(int j = 0; j<size ;j++){
            cout<<identity[i][j]<<" ";
        }

        cout<<"\n";
    }


    return 0;
}
