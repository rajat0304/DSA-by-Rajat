#include<iostream>
#include<vector>
using namespace std;
int linsearch(const vector<int>&arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    //taking example of the two array 
    vector<int>score={10,20,50,60,70,-50,40,40,30};
    vector<int>data={1,2,3,4,5,6,7,8,9,10};
    int target_01=40;
    int target_02=50;
    int result=linsearch(score,target_01);
    if(result!=-1){
        cout<<"element found at the index:-"<<result<<endl;
    }
    else cout<<"element not found in the given array"<<endl;
    int result_02=linsearch(data,target_02);
    if(result_02!=-1){
        cout<<"element found at the index"<<result_02<<endl;
    }
    else cout<<"element not found in the given array"<<endl;
    return 0;
}