#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(5);
    v.push_back(4);
    v.push_back(4);
    cout<<"pehle"<<endl;
    cout<<v.size()<< endl;// vector me kitne elements hai wo bataata ha ye
    cout<<v.capacity()<<endl; // ye capacity bataata hai(capacity sidha double hoti hai jaise 1 se 2 se 4 and 5th element add karte hi capacity 8 ho jaayegi).
    v.pop_back();
    v.pop_back();
    cout<< "baad me"<< endl;
    cout<<v.size()<< endl;
    cout<<v.capacity()<< endl; //1 baar capacity ban gayi to ban gayi pop kiya to size kam hoga capacity nahi

}