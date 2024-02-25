#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"enter no of elements: ";
    cin>> n;
    for(int i=0;i<n;i++){
        int x;
        cout<< "element["<<i<<"]: ";
        cin >> x;          //best way to input vector
        v.push_back(x);
    }
    cout<< "your elements are: "<< endl;    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";    // for displaying of elements
    }
}