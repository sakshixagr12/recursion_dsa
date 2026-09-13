class Solution {
  public:
    int numberOfWays(int n) {
        // code here
        if (n==0 || n==1)
            return 1;
            
        int opt1 = numberOfWays(n-1);
        int opt2 = numberOfWays(n-2);
        return opt1+opt2;
    }
};
