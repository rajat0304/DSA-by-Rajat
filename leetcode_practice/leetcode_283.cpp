#include<iostream>
#include<utility>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int inipoint = 0 ;
      for(int i=0; i<nums.size();i++){
        if(nums[i] !=0){
            swap(nums[inipoint],nums[i]);
            inipoint++ ;
        }
      }
    }
};