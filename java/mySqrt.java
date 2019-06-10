class Solution {
    public int mySqrt(int x) {
        long output = 0;
        long i;

        if (x <= 1) {
            return x;
        }
        
        for(i=1;i<=x;i++) {
            if(i*i > x) {
                output = i-1;
                return (int)output;
            }
        }

        return (int)output;
    }
}
