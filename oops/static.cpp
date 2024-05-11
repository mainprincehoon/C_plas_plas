#include <iostream>
using namespace std;

class Bike{  
public:  
    static int no_of_bikes; // this belongs to class (ye class ka object hai and sabke liye same rahega)
    int tyreSize;
    int engineSize;
    
    Bike (){  
        // cout<< "constructor call hua"<< endl; 
    }
    Bike (int tyreSize, int engineSize){ 
        Bike::engineSize=engineSize;
        // cout<< "constructor call hua"<< endl;
    }
     static void inc_no_of_bikes(){ // similarly we can also make static fxns (ham static fxn me bas static variable hi add kar sakte hai as wo pehle hi ban jaate hai and normal variable tabhi bante hai jab wo class call hoti hai to error aa jaayega)
        no_of_bikes++;
     }

  

};

int Bike::no_of_bikes=10;  // koi bike me nahi daala ye cuz it has nothing to do with object ye class ka hota hai


int main(){
    
    Bike tvs(20, 2);
    Bike honda(10,1);

    tvs.inc_no_of_bikes();   // kisi 1 ke liye bhi call kiya firbhi sabme effect padega
    Bike::inc_no_of_bikes();  // poore class ke liye bhi call kar sakte hai isko

    cout<< honda.no_of_bikes<< endl;  // 10 aa gaya cuz ab mai jitni bhi obj banaaunga sabme ye variable 10 set ho jaayega
    cout<< tvs.no_of_bikes<< endl;  




}