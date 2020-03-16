class Solution {
    public int longestPalindrome(String s) {
        if(s==null || s.length()==0)
        {
            return 0;
        }
        int re=0;
        char[] str = s.toCharArray();
        int[] ans = new int[58];//ascii "A" to "z" is 58
        for(int i=0;i<s.length();i++)
        {
            ans[str[i]-'A']++;
        }
        for(int j=0;j<58;j++)
        {
            re+=(ans[j]/2)*2;
        }
        if(re!=s.length())
        {
            return re+1;
        }
        else
        {
            return re;
        }
        
    }
}
