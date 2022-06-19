#include <iostream>
using namespace std;

class InsertionSortUsingClass
{
private:
    /* data */
    int i, j, currentItem;

public:
    void insertionSort()
    {
        int n = 5, arr[n] = {5, 4, 3, 2, 1};
        for (i = 1; i < n; i++)
        {
            // currentItem = arr[i];
            // j = i - 1;
            // while (0 <= j && currentItem < arr[j])
            // {
            //     arr[j+1] = arr[j];
            //     j--;
            // }
            // arr[j+1] = currentItem;

            for (j = i; 0 != j && arr[j] < arr[j - 1]; j--)
            {
                swap(arr[j], arr[j - 1]);
            }
        }

        for (int item : arr)
        {
            cout << item << " ";
        }
        cout << endl;
    }
    InsertionSortUsingClass(/* args */);
    ~InsertionSortUsingClass();
};

InsertionSortUsingClass::InsertionSortUsingClass(/* args */)
{
    cout << "***Insertion Sort***" << endl;
}

InsertionSortUsingClass::~InsertionSortUsingClass()
{
    cout << "Program is Terminatr..!" << endl;
}

int main(int argc, char const *argv[])
{

    InsertionSortUsingClass insertionSortUsingClass;
    insertionSortUsingClass.insertionSort();

    return 0;
}
