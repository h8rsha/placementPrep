// Reverse an array

// 1. Brute force : traverse the array from right to left and store in a temp array.
// 2. Using start and end pointer

void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        
        while(start < end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        return;
}
