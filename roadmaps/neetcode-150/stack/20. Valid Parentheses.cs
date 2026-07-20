public class Solution {
    public bool IsValid(string s) {
        var st = new Stack<char>();
        foreach (char c in s)
        {
            if (c == '(' || c == '[' || c == '{') st.Push(c);
            else
            {
                if (st.Count() == 0) return false;
                char top = st.Peek();
                if ((top == '(' && c == ')') ||
                        (top == '{' && c == '}') ||
                        (top == '[' && c == ']')) st.Pop();
                else return false;
            }
        }
        return st.Count() == 0;
    }
}