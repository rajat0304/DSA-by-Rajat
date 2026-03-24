#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binsearch(const vector<int>&arr,int target){
    int low=0;
    int high=arr.size()-1;
    
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
          low=mid+1;  
        }
    }
    return -1;
}
int main(){
    // taking the example of the array(unsorted)
    vector<int>score={13,14,15,1,2,3,4,5,6,7,8,9,10,11,12};
    int target=14;
    // using STL method to sort the array
    sort(score.begin(),score.end());
    cout<<"sorted array ";// printing the score array after sorting it 
    for(int i :score){
        cout<<i<<" ";
        }
        cout<<endl;
    int result=binsearch(score,target);
    // pritning the result of the program
    if(result!=-1){
        cout<<"element found at the index "<<result<<endl;
    }
    else 
    cout<<"element not found";
}
