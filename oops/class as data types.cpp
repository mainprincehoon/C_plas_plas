#include <iostream>
using namespace std;


class player{
private:
    
    string name;
    int health;
    int age;
    int score;
    bool alive;

    

public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool getalive(){
        return alive;
    }
    void sethealth(int health){
        player::health=health;
        return;
    }
    void setage(int age){
        player::age=age;
        return;
    }
    void setscore(int score){
        player::score=score;
        return;
    }
    void setalive(int alive){
        player::alive=alive;
        return;
    } 

};


int addscore(player a, player b){     // object can also be passed as parameters
    return a.getscore()+ b.getscore();
}

player getmaxscore(player a, player b){        // class bhi data type ki tarah pass ho sakta hai meaning class ka bhi data type bana sakte hain
    if (a.getscore()> b.getscore()) return a;
    else return b;
}

int main(){
    player prince, devansh; // object creation ho raha hai statically(pehle hi)

prince.setage(19);
prince.setscore(100);
prince.setalive(true);
prince.sethealth(70);

devansh.setage(20);
devansh.setscore(22);
devansh.setalive(true);
devansh.sethealth(100);

//cout<< addscore(prince, devansh);

//int ranjan=getmaxscore(prince, devansh); galat hai kyuki player type ke data type ko ham sirf player type ke data type me hi store kar sakte hain
player ranjan=getmaxscore(prince, devansh);
// prince and devansh me se prince return hoga and ranjan ke andar prince ki saari properties aa jaayengi

cout<<ranjan.getage()<< endl;
prince.setage(55);
cout<<prince.getage()<< endl; // ab prince me koi change kiya to ranjan me koi change nahi aayega
cout<<ranjan.getage();
}