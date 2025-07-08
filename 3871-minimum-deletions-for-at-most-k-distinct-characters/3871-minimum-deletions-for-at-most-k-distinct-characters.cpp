class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char,int>map;
        for(auto value:s)
        {
            cout << value << " ";
            map[value]++;
        }
        if(map.size() <= k)
        {
            return 0;
        }
        int sum = 0;
        int count = map.size();
        while(count != k)
        {
            int mini = INT_MAX;
            int key = -1;
            for(auto i:map)
            {
                if(mini > i.second)
                {
                    key = i.first;
                    mini = i.second;
                }
            }
            sum += map[key];
            map.erase(key);
            count--;
        }
        return sum;
    }
};