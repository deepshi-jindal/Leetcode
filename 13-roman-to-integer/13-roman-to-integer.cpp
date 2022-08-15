class Solution {
public:
    int romanToInt(string s) {
        //Wrong output
        
     /*   int n=s.length();
         int c=0;
        int i=0;
       while(i<n)
        {
            char ch=s[i];
            if(ch=='I' && i+1<n && s[i+1]=='V')
            {
              c+=4;
              i=i+1;  
            }
            else if(ch=='I' && i+1<n && s[i+1]=='X')
            {
              c+=9;
              i++;
            }
            else if(ch=='I')
                c+=1;
            else if(ch=='V')
              c+=5;
            else if(ch=='X' && i+1<n && s[i+1]=='L')
            {
              c+=40;
              i++;
            }
            else if(ch=='X' && i+1<n &&  s[i+1]=='C')
            {
              c+=90;
              i++;
            }
            else if(ch=='X')
            {
              c+=10;
            }
            else if(ch=='L')
              c+=50;
            else if(ch=='C' && i+1<n && s[i+1]=='D')
            {
              c+=400;
              i++;
            }
            else if(ch=='C' && i+1<n && s[i+1]=='M')
            {
              c+=900;
              i++;
            }
            else if(ch=='C')
            {
              c+=100;
            }
            else if(ch=='D')
              c+=500;
            else
              c+=1000;
            i++;
        }
        return c;*/
        unordered_map<char,int> map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++){
            if(map[s[i]]<map[s[i+1]]&& i+1<n)
                c-=map[s[i]];
            
                else
                  c+=map[s[i]];  
            }
        
       return c;
    }
};