class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counter;
        for(int nums:nums)
        ++counter[nums];
        vector<pair<int,int>> freq;
        for (auto vt : counter)
            freq.push_back({ vt.second, vt.first });
        nth_element(freq.begin(), freq.end() - k,
            freq.end());
    
    vector<int> result;
    transform(freq.end() - k, freq.end(), back_inserter(result),
              [](pair<int, int> vt) { return vt.second; });
    return result;
    }
};