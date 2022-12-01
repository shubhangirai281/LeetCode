class Solution {
public:
    
    bool isvow(char &c){
if( c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    return true;
        else return false;
    }
    bool halvesAreAlike(string s) {
        int j=s.size()-1;
        int i=0;
        int cnt1=0,cnt2=0;
        while(i<j){
            if (isvow(s[i])==true)
            cnt1++;
            if(isvow(s[j])==true)
                cnt2++;
            i++;
            j--;
          
            
        }
          if(cnt1==cnt2)
                return true;
        
        return false;
    }
};