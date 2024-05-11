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

int main(){
    player prince; // compile ke time hi memory ban jaati hai iske liye(static allocation)
    player *devansh = new player;  // run time ke time memory banti hai iske liye(dynamic allocation)

    prince.setage(51); // normal ke liye ye
    devansh->setage(27); // dynamic/pointer waale ke liye ye
    
    cout<<prince.getage()<< endl;
    cout<< devansh->getage();

    return 0;
}