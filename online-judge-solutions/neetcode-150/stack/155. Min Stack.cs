public class MinStack {
    Stack<(int val, int min)> st = new Stack<(int, int)>();

    public void Push(int val) {
        if (st.Count == 0) st.Push((val, val));
        else st.Push((val, Math.Min(val, st.Peek().min)));
    }

    public void Pop() {
        if (st.Count > 0) st.Pop();
    }

    public int Top() {
        return st.Peek().val;
    }

    public int GetMin() {
        return st.Peek().min;
    }
}
