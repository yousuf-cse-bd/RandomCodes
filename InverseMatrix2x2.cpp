/****
 *@Author: Muhammad Yousuf Ali
 *@Since: 31 Januray 2021
 * Inverse Matrix Basic
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[2][2] = {1, 2,
                   3, 4};
    int i, j, firstDiagonal, secondDiagonal;
    //Input process
    /* for(i = 0; i<2;i++)
    {
        for(j = 0; j<2; j++)
        {
            cout<<"Enter Matrix Element: ";
            cin>>A[i][j];
        }
    }*/

    firstDiagonal = 1;
    secondDiagonal = 1;

    firstDiagonal = A[0][0] * A[1][1];
    secondDiagonal = A[0][1] * A[1][0];
    cout << "First Diagonal: " << firstDiagonal << "\nSecond Diagonal: " << secondDiagonal << endl;

    int determine = firstDiagonal - secondDiagonal;
    if (determine == 0){
        cout << "Invarse Matrix Not Possible" << endl;
    }
    else{
        swap(A[0][0], A[1][1]);
        swap(A[0][1], A[1][0]);
        cout<<"1/"<<determine;
        for (i = 0; i < 2; i++){
            cout<<"\t|\t";
            for (j = 0; j < 2; j++){
                if (i == 0 &&j == 0 || i == 1 &&j == 1){
                    cout << " " << A[i][j] << "\t";
                }
                else{
                    cout << "-" << A[i][j] << "\t";
                }
            }
            cout<< "\t|" << endl;
        }
    }

    return 0;
}
