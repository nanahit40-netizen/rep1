int minimumSwaps(vector<int> arr) {
    int n = arr.size();
    int h = 0;
    int i;

    for (i = 0; i < n; i++) {
        while (arr[i] != i + 1) {
            int p = arr[i] - 1;
            int t = arr[i];
            arr[i] = arr[p];
            arr[p] = t;
            h++;
        }
    }

    return h;
}
