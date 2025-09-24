class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        string tempAnswer = "";   
        vector<string> answer;    
        int length = s.size();    
        int size = 0;              
        for(int i = 0; i < length; i++) {
            tempAnswer += s[i];    
            size++;                
            if(size == k) {       
                answer.push_back(tempAnswer); 
                tempAnswer = "";              
                size = 0;                    
            }
        }
        if(size != 0) {
            while(size != k) {            
                size++;
                tempAnswer += fill;      
            }
            answer.push_back(tempAnswer); 
        }
        return answer; 
    }
};