//O(n^3)
class Solution1 {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int gt = 0;
        for (int i = 0; i < arr.size()-2; i++)
            for (int j = i+1; j < arr.size()-1; j++)
                for (int k = j+1; k < arr.size(); k++)
                {
                    if (abs(arr[i]-arr[j]) <= a)
                        if (abs(arr[j]-arr[k]) <= b)
                            if (abs(arr[i]-arr[k]) <= c)
                                gt++;
                }
        return gt;
    }
};

//O(n^3)
class Solution2 {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int gt = 0;
        for (int i = 0; i < arr.size()-2; i++)
            for (int j = i+1; j < arr.size()-1; j++)
            {
                if (abs(arr[i]-arr[j]) <= a)
                    for (int k = j+1; k < arr.size(); k++)
                    {
                        if (abs(arr[j]-arr[k]) <= b)
                            if (abs(arr[i]-arr[k]) <= c)
                                gt++;
                    }
            }
                
        return gt;
    }
};
