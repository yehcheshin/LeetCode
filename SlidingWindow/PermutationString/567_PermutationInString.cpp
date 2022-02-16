#include <iostream>
#include <vector>
using namespace std;

/*
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
*/

bool PermutationInString(string s1, string s2){
    vector<int> cur(26),goal(26);
    for(char c:s1){
        goal[c-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        cur[s2[i]-'a']++;
        if(i>=s1.size())
            cur[s2[i-s1.size()]-'a']--;
        if(cur==goal)
            return true;
    }
    return false;

}



