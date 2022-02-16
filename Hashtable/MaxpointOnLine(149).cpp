#include <unordered_map>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    
}


int maxPoints(vector<vector<int>> &points){
    unordered_map <double,int> hash;
    int same_y ,same ;
    int max_count = 0;
    for(int i=0;i<points.size();i++){
        same_y = 1,same=1;
        for(int j=i;j<points.size();j++){
            if(points[i][1]==points[j][1]){
                same_y++;
                if(points[i][0]==points[j][1])
                    same++;
            }
            else{
                double dx = points[j][0] - points[i][0];
                double dy = points[j][1] - points[i][1];
                hash[dx/dy]++;
            }
        }
        max_count = max(max_count,same_y);
        for(auto item:hash){
            max_count = max(max_count,same+item.second);
        }
        hash.clear();
    }
    return max_count;
}

