long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> d(n + 2, 0);
    int m = queries.size();
    int i;

    for (i = 0; i < m; i++) {
        int a = queries[i][0];
        int b = queries[i][1];
        long k = queries[i][2];
        d[a] = d[a] + k;
        d[b + 1] = d[b + 1] - k;
    }

    long mx = 0;
    long s = 0;
    for (i = 1; i <= n; i++) {
        s = s + d[i];
        if (s > mx)
            mx = s;
    }

    return mx;
}
