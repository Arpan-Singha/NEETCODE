class Solution {
public:
    void reverseString(vector<char>& s) {

       int i=0,j=s.size()-1;
       int n=s.size();
       while(i<n && j>i)
       {
        swap(s[i],s[j]);
        i++;
        j--;
       } 
       
    }
};