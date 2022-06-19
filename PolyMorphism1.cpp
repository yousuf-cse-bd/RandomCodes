#include <iostream>
using namespace std;

//Run time polymorphism, heirarchical inheriting
// class Shape //base class
// {   
public:
    virtual void draw() //virtual function
    {
        cout<<"Drawing..."<<endl;
    }

};

class Rectangle : public Shape //inheriting shape class
{
public:
    void draw( //function overriding
        cout<<"Drawing Rectangle..."<<endl;
    )
};

class Circle : public Shape //inheriting shape class
{
public:
    void draw( //function overriding
        cout<<"Drawing Circle..."<<endl;
    )
};

int main(int argc, char const *argv[])
{
    /* code */
    Shape *s; //Base class pointer
    Shape sh;// Base class object

    Rectangle rec; //Rectangle object;
    Circle cir; //Circle Object

    s = &sh;
    s->draw();

    s = &rec;
    s->draw();

    s = & cir;
    s->draw();
    s = ?
    s->draw();

   
    return 0;
}


// #include <iostream>    
// using namespace std;    
// class Shape {                                        //  base class  
//     public:    
// virtual void draw(){                             // virtual function  
// cout<<"drawing..."<<endl;      
//     }        
// };     
// class Rectangle: public Shape                  //  inheriting Shape class.  
// {      
//  public:    
//  void draw()      
//    {      
//        cout<<"drawing rectangle..."<<endl;      
//     }      
// };    
// class Circle: public Shape                        //  inheriting Shape class.  
  
// {      
//  public:    
//  void draw()      
//    {      
//       cout<<"drawing circle..."<<endl;      
//    }      
// };    
// int main(void) {    
//     Shape *s;                               //  base class pointer.  
//     Shape sh;                               // base class object.  
//        Rectangle rec;    
//         Circle cir;    
//       s=&sh;    
//      s->draw();     
//         s=&rec;    
//      s->draw();      
//     s=?    
//     s->draw();     
// } 