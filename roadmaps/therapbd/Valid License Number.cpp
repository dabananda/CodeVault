/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 13:10:28
Date          : 2026-02-14
*/

/*
Problem: License Number Validation

You are given a string s representing a vehicle license number. Your task is to determine whether the given license number is valid according to the following rules.

License Number Format:

The license number must follow this exact format:
<Region>-<TwoDigitNumber>-<FourDigitNumber>
There must be exactly two hyphens (-) separating three parts.

Validation Rules:

1. Region Code (First Part)
The first part (before the first hyphen) must be one of the following valid region codes:
Ka
Kha
Ga
Gha
UMA
If the region code does not match one of these exactly, the license number is invalid.

2. Two-Digit Number (Second Part)
The second part (between the two hyphens):
Must contain only digits
Must represent a number between 11 and 99 (inclusive)
If it contains non-digit characters or falls outside this range, it is invalid.

3. Four-Digit Number (Third Part)
The third part (after the second hyphen):
Must contain only digits
Must represent a number less than or equal to 9999
If it contains non-digit characters or exceeds 9999, it is invalid.

4. Hyphen Count
The string must contain exactly two hyphens
If there are fewer or more than two hyphens, it is invalid

Input
A single string s representing the license number.

Output
Print:
"Valid Number" if the license number satisfies all the rules.
"Invalid Number" otherwise.

Examples
Input	        Output
Ka-12-3456	    Valid Number
UMA-99-9999	    Valid Number
Ga-10-1234	    Invalid Number
Kha-45-10000	Invalid Number
Ab-12-3456	    Invalid Number
*/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    if (count(s.begin(), s.end(), '-') != 2)
        return false;
    
    int first = s.find('-');
    int second = s.find('-', first + 1);

    string part1 = s.substr(0, first);
    string part2 = s.substr(first + 1, second - first - 1);
    string part3 = s.substr(second + 1);

    if (!(part1 == "Ka" || part1 == "Kha" ||
          part1 == "Ga" || part1 == "Gha" ||
          part1 == "UMA"))
        return false;

    if (part2.size() != 2)
        return false;

    if (!isdigit(part2[0]) || !isdigit(part2[1]))
        return false;

    int num2 = (part2[0] - '0') * 10 + (part2[1] - '0');

    if (num2 < 11 || num2 > 99)
        return false;

    if (part3.size() != 4)
        return false;

    for (char c : part3)
        if (!isdigit(c))
            return false;

    int num3 = 0;
    for (char c : part3)
        num3 = num3 * 10 + (c - '0');

    if (num3 > 9999)
        return false;

    return true;
}

int main() {
    string s;
    cin >> s;
    cout << (isValid(s) ? "Valid Number" : "Invalid Number") << endl;
}
