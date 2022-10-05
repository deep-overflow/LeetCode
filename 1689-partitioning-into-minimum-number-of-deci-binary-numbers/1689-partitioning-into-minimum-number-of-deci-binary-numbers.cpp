class Solution {
public:
    int minPartitions(string n) {
        int k = 0;
        int size = n.size();
        
        for (int i = 0; i < size; i++)
        {
            if (n[i] - 48 > k)
            {
                k = n[i] - 48;
            }
        }
        return k;
    }
};