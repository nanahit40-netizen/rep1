int hourglassSum(vector<vector<int>> arr) {
    int mx = -99;
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            int s = 0;
            s = s + arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            s = s + arr[i + 1][j + 1];
            s = s + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (s > mx)
                mx = s;
        }
    }

    return mx;
}
