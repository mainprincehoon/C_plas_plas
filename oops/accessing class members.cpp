#include <iostream>
using namespace std;
class Gun{
private:
    int ammo;
    int damage;
    int scope;
public:
    int getammo(){
        return ammo;
    }
    int getdamage(){
        return damage;
    }
    int getscope(){
        return scope;
    }    
    void setammo(int ammo){
        Gun::ammo=ammo;
        return;
    }void setdamage(int damage){
        Gun::damage=damage;
        return;
    }void setscope(int scope){
        Gun::scope=scope;
        return;
    } 
    
};

class player{
private:
    class Helmet{  // EXAMPLE OF NESTED CLASS
        int hp;  // hamne player ke andar 1 class banaayi helmet ke naam se issey ab is class(helmet) ko player ke alaawa or koi access nahi kar sakta
        int level;

    public:
        int gethp(){
            return hp;
        }
        int getlevel(){
            return level;
        }
        void sethp(int hp){
            Helmet::hp=hp;
            return;
        }
        void setlevel(int level){
            Helmet::level=level;
            return;
        }
        
    };
    string name;
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;  // class baahar banaayi gun jiska object hamne player ke andar liya lekin ham direct class ke andar class bana sakte hain
    Helmet helmetp;

    

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
    Gun getgun(){
        return gun;
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
    void setgun(Gun gun){
        player::gun=gun;
        return;
    } 

    void sethelmet(int level){
        Helmet *helmet1 = new Helmet;
        helmet1->setlevel(level);
        int health;
        if(level==1)        health=25;
        else if(level==2)   health=50;
        else if (level==3)  health=75;
        else if (level==4)  health=100;
        else cout<<"ERROR: invalid level";

        helmet1->sethp(health);
        helmetp=*helmet1;
        //agar player me helmet ka naam mai helmet1 rakh deta to player::helmet1=*helmet1 karna padta lekin kyuki yaha pe naam hi alag hai to need nahi hai
    }
    Helmet gethelmet(){
        return helmetp;
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
prince.sethelmet(4);

devansh.setage(20);
devansh.setscore(22);
devansh.setalive(true);
devansh.sethealth(100);
devansh.sethelmet(3);

Gun akm;     // player se khela ab gun ke saath khelte hain
akm.setammo(60);
akm.setdamage(30);
akm.setscope(2);

devansh.setgun(akm);   // player ko ye gun dedi (isko ham line 99 ke niche bhi likh sakte hai)

// cout<<devansh.getgun(); error de dega kyunki ham direct kisi ke paas gun hai usko print nahi kara sakte
// iske liye ham 1 Gun type ka dabba lenge usme devansh ka gun store karenge usme se uski properties print karenge
Gun gun1=devansh.getgun();
cout<<gun1.getammo();


//cout<<prince.gethp();


return 0;
}