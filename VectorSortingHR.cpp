#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    vector<int> v;
    int item, n;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> item;
        v.push_back(item);
    }

    sort(v.begin(), v.end());

    for (auto x : v)
        cout << x << " ";
    if (v.size())
        cout << endl;
    return 0;
}
