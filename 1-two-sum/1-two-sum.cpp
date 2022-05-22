class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> out;
        vector<int> temp(nums.size());
        unordered_map<int, vector<int> > umap;
        
        for(int i=0;i<nums.size();i++){
            umap[nums[i]].push_back(i);
            temp[i] = target - nums[i];
        }
        
        for(int i=0;i<temp.size();i++){
            if (umap.find(temp[i])!=umap.end()){
                if(umap[temp[i]].size()==2){
                    return umap[temp[i]];
                }
                else if ((i!=umap[temp[i]][0]) && (umap[temp[i]].size()==1)){
                    out.push_back(i);
                    out.push_back(umap[temp[i]][0]);
                    return out;
                }
            }
        }
        return out;
    }
};