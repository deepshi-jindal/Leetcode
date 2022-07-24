/*class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
      int  n1=nums1.size();
        int n2=nums2.size();
       int i=n1,j=n2;
        while(i>0 && j>0)
        {
            int a=nums1[i-1];
            int b=nums2[j-1];
            if(a==b)
            {
                res.push_back(a);
                i--;
                j--;
            }
            else if(a>b)
            {
                i--;
            }
            else
                j--;
        }
        
        return res;*/
     /*   map<int,int> m;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            auto it= m.find(nums2[i]);
            if(it!=m.end()&& it->second>0){
                res.push_back(nums2[i]);
             it->second--;
            }
        }
        return res;
    }
};*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> map;
        vector<int> ans;
        for (int i = 0; i < nums1.size(); ++i)
        {
           map[nums1[i]]++; 
        }
         for (int i = 0; i < nums2.size(); ++i)
        {
             if (map[nums2[i]] > 0)
             {
                 map[nums2[i]]--;
                 ans.push_back(nums2[i]);
             }
        }
         return ans;
    }
        };