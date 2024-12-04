class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(auto i: strs){
            string temp=i;
            sort(i.begin(),i.end());
            m[i].push_back(temp);
        }
        vector<vector<string>>res;
        for(auto i :m){
            res.push_back(i.second);
        }
        return res;
    }
};