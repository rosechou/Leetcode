class Solution {
    public String reverseVowels(String s) {
      HashSet<Character> hs = new HashSet<Character>();
        hs.add('a');
        hs.add('e');
        hs.add('i');
        hs.add('o');
        hs.add('u');
        hs.add('A');
        hs.add('E');
        hs.add('I');
        hs.add('O');
        hs.add('U');
        
        char[] chars = s.toCharArray();
        int i = 0;
        int j = s.length()-1;
        while(i<=j)
        {
           if(hs.contains(chars[i])&&hs.contains(chars[j]))
                {
                    char temp;
                    temp = chars[i];
                    chars[i] = chars[j];
                    chars[j] = temp;
                    i++;
                    j--;
                }
                else if(hs.contains(chars[i])&&!(hs.contains(chars[j])))
                {
                    j--;
                }
                else if(!(hs.contains(chars[i]))&&hs.contains(chars[j]))
                {
                    i++;
                } 
                else
                {
                    i++;
                    j--;
                }
        }
        
        String str = new String(chars);
        return str;
                
    }
}
