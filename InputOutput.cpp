#include <iostream>
using namespace std;

class InputOutput
{
    public:
    void inPut()
    {
        int n;
        cout<<"Enter n = ";
        cin>>n;
        int A[n];
        int i;
        for(i = 0; i <n ; i++)
        {
            cin>>A[i];
        }
        outPut(A,n);
    }

    void outPut(int A[],int n);
    
};

void InputOutput :: outPut(int A[],int n){
        int i;
        for(i = 0; i < n ; i++){
        cout<<A[i]<<endl;
      }
    } 
int main()
{
    InputOutput ob;
    ob.inPut();
    return 0;
}