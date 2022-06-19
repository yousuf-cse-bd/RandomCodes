#include <iostream>
// #include <bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
    system("cls");
    int Arr[] = {10, 20, 30, 40, 50};

    int *pointer;
    pointer = Arr;
    for(int i = 0; i<(sizeof(Arr) / sizeof(int)); i++)
    cout<<*pointer + i<<endl;

    
    return 0;
}
