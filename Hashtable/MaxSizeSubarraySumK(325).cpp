
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int MaxSubArrayLen(vector<int>& nums ,int k){
    int sum = 0;
    int res = 0;
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        if(sum==k)
            res += i+1;
        else if(mp.count(sum - k))
            res = max(res,i - mp[sum - k] );
        if(!mp.count(sum))
           mp[sum]  = i;
            
    }
}