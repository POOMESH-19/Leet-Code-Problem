class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<string,vector<string>> a;
        for(int i=0;i<n;i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            a[s].push_back(strs[i]);
        }
    vector<vector<string>>a1;
    for(auto& p:a){
        a1.push_back(p.second);
    }
    return a1;
}
};