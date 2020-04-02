class Solution {
    
    public boolean validPalindrome(String s) {
        char[] chars = s.toCharArray();
        
        int i=0;
        int j=s.length()-1;
        while(i<=j && (chars[i]==chars[j]))
        {
           i++; 
           j--;
        }
        if(i>j)
        {
            return true;
        }
        
        String s1 = s.substring(i,j);
        String s2 = s.substring(i+1,j+1);
        return valid(s1) || valid(s2) ;

    }
     public boolean valid(String s) {
        char[] chars = s.toCharArray();
        
        int i=0;
        int j=s.length()-1;
        while(i<=j && (chars[i]==chars[j]))
        {
                i++;
                j--;
        } 
        return i>j;
     }
    
}
