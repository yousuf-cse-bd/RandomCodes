/**
 * @file DeterminantOfEquationICT.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Determinant of the root of quadratic equstion: ax^2 + bx + c = 0
 * @version 0.1
 * @date 2022-07-22
 * @since Friaday, 6:37 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    double a,b,c, root1, root2, D;
    cout<<"Enter three numbers:\n";
    cin>>a>>b>>c;

    if(a == 0){
        root1 = (c/b)*(-1);
        cout<<"Single root: "<<root1<<endl;
    }
    else{
        D = (b*b) - 4*a*c;
        if(D > 0){
            root1 = (-b) + sqrt(D);
            root1 = root1 / (2*a);

            root2 = (-b) - sqrt(D);
            root2 = root2 / (2*a);

            cout<<"Roots are real and not equal."<<endl;
            cout<<"Root1: "<<root1<<endl;
            cout<<"Root2: "<<root2<<endl;
        }
        else if(D == 0){
            cout<<"Roots are real and equal."<<endl;
            root1 = root2 = b/(2*a);
            cout<<"Root1: "<<root1<<endl;
            cout<<"Root2: "<<root2<<endl;
        }else{
            cout<<"There is no real root but imagine root available"<<endl;
        }
    }
    return 0;
}
