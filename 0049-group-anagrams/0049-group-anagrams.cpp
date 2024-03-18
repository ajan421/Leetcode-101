class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map1;
        for(string str: strs)
        {   string x=str;
            sort(x.begin(),x.end());
            map1[x].push_back(str);
            
        }
        vector<vector<string>> ans;
        for(auto y : map1)
            ans.push_back(y.second);
        return ans;
        
    }
};