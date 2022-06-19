#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    int A[N];

    int flag = 0;
    for(int i = 0; i<N; i++){
        cin>>A[i];
    }

    for(int i = 0; i<N- 1; i++){
        if(A[i] > A[i+1]){
            flag = true;
            break;
        }
    }

    if(flag == true){
        cout<<"Not"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

    return 0;
}
