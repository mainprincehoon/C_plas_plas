#include <iostream>
#include <vector>
using namespace std;

class Bike{   // jis naam ki class hai usi naam ki constructor bana sakte hai cuz constuctor is a type of class
public:    
    int tyreSize;
    int engineSize;
    // // default constructor
    Bike (){  // isi pe parameter pass karde to parameterized constructor ban jaata hai
        cout<< "constructor call hua"<< endl; // jab bhi object call hoga constructor call hoga 
    }
    Bike (int tyreSize, int engineSize){  // parameterized consrtuctor  (agar parameterized consrtuctor banaaya hai to default cons. banaana padega warna agar issey kam ya zyda parameter diye to error aa jaayega)
        this->tyreSize=tyreSize; 
        Bike::engineSize=engineSize;
        cout<< "constructor call hua"<< endl;
    }

    // default destructors
    ~Bike(){  // fxn end hone pe us fxn ke andar ke objects ke distructors call ho jaate hain 
        cout<< "destructor call hua"<< endl;
    }

    //copy constructor
    // Bike( Bike &hero){  // V.IMP// & lagaana zaroori hai cuz wo jo parameter isme pass hoga wo pass by reference hona chahiye pass by value hua to wo parameter yaha aake firse copy constructor ko call kar dega or ye loop me fas jaayega
    //     cout<<" copy constructor called"<< endl;
    //     tyreSize=tyreSize.hero; 
    // }

};


int main(){
    
    Bike tvs(20, 2);  // 2 baar obj call kiya to 2 baar constructor chalega and cout hoga
    // ab hamko alag se tvs.tyre(10) karke set karne ki zaroorat nahi hai ham direct tvs.tyresize(10) object banaate time hi kar sakte hain
    Bike honda(10,1);
    bool flag=true;
    if(flag==true){
        Bike harley(30,3);
        // cout<<honda.tyreSize<<" "<<honda.engineSize<< endl; // ye to kar hi sakte hain
        cout<<harley.tyreSize<<" "<<honda.engineSize<< endl;   // iska consrtuctor call hua fir iska distructor call hua uz if fxn khatam ho gaya yahan uske baad main fxn end hu to baakiyon ke disrtuctors baad me call hue 
    }
    // cout<< tvs.tyreSize<<" ";
    // cout<< tvs.engineSize<<endl;
    // cout<< honda.tyreSize<<" ";
    // cout<< honda.engineSize<< endl;
    Bike b1(50,100);
    // Bike b2;
    // b2=b1;  //shallow copy (meaning b1  ke liye ram me jo memory thi usi ko b2 bhi point kar raha hai change in bi will result in change in b2)

    // Bike b2=b1;    //(COPY CONSTRUCTOR) (IMP)   
    Bike b2(b1);   // this both makes deep copy (meaning b1 and b2 dono ke liye alag alag memory store hui hai ram me to b1 me change will not affect elements in b2)
    cout<<b2.tyreSize << " "<< b2.engineSize<< endl;


}