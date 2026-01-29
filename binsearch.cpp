#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binsearch(const vector<int>&nums,int target){
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        //this loop is to check the number of elementand weahter they are croosing each other or not 
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else
        high=mid-1;
    }
    return -1;
}
int main(){
    vector<int>score={1,2,3,4,5,6,7,8,9,10};
    int target=6;
    int result=binsearch(score,target);
    if(result!=-1){
        cout<<"element found at the index "<<result<<endl;
    }
    else
    cout<<"element not found"<<endl;
    return 0;
}