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
        if(level==1) health=25;
        else if(level==2)  health=50;
        else if (level==3)  health=75;
        else if (level==4)health=100;
        else cout<<"ERROR: invalid level";

        helmet1->sethp(health);
        helmetp=*helmet1;
        //agar player me helmet ka naam mai helmet1 rakh deta to player::helmet1=*helmet1 karna padta lekin kyuki yaha pe naam hi alag hai to need nahi hai
    }
    Helmet getHelmet(){ // int gerHelmet would me wrong kyuki helmet datatype ko ham sirf helmet datatype me hi return kar sakte hain int ya kisi or me nahi
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

//cout<< addscore(prince, devansh);

//int ranjan=getmaxscore(prince, devansh); galat hai kyuki player type ke data type ko ham sirf player type ke data type me hi store kar sakte hain
player ranjan=getmaxscore(prince, devansh);
// prince and devansh me se prince return hoga and ranjan ke andar prince ki saari properties aa jaayengi

cout<<ranjan.getage()<< endl;
prince.setage(55);
cout<<prince.getage()<< endl; // ab prince me koi change kiya to ranjan me koi change nahi aayega
cout<<ranjan.getage();

// Helmet helmetp= prince.getHelmet(); ye ham nahi kar sakte kyuki hamne helmet player me banaaya hai to baahar se access nahi kar sakte(helmet naam ka dabba ham kabhi layer class ke baahar nahi bana paayenge)
//cout<<helmetp.gethp();
}
