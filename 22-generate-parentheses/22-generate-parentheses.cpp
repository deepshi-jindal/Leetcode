class Solution {
public:
   void create(vector<string> &result,string temp,int i,int j){
        if(i==0 && j==0)
            result.push_back(temp);
       else{
           if(i!=0)
           create(result,temp+"(",i-1,j);
           if(i<j)
           create(result,temp+")",i,j-1);
       }
    }
    vector<string> generateParenthesis(int n) {
     vector<string> result;
        string temp="";
        create(result,temp,n,n);
        return result;
    }
};