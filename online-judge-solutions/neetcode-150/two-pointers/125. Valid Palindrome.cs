public class Solution {
    public bool IsPalindrome(string s) {
        int left = 0;
        int right = s.Length - 1;
        while (left <= right)
        {
            if (!char.IsLetterOrDigit(s[left]))
            {
                left++;
                continue;
            }
            if (!char.IsLetterOrDigit(s[right]))
            {
                right--;
                continue;
            }
            if (char.ToLower(s[left]) != char.ToLower(s[right]))
            {
                return false;
            }
            else {
                left++;
                right--;
            }
        }
        return true;
    }
}