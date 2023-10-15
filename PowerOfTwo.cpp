class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        
        double p = log10(n)/log10(2);
        
        if(p - (int)p == 0)
            return true;
        return false;
    }
};
