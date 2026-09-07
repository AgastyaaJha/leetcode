class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        int n = s.size();

        vector<long long> dp(n + 1, 0);
        vector<int> last(26, -1);

        dp[0] = 1; 

        for (int i = 1; i <= n; i++) {
            char ch = s[i - 1];

            dp[i] = (2 * dp[i - 1]) % MOD;

            int index = ch - 'a';

            if (last[index] != -1) {
                dp[i] = (dp[i] - dp[last[index] - 1] + MOD) % MOD;
            }

            last[index] = i;
        }

        
        return (dp[n] - 1 + MOD) % MOD;
    }
};