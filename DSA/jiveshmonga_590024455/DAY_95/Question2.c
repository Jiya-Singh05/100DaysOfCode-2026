int maxHappiness(int T, int duration[], int happiness[], int n) {
    int dp[T + 1];

    for (int i = 0; i <= T; i++)
        dp[i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = T; j >= duration[i]; j--) {
            int value = happiness[i] + dp[j - duration[i]];

            if (value > dp[j])
                dp[j] = value;
        }
    }

    return dp[T];
}