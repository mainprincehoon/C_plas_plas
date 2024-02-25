#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"enter no of elements: ";
    cin>> n;
    for(int i=0;i<n;i++){
        int x;
        cout<< "element["<<i<<"]: ";
        cin >> x;
        v.push_back(x);
    }
    int search;
    cout<<"enter the element which you want to search: ";
    cin>>search;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==search){
            cout<<"your last occurance of "<<search<<" is "<<i;
            break;
        }
        if(v[i]!=search){
            cout<<"-1";
            break;
        }
    }
}