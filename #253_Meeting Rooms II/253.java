class Solution {
    public int minMeetingRooms(int[][] intervals) {
        if(intervals.length == 0){
            return 0;
        }
        int maxNum = max(intervals);
        // int minNum = min(intervals);
        int[] roomsTime = new int[maxNum+1];
        for(int i = 0; i < intervals.length; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            for(int j = start; j <= end; j++){
                roomsTime[j]++;
            }
        }
        return maxOneDim(roomsTime);
    }
    
    public static int max(int[][] t) {
    int maximum = t[0][0];   // start with the first value
    for (int i=0; i<t.length; i++) {
        for(int j = 0; j<t[i].length;j++){
            if (t[i][j] > maximum) {
            maximum = t[i][j];   // new maximum
            }
        } 
    }
    return maximum;
    }//end method max
    
    public static int maxOneDim(int[] t) {
    int maximum = t[0];   // start with the first value
    for (int i=1; i<t.length; i++) {
        if (t[i] > maximum) {
            maximum = t[i];   // new maximum
        }
    }
    return maximum;
    }//end method max

}
