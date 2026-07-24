/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/string-to-integer-atoi/description/
// Time complexity: O(n)
// Space complexity: O(1)

/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function (s) {
    const ans = Number.parseInt(s);
    if (ans) {
        if (ans <= -2147483648) {
            return -2147483648; 
        }
        else if (ans >= 2147483647) {
            return 2147483647;
        }
        else { 
            return ans;
        }
    }
    return 0;
};