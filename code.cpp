/**************************************************************************
动态规划法，时间复杂度O（n^2）
***************************************************************************/
class AscentSequence {
public:
    int findLongest(vector<int> A, int n) 
    {
        // write code here
        vector<int> dp(n,0);
        for(int i = 0; i < n; ++i)
        {
            dp[i]=1;
            for(int j = 0; j < i; ++j)
            {
                if(A[j] < A[i])
                {
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        int maxN = 0;
        for(int i=0; i < n; ++i)
        {
            if(maxN < dp[i])
                maxN = dp[i];
        }
        return maxN;
    }
};
