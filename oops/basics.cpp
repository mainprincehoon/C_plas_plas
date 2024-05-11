# include <iostream>
using namespace std;
class player{
    
    private:
    string location;
    int health;
    public:
    int score;
    int bulletsleft;        //data members
    // setter
    void sethealth(int heal){
        health=heal;
        return;
    }
    void setlocation(string loc){
        location=loc;
        return;
    }
    // getter
    void showhealth(){
            cout<<"health is: "<<health;
            return;
    }
    void showlocation(){
            cout<<"location is: "<<location;
            return;
    }
    string name;
    
   
};


int main(){
    //1.pehla banda

    // constructor
    player amit;             // yaha par ham player ki traits ko access kar sakte hai lekin sirf public waali
    amit.name= "amitpro";
    amit.score=50;
    amit.bulletsleft= 200;
    amit.sethealth(47);       // iska matlab ham private variable ko use kar sate hai public me fxn bana ke
    amit.showhealth();
    cout<<endl;  
    amit.setlocation("376 E");
    amit.showlocation();



    player prince, ranjan, devansh, rudransh;  // eak saath bohot saare naams bhi de sakte hain
    return 0;
}