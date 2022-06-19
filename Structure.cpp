/****
 * C++ STRUCTURE
 * 1. Can hold both: Member Function and data members
 * 2. Can have static members
 * 3. Construction creation allowed
 * 4. Direct initializtion of data members is possoble
 * 5. Writing the 'struct' keyword is not necessary to declare structure-type variable
 * 6. Support access modofiers
 * 7. Can have both pointer and reference to the struct
 * 8. Sizeof operator will generate 1 for an empty structure
 * 9. Data hiding is possible
 */
#include <iostream>
using namespace std;
struct Structure
{
    /* data */
    private:
    int static count;
    public: 
    Structure(){
        cout<<"This is a Constructor"<<endl;
    }

    Structure(int a){
        cout<<"Paramiterez Constructor"<<endl;
    }

    void display()
    {
        cout<<"No Paramiterez Function"<<endl;
    }
    void display(int a)
    {
        cout<<"Paramiterez Function: "<<a<<endl;
    }
    void function(int p)
    {
        cout<<"Single paramiter function"<<endl;
    }
    

};

int main(int argc, char const *argv[])
{
    /* code */
    Structure s1;
    Structure s = Structure(10);

    s.display();
    s.function(10);
    s.display(20);
    return 0;
}

