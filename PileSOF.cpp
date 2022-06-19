/**
 * @file PileSOF.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

class PileSOF{
private:
    /* data */
    int n;
    int *p;
public:
    PileSOF(int m){
        n = m;
        p = new int[n];
        cout<<"Constructor is up..."<<endl;
    }
    ~PileSOF()
    {
        cout<<"Destrcutor is called..!"<<endl;
        if(p != nullptr){
            delete p;
        }
    }
    void init(int n){
        for(int i = 0; i<n; i++){
            cin>>p[i];
        }
    }
    int push(int j, int x){
        int oldValue = p[j];
        if(j >= && j<n) { // this checking is necessary
            p[j] = x;
        }else if(j == n){
            // you need to rest memory
            // there are different ways to do that, for exmaple
            int *q = new int[n+1];
            int i = 0;
            for(; i<n; i++){
                q[i] = p[i];
            }
            q[i] = x;
            delete p;
            n++;
        }
        // You are forget the return statemet
        return oldValue; 
    }
    friend ostream& operator <<(ostream& os, const PileSOF& pil);
};

// It's most common way to use standard output to draw your class content
 ostream& operator<<(ostream& os, const PileSOF& pil){
    for(int i = 0; i<pil.n; i++){
        os<<pil.p[i]<<" ";
    }
    return os;
 }
// also you may override >> operator to swap your init fun.
int main(int argc, char const *argv[])
{
    /* code */
    int a;
    cout<<"How many integer does your array got? >>";
    cin>>a;
    PileSOF p1(a);
    cout<<"Enter your array's integers >>";
    p1.init(a);
    int j;
    cout<<"\nInteger that you want to add to the arrays ?>>";
    cin>>j;
    p1.push(a,j);
    cout<<"\nThe new array is >>";
    cout<<p1<<endl; // looks very nice for now
    return 0;
}
