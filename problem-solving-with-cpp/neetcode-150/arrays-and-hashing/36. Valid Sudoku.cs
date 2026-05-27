public class Solution {
    public bool IsValidSudoku(char[][] board) {
        var rows = new HashSet<char>[9];
        var cols = new HashSet<char>[9];
        var boxes = new HashSet<char>[9];

        for (int i = 0; i < 9; i++) {
            rows[i] = new HashSet<char>();
            cols[i] = new HashSet<char>();
            boxes[i] = new HashSet<char>();
        }

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c == '.') continue;

                int boxIndex = 3 * (i / 3) + (j / 3);

                if (rows[i].Contains(c)) return false;
                rows[i].Add(c);

                if (cols[j].Contains(c)) return false;
                cols[j].Add(c);

                if (boxes[boxIndex].Contains(c)) return false;
                boxes[boxIndex].Add(c);
            }
        }

        return true;
    }
}
