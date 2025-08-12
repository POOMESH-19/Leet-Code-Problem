class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int>zerolost,onelost;
        map<int,int>won,lost;
        for(int i=0;i<matches.size();i++){
            won[matches[i][0]]++;
        }
        for(int i=0;i<matches.size();i++){
            lost[matches[i][1]]++;
        }
        for(int i=0;i<matches.size();i++){
            if(lost[matches[i][0]] ==0 ){
                zerolost.insert(matches[i][0]);
            }
            if(lost[matches[i][1]] ==0 ){
                zerolost.insert(matches[i][1]);
            }
            if(lost[matches[i][0]] ==1 ){
                onelost.insert(matches[i][0]);
            }
            if(lost[matches[i][1]] ==1 ){
                onelost.insert(matches[i][1]);
            }
        }
        vector<int>v1,v2;
        for(auto a:zerolost){
            v1.push_back(a);
        }
        for(auto a:onelost){
            v2.push_back(a);
        }
        return {v1,v2};
    }
};