public class Solution {
    public int[] DailyTemperatures(int[] temperatures) {
        var len = temperatures.Length;
        var res = new int[len];
        var st = new Stack<int>();
        for (var i = 0; i < len; i++)
        {
            while (st.Count > 0 && temperatures[st.Peek()] < temperatures[i])
            {
                var idx = st.Pop();
                res[idx] = i - idx;
            }
            st.Push(i);
        }
        return res;
    }
}