#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int num;
    cin>>num;
    int* Array = (int*) malloc(num * sizeof(int));
    for(int i = 0; i<num; i++)
    {
        cin>>Array[i];
    }
    /*Written the loic to reverse the array*/

    int tmp;
    for(int i = 0; i<num / 2; i++)
    {
        // tmp =(int)* (Array + num - i - 1);
        // *(Array + num - i - 1) = *(Array + i);
        // *(Array + i) = tmp;

        swap(Array[num - i - 1], Array[i]);
    }
    for(int i = 0; i<num; i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;



    return 0;
}
