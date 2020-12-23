// Find the Duplicate Number
int findDuplicate(vector<int>& nums) {
    map <int, int> fmap;

    for (int i = 0; i < nums.size(); i++)
    {
        fmap[nums[i]]++;
    }
    for (auto x : fmap)
    {
        if (x.second > 1)
            return x.first;
    }
    return 0;
}