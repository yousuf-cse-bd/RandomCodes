#include <iostream>
using namespace std;

///array input-output using  proper class system
///not finished at all

class ArrayUsedClass
{
private:
    int n, i; // it's not best practice to declare this as public
    int *p; // better way to hide this fields include them in to private
public:
    ArrayUsedClass(int size)
    {
        n = size; 
        p = new int[n]; // dynamic memory allocation
        cout<<"Constrcutor is up..."<<endl;
    }
    ~ArrayUsedClass()
    {
        if(p != nullptr)
        {
            cout<<"Destructor Calling...!"<<endl;
            delete p;
        }
    }
    void inputData()
    {
        for(i = 0; i<n; i++)
        {
            cout<<"Index: "<<i<<"\tItem = ";
            cin>>p[i];
        }
    }
    void display()
    {
        for(i = 0; i<n; i++)
        {
            cout<<"Index: "<<i<<"\tItem = "<<p[i]<<endl;
        }
    }
    
};

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Size of Array: ";
    cin>>n;
    ArrayUsedClass arrayUsedClass(n);
    cout<<"Input Item into the Array:"<<endl;
    arrayUsedClass.inputData();
    cout<<"Print the items from the array:"<<endl;
    arrayUsedClass.display();
    return 0;
}


