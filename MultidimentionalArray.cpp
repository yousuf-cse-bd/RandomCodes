#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    // float f = 3/2;
    // printf("%f\n", f);

    int Array[2][2][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            for(int k = 0; k<3; k++)
            {
                cout<<"Array["<<i<<"]["<<j<<"]["<<k<<"] = "<<Array[i][j][k]<<endl;
            }
        }
    }
    return 0;
}
