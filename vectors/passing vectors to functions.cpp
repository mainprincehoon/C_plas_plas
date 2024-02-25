#include<iostream>
#include<vector>
using namespace std;
void change(vector <int> &a ){  // & laga ke pass karte hai vector ko function me
    a[0]=100;
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<< " ";  
        
    }
    cout<< endl;
}
int main(){
    vector <int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(5);
    v.push_back(4);
    v.push_back(4);
    change(v);
       
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";    // for displaying of elements
    }
    
    cout<<endl;

}