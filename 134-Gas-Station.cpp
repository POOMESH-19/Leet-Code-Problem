class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int pcost=0;
        int pgas=0;
       // int total =0;
        //int total=gas+cost;
        for(int i=0;i<gas.size();i++){
            pgas+=gas[i];
            pcost+=cost[i];
        }
        if(pgas<pcost){
            return -1;
        }
        int cgas=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            cgas+=gas[i]-cost[i];
            if(cgas<0){
                cgas=0;
                start=i+1;
            }
        }
        return start;

    }
};