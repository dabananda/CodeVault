public class Solution {
    public int EvalRPN(string[] tokens) {
        Stack<int> st = new Stack<int>();
        int n = tokens.Length;
        foreach (string c in tokens) {
            if (c == "+") {
                int a = st.Peek(); st.Pop();
                int b = st.Peek(); st.Pop();
                st.Push(a + b);
            } else if (c == "-") {
                int a = st.Peek(); st.Pop();
                int b = st.Peek(); st.Pop();
                st.Push(b - a);
            } else if (c == "*") {
                int a = st.Peek(); st.Pop();
                int b = st.Peek(); st.Pop();
                st.Push(a * b);
            } else if (c == "/") {
                int a = st.Peek(); st.Pop();
                int b = st.Peek(); st.Pop();
                st.Push(b / a);
            } else {
                st.Push(int.Parse(c));
            }
        }
        return st.Peek();
    }
}