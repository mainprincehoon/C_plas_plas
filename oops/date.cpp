#include <iostream>
using namespace std;
int daysInMonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

class Date
{
private:
    int dd, mm, yy;
public:
    Date()
    {set(1,1,2024);}
    Date(int d, int m, int y)
    {set(d, m, y);}

    void setYear(int y)  {yy = (1900<=y && y<=2400)?y:2024;}
    void setMonth(int m) {mm = (1<=m && m<=12)?m:1;}

    void setDay(int d)
    {
        if (getMonth()==2) //it is february
            dd = (1<=d && d<=28+isLeap())?d:1;
        else //it is not february
            dd = (1<=d && d<=daysInMonth[getMonth()])?d:1;
    }


    void set(int d, int m, int y){
        setYear(y);
        setMonth(m);
        setDay(d); //it must be set after year and month
    }

    int getDay() const {return dd;}
    int getMonth() const  {return mm;}
    int getYear() const  {return yy;}

    

    void show() const {cout<<"Date is: "<<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<endl;}

    int isLeap() const {return ((yy%4==0 && yy%100!=0) || (yy%400==0));}

    void nextDay()
    {
        setDay(getDay()+1); //dd += 1;
        if (getDay()==1)
        {
            setMonth(getMonth()+1); //mm += 1;
            if (getMonth()==1)
                setYear(getYear()+1); //yy +=1;
        }

    }
    void addDays(int d)
    {
        //call nextDay() d times
        while(d--)
            nextDay();
    }
};

int main()
{
    /*
    Date d1 = Date(27, 2, 2024);
    d1.show();
    Date d2;
    d2.show();
    d2.set(29, 2, 2024);
    d2.show();
    d2.set(29, 2, 2023);
    d2.show();
    */
    //Date d(31, 1, 2024);
    //Date d = Date(30,3,2024);
    //Date d = Date(30,4,2024);
    //Date d = Date(28,2,2024);
    //Date d = Date(28,2,2023);
    Date d = Date(31,12,2024);
    d.show();
    d.nextDay();
    d.show();

    d.addDays(100);
    d.show();
    return 0;
}