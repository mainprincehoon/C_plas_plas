#include <iostream>
#include <math.h>

using namespace std;
const float PI=3.14;

//abstract class; cannot be instantiated
class Shape
{
public:
    virtual float area()=0;
    virtual float volume()=0;
    virtual void getName()=0;
    virtual void show()= 0;
};
class Point : public Shape
{
private:
    int x, y;
public:
    Point(){set(0,0);}
    Point(int x, int y){set(x, y);}
    void setX(int x){Point::x= x;}
    int getX(){return x;}
    void setY(int y){Point::y = y;}
    int getY(){return y;}
    void set(int x, int y)
    {setX(x); setY(y);}

    float area(){return 0;}
    float volume(){return 0;}
    void getName(){cout<<"I am a point"<<endl;}
    void show()
    {cout<<"x = "<<getX()<<", y = "<<getY()<<endl;}
    void read()
    {
        int a, b;
        cout<<"Enter a and b: ";
        cin>>a>>b;
        set(a, b);
    }
};

class Circle :public Point
{
private:
    int r;
public:
    Circle(){setR(1);}
    Circle(int x, int y, int r):Point(x, y)
    {setR(r);}

    void setR(int r){Circle::r=(r>0)?r:1;}
    int getR(){return r;}

    //overloading of set() function
    void set(int x, int y, int r)
    {
        Point::set(x, y);
        //set(x, y); //it will also work
        setR(r);
    }

    //overriding
    float area(){return PI*getR()*getR();}
    float volume(){return 0;}
    void getName(){cout<<"I am a circle"<<endl;}
    void show()
    {
        Point::show();
        //show();   //it will not work
        cout<<"r = "<<getR()<<endl;
    }
};

class Cone : public Circle
{
private:
    int h;
public:
    Cone(){setH(1);}
    Cone(int x, int y, int r, int h):Circle(x, y, r)
    {setH(h);}

    void setH(int h){this->h = (h>0)?h:1;}
    int getH(){return h;}

    //overloading
    void set(int x, int y, int r, int h)
    {
        Circle::set(x, y, r); //Circle:: is not necessary
        //set(x, y, r);   //it will also work
        setH(h);
    }

    //overriding
    float area()
    {
        int r = getR();
        int h = getH();
        float a = PI*r*r + PI*r*(sqrt(r*r+h*h));
        return a;
    }

    float volume()
    {
        int r = getR();
        int h = getH();
        return (PI*r*r*h)/3;
    }

    void getName(){cout<<"I am a cone"<<endl;}
    void show()
    {
        Circle::show();
        //show();   //it will not work
        cout<<"h = "<<getH()<<endl;
    }
};

int main()
{
    //Shape is the base class of this class Hierarchy
    //Hence pointer of Shape can point to objects of all classes
    //as is array of size 5, with each element as Shape class pointer
    Shape* sa[5];

    sa[0] = new Point(10, 20);
    sa[1] = new Cone(1, 2, 3, 4);
    sa[2] = new Circle(11, 12, 13);
    sa[3] = new Circle(21, 22, 23);
    sa[4] = new Cone(2, 4, 6, 8);

    //the loop demonstrates the polymorphic behavior
    //the function of that class is called, of which the object is being pointed
    for (int i=0; i<5; ++i)
    {
        sa[i]->getName();
        sa[i]->show();
        cout<<"Area is: "<<sa[i]->area()<<endl;
        cout<<"Volume is: "<<sa[i]->volume()<<endl<<endl;
    }

    for (int i=0;i<5; ++i)
        delete sa[i];
    return 0;
}


