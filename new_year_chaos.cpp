void minimumBribes(vector<int> q) {
    int n = q.size();
    int h = 0;
    int i, j;

    for (i = 0; i < n; i++) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
    }

    for (i = n - 1; i >= 0; i--) {
        int from = q[i] - 2;
        if (from < 0)
            from = 0;
        for (j = from; j < i; j++) {
            if (q[j] > q[i])
                h++;
        }
    }

    cout << h << endl;
}
