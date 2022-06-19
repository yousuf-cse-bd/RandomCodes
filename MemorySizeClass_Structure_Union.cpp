/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 14 September 2019
 */

#include <iostream>
using namespace std;
#pragma pack(1)

struct test1
{
    char ch;
    int x, y;
};

class test
{
    char ch;
    int x, y;
};

union test2
{
    char ch;
    int x, y;
};

int main(int argc, char const *argv[])
{
    struct test1 t1;
    union test2 t2;

    class test t;

    cout<<"Structure: "<<sizeof(t1)<<endl;
    cout<<"Class: "<<sizeof(t)<<endl;
    cout<<"Union: "<<sizeof(t2)<<endl;
    return 0;
}
