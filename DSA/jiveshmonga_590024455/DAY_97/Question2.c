int maxEnergy(int N, int energy[]) {
    if (N == 1)
        return energy[0];

    int dp[N];

    dp[0] = energy[0];
    dp[1] = energy[1] + energy[0];

    for (int i = 2; i < N; i++) {
        int oneStep = dp[i - 1];
        int twoStep = dp[i - 2];

        if (oneStep > twoStep)
            dp[i] = oneStep + energy[i];
        else
            dp[i] = twoStep + energy[i];
    }

    return dp[N - 1];
}