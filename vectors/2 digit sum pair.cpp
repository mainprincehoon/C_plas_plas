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
        cin >> x;  
        v.push_back(x);
    }
    int m;
    cout<<"number daalo jiske sum ka pair tumko chahiye: ";
    cin>>m;

    int count=0; 
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==m) {
                count++;
                cout<<"aapke pair ke indexes hai ("<< i<<"," << j<<")";
                cout<<endl;
            }
            
        }
        
        
    }
    cout<<endl;
    cout<<"the number of pairs are "<< count;
}
