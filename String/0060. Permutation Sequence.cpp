//O(n!*log(n))
class Solution1 {
public:
    void permute(string &s, int index, vector<string> &v)
    {
        if (index == s.size())
        {
            v.push_back(s);
            return;
        }
        for (int i = index; i < s.size(); i++)
        {
            swap(s[i], s[index]);
            permute(s, index+1, v);
            swap(s[i], s[index]);
        }
    }
    
    string getPermutation(int n, int k) {
        string s;
        vector<string> v;
        
        for (int i = 1; i <= n; i++)
            s += to_string(i);
        permute(s, 0, v);
        sort(v.begin(), v.end());
        
        return v[k-1];
    }
};

//O(n^2)
class Solution2 {
public:
    string getPermutation(int n, int k) {
        string s;
        vector<int> v;
        
        int l = 1;
        for (int i = 1; i < n; i++)
        {
            l *= i;
            v.push_back(i);
        }
        v.push_back(n);
        
        k--;
        while (true)
        {
            s += to_string(v[k/l]);
            v.erase(v.begin() + k/l);
            if (v.size() == 0)
                break;
            k = k % l;
            l = l / v.size();
        }
        return s;
    }
};
