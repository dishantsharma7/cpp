class Solution {
    
private:
    
    vector<int> nextsmall(vector<int> &arr, int n){
        
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int curr=arr[i];
            while(s.top()!=-1 && curr<=arr[s.top()]){
                s.pop();
            }
           ans[i]=s.top();
           s.push(i);
        }
        return ans;
    }
    
    
    vector<int> prevsmall(vector<int> &arr, int n){
        
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int curr=arr[i];
            while(s.top()!=-1 && curr<=arr[s.top()]){
                s.pop();
            }
           ans[i]=s.top();
           s.push(i);
        }
        return ans;
        
    }
    
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> prev(n);
        prev=prevsmall(heights,n);
        vector<int> next(n);
        next=nextsmall(heights,n);
        
        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1)
                next[i]=n;
            int b=next[i]-prev[i]-1;
            
            int newarea=l*b;
            area=max(area,newarea);
        }
       return area;
    }
};