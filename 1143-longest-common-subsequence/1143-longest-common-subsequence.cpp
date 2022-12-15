class Solution {
public:
   
        
    int longestCommonSubsequence(string s1, string s2) 
    {
     short m[1001][1001] = {};
    for (auto i = 0; i < s1.size(); ++i)
        for (auto j = 0; j < s2.size(); ++j)
            m[i + 1][j + 1] = s1[i] == s2[j] ? m[i][j] + 1 : max(m[i + 1][j], m[i][j + 1]);
    return m[s1.size()][s2.size()];
    }
};