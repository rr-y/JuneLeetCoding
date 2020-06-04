/*
Problem -> https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/
Idea -> Array Traversal
Time and Space -> O(n), O(1)


*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++)
            swap(s[i], s[s.size()-i-1]);
    }
};
