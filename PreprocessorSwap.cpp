/**
 * @file PreprocessorSwap.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief ALL Swap or InterChange using macro
 * @version 0.1
 * @date 2022-09-21
 * @since WednesDay; 10:39 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#define interChange(X, Y) do{typeof(X) interChange = X; X = Y; Y = interChange;}while(false)
int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int a = 1, b = 2;
    float x = 1.05f, y = 2.25f;
    string s1 = "Yousuf", s2 = "Ali";
    int *pa = &a;
    int *pb = &b;

    cout<<"Before Swaping:"<<endl;
    cout<<"a = "<<a<<"\tb = "<<b<<endl;
    cout<<"x = "<<x<<"\ty = "<<y<<endl;
    cout<<"pa = "<<pa<<"\tpb = "<<pb<<endl;
    cout<<"s1 = "<<s1<<"\ts2 = "<<s2<<endl;

    interChange(a, b);
    interChange(x, y);
    interChange(pa, pb);
    interChange(s1, s2);

    cout<<"After Swaping:"<<endl;
    cout<<"a = "<<a<<"\tb = "<<b<<endl;
    cout<<"x = "<<x<<"\ty = "<<y<<endl;
    cout<<"pa = "<<pa<<"\tpb = "<<pb<<endl;
    cout<<"s1 = "<<s1<<"\ts2 = "<<s2<<endl;
    return 0;
}
