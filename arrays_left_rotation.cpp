vector<int> rotLeft(vector<int> a, int d) {
    int n = a.size();
    vector<int> b;
    int i;

    d = d % n;

    for (i = d; i < n; i++)
        b.push_back(a[i]);

    for (i = 0; i < d; i++)
        b.push_back(a[i]);

    return b;
}
