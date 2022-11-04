class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(); 
        int i=0, j=n-1,area=0,res;
        while(i<j){
            // h=min(height[j],height[i]);
            // area =min(height[j],height[i])*(j-i);
            area=max(area, (min(height[j],height[i]))*(j-i));
            if(height[j]>height[i])
               i++;
               else 
               j--;
               }
               
               return area;
            
            
        
        
    }
};