/*
Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  
#include <array>  

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::sort;
using std::endl;

bool containsDuplicate(vector<int>& nums) {


if(nums.size() == 0 || nums.size() == 1){// 0 or 1 elements in array, return false
return false;
}

sort(begin(nums),end(nums)); //sorts array O(N·log(N)), N = distance(first, last) comparisons
for(int index = 0 ; index < nums.size() ; index++){
if(nums[index] == nums[index+1])
return true;
else;
    }
return false;
}



int main(){

vector <int> nums1 = {1,2,3,1};
vector <int> nums2 = {1,2,3,4};
vector <int> nums3 = {1,1,1,3,3,4,3,2,4,2};
vector <int> nums4 = {};
vector <int> nums5 = {1};
vector <int> nums6 = {2,14,18,22,22};
vector <int> nums7 = {1,2,14,18,22,22,22,22};
cout << containsDuplicate(nums1) << endl;
cout << containsDuplicate(nums2) << endl;
cout << containsDuplicate(nums3) << endl;
cout << containsDuplicate(nums4) << endl;
cout << containsDuplicate(nums5) << endl;
cout << containsDuplicate(nums6) << endl;
cout << containsDuplicate(nums7) << endl;
    return 0;
}