#include <iostream>
#include <vector>
using namespace std;
class Cricketer{
public:
    string name;
    int age;
    int no_of_testmatches;
    int avg_runs;


};

int main(){
int n;
cout<< "enter number of cricketers: ";
cin>>n;
vector <Cricketer> cricketers;

for(int i=0;i<n; i++){
    Cricketer *cricketer1 = new Cricketer;
    cricketer1->name= " " ;
    cricketers.push_back(*cricketer1);
}

for(int i=0; i<n; i++){
    // cout<<"player"<<cricketers[i].name<<"details are: "<< endl;
    cout<<cricketers[i].name<<endl;
    // cout<<cricketers[i].age<<endl;
    // cout<<cricketers[i].no_of_testmatches<< endl;
    // cout<<cricketers[i].avg_runs<< endl;
}
    return 0;
}