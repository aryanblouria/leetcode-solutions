//O(n^2)
class Solution1 {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> answer (n);
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (boxes[j] == '1')
                    answer[i] += abs(j-i);
            }
        }
        return answer;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> ans (n);
        vector<int> left (n);
        vector<int> right (n);
        
        left[0] = 0;
        int ct1 = 0;
        for (int i = 1; i < n; i++)
        {
            if (boxes[i-1] == '1')
                ct1++;
            left[i] = left[i-1] + ct1;           
        }
        
        right[n-1] = 0;
        int ct2 = 0;
        for (int i = n-2; i >= 0; i--)
        {
            if (boxes[i+1] == '1')
                ct2++;
            right[i] = right[i+1] + ct2;
        }
        
        for (int i = 0; i < n; i++)
            ans[i] = left[i] + right[i];
        return ans;
    }
};
