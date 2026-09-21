int maxHappiness(int T, int duration[], int happiness[], int n) {
    int dp[T + 1];

    for (int i = 0; i <= T; i++)
        dp[i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = T; j >= duration[i]; j--) {
            if (dp[j - duration[i]] + happiness[i] > dp[j])
                dp[j] = dp[j - duration[i]] + happiness[i];
        }
    }

    return dp[T];
}