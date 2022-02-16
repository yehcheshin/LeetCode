# include <iostream>
# include <unordered_set>
# include <vector>
# include <sstream>

using namespace std;



int longestConsecutive(vector<int>& nums) {
        unordered_set <int> hb;
        for(int num:nums){
            hb.insert(num);
        }
        int res = 0;
        while(!hb.empty()){
            int num = *(hb.begin());
            hb.erase(num);
            int next = num+1;
            int prev = num-1;
            while(hb.count(next)){
                hb.erase(next);
                next++;
            }
            while(hb.count(prev)){
                hb.erase(prev);
                prev--;
            }
            res = max(res,(next - prev)-1);
            
        }
        return res;
       
        
        
    }

int main(){
    string line;
    cout<<"enter vector:";
    getline(cin,line);
    istringstream stream(line);
    int num;
    vector<int> nums;
    while(stream>>num){
        nums.push_back(num);
    }

    cout<<"res:"<<longestConsecutive(nums)<<endl;
    

}

