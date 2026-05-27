public class Solution {
    public int CarFleet(int target, int[] position, int[] speed) {
        var n = position.Length;
        var cars = new List<(int, int)>();
        for (var i = 0; i < n; i++)
        {
            cars.Add((position[i], speed[i]));
        }
        cars.Sort((a, b) => b.CompareTo(a));
        var st = new Stack<double>();
        for (var i = 0; i < n; i++)
        {
            int pos = cars[i].Item1;
            int spd = cars[i].Item2;
            double time = (double)(target - pos) / spd;
            if (st.Count == 0 || time > st.Peek())
            {
                st.Push(time);
            }
        }
        return st.Count;
    }
}