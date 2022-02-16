#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int  findMaxLength(vector<int> nums){
    int sum = 0;
    int maxLen = 0;
    unordered_map<int,int> mp;
    mp[0] = -1;
    for(int i=0;i<nums.size();i++){
        sum += nums[i]==1 ?1:-1;
        if(mp.count(sum)){
            maxLen = max(maxLen,i - mp[sum]);
        }
        else 
            mp[sum] = i;
    }
    return maxLen;
}



int main(){
    return 0;
}