#include <iostream>
#include <math.h>
using namespace std;

void cosine1()
{
    double degree = 60;
    double d = (60 * 3.14)/180;
    cout<<"Cosine of an angle is: "<<cos(d)<<endl;
}

void cosine2()
{
    double degree = -90;
    double radian = (degree*3.14)/180;
    cout<<"Cosine of an angle is: "<<cos(radian)<<endl;
}

void sine1()
{
    double degree = 60;
    double radian = (degree*3.14)/180;
    cout<<"Sine of an angle is: "<<sin(radian)<<endl;
}
void sine2()
{
    double degree = -50;
    double radian = (degree*3.14)/180;
    cout<<"Sine of an angle is: "<<sin(radian)<<endl;
}

void tan1()
{
    float degree = 10;
    float radian = (degree * 3.14)/180;
    cout<<"Tangent of an angle is: "<<tan(radian)<<endl;
}
void tan2()
{
    float degree = -60;
    float radian = (degree * 3.14)/180;
    cout<<"Tangent of an angle is: "<<tan(radian)<<endl;
}

void inverseOfCosine1()
{
    float degree = 90;
    float x = (degree * 3.14)/180;
    cout<<"Value of cosine is: "<<cos(x)<<endl;
    cout<<"Inverse of cosine is: "<<acos(x)<<endl;
}

void inverseOfCosine2()
{
    float degree = 0;
    float x = (degree * 3.14)/180;
    cout<<"Value of cosine is: "<<cos(x)<<endl;
    cout<<"Inverse of cosine is: "<<acos(x)<<endl;
}

void inverseOfCosine3()
{
    float degree = -60;
    float x = (degree * 3.14)/180;
    cout<<"Value of cosine is: "<<cos(x)<<endl;
    cout<<"Inverse of cosine is: "<<acos(x)<<endl;
}

void inverseOfSin1()
{
    float degree = 0;
    float x = (degree * 3.14)/180;
    cout<<"Value of sine is: "<<sin(x)<<endl;
    cout<<"Inverse of sine is: "<<asin(x)<<endl;
}
void inverseOfSin2()
{
    float degree = 90;
    float x = (degree * 3.14)/180;
    cout<<"Value of Sine is: "<<sin(x)<<endl;
    cout<<"Inverse of Sine is: "<<asin(x)<<endl;
}
void inverseOfSin3()
{
    float degree = -78;
    float x = (degree * 3.14)/180;
    cout<<"Value of Sine is: "<<sin(x)<<endl;
    cout<<"Inverse of Sine is: "<<asin(x)<<endl;
}
void inverseOfTan1()
{
    float degree = 0;
    float x = (degree * 3.14)/180;
    cout<<"Value of Tangent is: "<<tan(x)<<endl;
    cout<<"Inverse of Tangent is: "<<atan(x)<<endl;
}
void inverseOfTan2()
{
    float degree = -67;
    float x = (degree * 3.14)/180;
    cout<<"Value of Tangent is: "<<tan(x)<<endl;
    cout<<"Inverse of Tangent is: "<<atan(x)<<endl;
}
void inverseOfTan3()
{
    float degree = 30;
    float x = (degree * 3.14)/180;
    cout<<"Value of Tangent is: "<<tan(x)<<endl;
    cout<<"Inverse of Tangent is: "<<atan(x)<<endl;
}

void tanX_Y1()
{
    int x = 0;
    int y = 0;
    cout<<"Value of tan(y/x): "<<tan(y/x)<<endl;
    cout<<"Value of tan^-1(y/x): "<<atan2(y,x)<<endl;
}
void tanX_Y2()
{
    int x = 6;
    int y = 7.8;
    cout<<"Value of tan(y/x): "<<tan(y/x)<<endl;
    cout<<"Value of tan^-1(y/x): "<<atan2(y,x)<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    // cosine1();
    // cosine2();
    // sine1();
    // sine2();
    // tan1();
    // tan2();
    // inverseOfCosine1();
    // inverseOfCosine2();
    // inverseOfCosine3();
    // inverseOfSin1();
    // inverseOfSin2();
    // inverseOfSin3();

    // inverseOfTan1();
    // inverseOfTan2();
    // inverseOfTan3();

    tanX_Y1();
    tanX_Y2();

    return 0;
}
