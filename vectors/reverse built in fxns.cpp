#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    //reverse(v.begin(), v.end());  // poora array reverse hota issey
    reverse(v.begin()+2, v.begin()+(7+1));  // reverse(v.begin()+ jis index se reverse karna hai, v.begin()+ (jis index tak karna hai+1));  (waha 7-1 ki jagah direct 6 likh sakte hain)
    reverse(v.begin()+2, v.end());   // koi index(n) se end tak reverse hoga
    reverse(v.begin(),  v.begin()+(7+1));   // starting se koi index n tak
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
}