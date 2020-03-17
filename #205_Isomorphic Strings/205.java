class Solution {
    public boolean isIsomorphic(String s, String t) {
        
        if(s.length()!=t.length())
        {
            return false;
        }
        
        Map<Character,Character> s_map = new HashMap();
        Map<Character,Character> t_map = new HashMap();
        
        char[] s_array = s.toCharArray();
        char[] t_array = t.toCharArray();
        
        for(int i=0;i<s_array.length;i++)
        {
            if(s_map.containsKey(s_array[i])&&s_map.get(s_array[i])!=t_array[i])
            {
                return false;//a->b,a->c
            }
            if(t_map.containsKey(t_array[i])&&t_map.get(t_array[i])!=s_array[i])
            {
                return false;//a->b,c->b
            }
            s_map.put(s_array[i],t_array[i]);
            t_map.put(t_array[i],s_array[i]);
        }
        return true;
    
    }
}
