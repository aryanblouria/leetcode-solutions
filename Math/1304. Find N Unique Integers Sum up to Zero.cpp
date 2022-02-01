//O(n)
class Solution1 {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        int i = (n % 2 == 0) ? (-n + 1) : (-n/2), j = -i;
        while (i <= j)
        {
            v.push_back(i);
            i += (n % 2 == 0) ? 2 : 1;
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> sumZero(int n) {
        vector<int> v (n);
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            v[i] = i + 1;
            sum += v[i];
        }
        v[n-1] = -sum;
        return v;
    }
};
