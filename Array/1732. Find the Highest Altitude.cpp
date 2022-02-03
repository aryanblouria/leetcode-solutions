//O(n)
class Solution1 {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes (gain.size()+1, 0);
        int mx = 0, sum = 0, j = 1;
        for (int i = 0; i < gain.size(); i++)
        {
            sum += gain[i];
            altitudes[j++] = sum;
            mx = max(mx, sum);
        }
        return mx;
    }
};

//O(n)
class Solution2 {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, mx = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            int temp = sum;
            sum += gain[i];
            gain[i] = temp;
            mx = max(mx, sum);
        }
        gain.push_back(sum);
        return mx;
    }
};
