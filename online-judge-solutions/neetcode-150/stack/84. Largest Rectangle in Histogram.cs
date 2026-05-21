public class Solution {
    private int[] PrevSmaller(int[] heights)
    {
        int len = heights.Length;
        Stack<int> st = new Stack<int>();
        int[] arr = new int[len];
        for (int i = 0; i < len; i++)
        {
            while (st.Count != 0 && heights[st.Peek()] >= heights[i])
            {
                st.Pop();
            }
            arr[i] = (st.Count == 0) ? -1 : st.Peek();
            st.Push(i);
        }
        return arr;
    }

    private int[] NextSmaller(int[] heights)
    {
        int len = heights.Length;
        Stack<int> st = new Stack<int>();
        int[] arr = new int[len];
        for (int i = len - 1; i >= 0; i--)
        {
            while (st.Count != 0 && heights[st.Peek()] >= heights[i])
            {
                st.Pop();
            }
            arr[i] = (st.Count == 0) ? len : st.Peek();
            st.Push(i);
        }
        return arr;
    }

    public int LargestRectangleArea(int[] heights) {
        int ans = 0;
        int len = heights.Length;
        int[] prev = PrevSmaller(heights);
        int[] next = NextSmaller(heights);
        for (int i = 0; i < len; i++)
        {
            int n = (next[i] - prev[i] - 1) * heights[i];
            ans = Math.Max(ans, n);
        }
        return ans;
    }
}