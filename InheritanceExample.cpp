#include <iostream>
using namespace std;

class Shape
{
    protected:
    int base, height;

    public:

    void getDatas(int b, int h)
    {
        base = b, height = h;
    }
};

class Rectangle : public Shape
{
    public:
    void areaOfRectangle()
    {
        // getDatas(5, 6);
        int area = base * height;
        cout<<"Area of Rectangle: "<<area<<" Unit Square"<<endl;
    }

};

int main(int argc, char const *argv[])
{
    /* code */

    Rectangle r;
    r.getDatas(6, 7);
    r.areaOfRectangle();

    return 0;
}
