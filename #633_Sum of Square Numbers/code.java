class Solution {
    public boolean judgeSquareSum(int c) {
        if(c<0)
        {
            return false;
        }

        for(int i = (int)Math.sqrt(c); i >= 0; --i)//if i starts from zero, it would cause "Time Limit Exceeded"
        {
            int x = c - (i*i);
            int target = (int)(Math.sqrt(x));
            if(target*target == x)
            {
                return true;
            }
         }
            return false;       
        }
}
