public void reverseString(char[] s) {
    int start = 0;
    int end = s.length-1;
    char t;
    while(start < end){
        t = s[start];
        s[start] = s[end];
        s[end] = t;
        
        start++;
        end--;
    }
}