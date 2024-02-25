#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void mergesort(vector <int>& v, vector <int>& vee){
    int a=v.size();
    for(int i=0;i<a ; i++){
      int x=v[i];                    // for merging
      vee.push_back(x);

    }
    sort(vee.begin(),vee.end());     // for sorting
    return;
}
int main(){
vector <int> v;
int n;
cout<< "enter no of elements in array 1: ";
cin>>n;
for(int i=0; i<n; i++){
    int x;
    cout<<"element["<<i<<"]: ";
    cin>>x;
    v.push_back(x);
}
vector <int> vee;
int m;
cout<< "enter no of elements in array 2: ";
cin>>m;
for(int i=0; i<m; i++){
    int x;
    cout<<"element["<<i<<"]: ";
    cin>>x;
    vee.push_back(x);
}

mergesort(v,vee);      // fxn calling

cout<<"array after merging and sorting: ";

for(int i=0; i<vee.size(); i++){
    cout<<vee[i]<< " ";
}
return 0;
}
