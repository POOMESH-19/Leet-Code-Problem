class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        int low = 1e4;
        int high = 1e9;
        long long volume =1LL*length*width*height;
        bool bulky=length>=low||width>=low||height>=low||volume>=high;
        bool heavy=mass>=100;
        if (bulky & heavy)return "Both";
        if (bulky)return"Bulky";
        if (heavy)return"Heavy";
        return "Neither";
    }
};