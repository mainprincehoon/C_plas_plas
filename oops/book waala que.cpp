#include <iostream>
using namespace std;
class books{
private:
    string name;
    int price;
    int number_of_pages;
public:
        void setname(string name){
            books::name=name;   // agar same name hai to :: (scope resolution operator) laga ke slve ho jaata hai (iska matlab ye books waala name hai jisme fxn waala name daal do)
            return;
        }
        void setprice(int price){
            this->price=price;    // (::) iski jagah (this->) ye bhi use kar sakte hain.
            return;
        }
        void setpages(int pages){
            number_of_pages=pages;
            return;
        }
        int countprice(int p){
            if(price<p) return 0;
            else return 1;
        }
        int countbooks(string b){
            if(name==b) return 1;
            else return 0;
        }


};


int main(){
    books  brilliant_mind, atomic_habits, attitude_is_everything ;

    brilliant_mind.setname("brilliant mind");
    brilliant_mind.setprice(1000);
    brilliant_mind.setpages(100);

    atomic_habits.setname("atomic habits");
    atomic_habits.setprice(2000);
    atomic_habits.setpages(200);

    attitude_is_everything.setname("attitude is everything");
    attitude_is_everything.setprice(3000);
    attitude_is_everything.setpages(300);

    cout<<brilliant_mind.countprice(2000);
    cout<< endl;
    cout<<atomic_habits.countbooks("atomic habits");

    return 0;
}
