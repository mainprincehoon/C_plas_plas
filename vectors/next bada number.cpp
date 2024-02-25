#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void next_bada_num(vector <int> &v){
    int index=-1;
    // finding pivot index
    for(int i=v.size()-2; i>=0; i-- ){
        if(v[i]<v[i+1]){
            index= i;
            break;
        }
    }
    
    if(index!=-1){    
    
    reverse(v.begin()+index+1, v.end());
    // finding just greater element than index
    int j=-1;
for (int i=index+1; i<v.size(); i++){
        if(v[i]>v[index]){
        j=i;
        break;
        }
    }

    // swapping index and j
    int temp=v[index];
    v[index]=v[j];
    v[j]=temp;
    return;
    }
    else{reverse(v.begin(), v.end());}     // agar already maxed number hai to 1st number likh dega}
}
int main(){
    vector <int> v;
    int n;
    cout<<"enter no of elements: ";
    cin>> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;        
        v.push_back(x);
    }
    next_bada_num(v);
    
     for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " "; 
    }
    return 0;
}