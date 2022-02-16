#include <unordered_map>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
vector<int> twoSum(vector<int>nums,int target){
    unordered_map<int,int> hp;
    vector<int> res;
    for(int i=0;i<nums.size();i++){
        if(hp.count(nums[i])){
            res.push_back(hp[nums[i]]);
            res.push_back(i);
            cout<<hp[nums[i]]<<endl;
            cout<<i<<endl;

            return res;
        }
        else{
            hp[target-nums[i]] = i ;
        }
    }
    return res;
}

int main(){
    int target;
    vector<int> nums;
    int num;
    string line;

    
    std::cout << "Enter nums vector: "<<endl;
    getline(cin,line);
    cout<<line<<endl;
    istringstream stream(line);
    std::cout << "target: "<<endl;;
    cin >> target ;
    while(stream>>num){
        nums.push_back(num);
    }
  
    twoSum(nums,target);
    
}