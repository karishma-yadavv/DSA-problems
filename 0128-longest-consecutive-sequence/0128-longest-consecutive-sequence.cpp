class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int x;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it: st){
            if(st.find(it-1)==st.end()){
               int count=1;
                 x=it;
            
            while(st.find(x+1)!=st.end()){
                count++;
                x++;
            }
            
            longest=max(longest,count);
            }
        }
        return longest;
    }
};