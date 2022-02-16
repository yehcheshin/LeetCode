#include <iostream>
#include <vector>
using namespace std;
/*
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".

*/

vector<int> findAnagrams(string s, string p) {
    vector<int> cur(26),goal(26),res;
    for(char c:p)
        goal[c-'a']++;
    for(int i=0;i<s.size();i++){
        cur[s[i]-'a']++;
        if(i >=p.size())
            cur[s[i-p.size()]-'a']--;
        if(cur==goal)
            res.push_back(i-p.size()+1);
    }
    return res;
    
}
int main(){
    
    return 0;
}
