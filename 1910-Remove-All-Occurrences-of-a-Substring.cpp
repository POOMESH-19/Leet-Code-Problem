class Solution {
public:
    string removeOccurrences(string& s, string& part) {
        string stack="";
        int p=0, v=part.size();
        for (char c: s){
            stack.push_back(c);
            p++;
            if (p>=v && stack.ends_with(part)){
                p-=v;
                stack.resize(p);
            }
        }
        return stack;
    }
};