#include<iostream>
#include<vector>
using namespace std;
void sorthree1(vector <int> &nums){
    int zero=0,one=0,two=0, size=nums.size();
    for(int i=0;i<size; i++){
        if(nums[i]==0) zero++ ;
        else if(nums[i]==1) one++  ;
        else two++  ;                        // method 1 (har jagah yahi use karna)
    }
    for(int i=0; i<size; i++){
        if(i<zero) nums[i]=0;
        else if (i<(zero+one)) nums[i]=1;
        else nums[i]=2;
       
    }
     return;

}
// (1.) mid ke baare me socho
// (2.) 0 to low-1 tak 0, high+1 to end tak 2
// (3.) low to mid-1 tak 1
void sorthree2(vector <int> &nums){
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==2){
            nums[mid]=nums[high];
            nums[high]=2;
            high--;

        }
        else if(nums[mid]==0){             // interview me pooch sakte hain
            int temp = nums[mid];
            nums[mid]= nums[low];
            nums[low]=temp;
            low++;
            mid++;

        }
        else mid++;
       
    }
    return;
}

int main(){
    vector <int> nums;
    int n;
    cout<<"enter no of elements: ";
    cin>> n;
    for(int i=0 ; i<n; i++){
        int x;
        cout<< "element["<<i<<"]: ";
        cin>>x;
        nums.push_back(x);
    }
    //sorthree1(nums);
    sorthree2(nums);
    cout<< "your elements after sorting are: "<< endl;    
    for(int i=0; i<nums.size()-1; i++){
        cout<<nums[i]<< " ";  
    }
    return 0;
}