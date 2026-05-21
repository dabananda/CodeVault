/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 11:55:10
Date          : 2026-02-14
*/

/*
Problem Statement: Validating a Phone Number Format

You are given a string str representing a phone number. Your task is to determine whether the given string is a valid number based on the following rules:

A string is considered valid if it satisfies one of the following formats:

Format 1 (10-digit number):
The string must contain exactly 10 characters.
All characters must be digits (0–9).

Example of valid format:
1234567890

Format 2 (12-character number with dashes):
The string must contain exactly 12 characters.
The character at index 3 and 8 (0-based indexing) must be a dash '-'.
All other characters must be digits (0–9).

Example of valid format:
123-4567-890

Important Note
If the string length is neither 10 nor 12, it should still be considered Valid.
If the string length is 10 or 12 but does not satisfy the required rules above, it should be considered Invalid.

Input
A single string str.

Output
Print:
"Valid Number" if the string satisfies the rules.
"Invalid Number" otherwise.

Examples
Input           Output
1234567890	    Valid Number
123-4567-890	Valid Number
12345abcde	    Invalid Number
123-45a7-890	Invalid Number
1234	        Invalid Number
*/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string number) {
    if (number.size() == 10) {
        for (int i = 0; i < 10; i++) {
            if (!isdigit(number[i])) return false;
        }
        return true;
    } 
    else if (number.size() == 12) {
        for (int i = 0; i < 12; i++) {
            if (i == 3 || i == 8) {
                if (number[i] != '-') return false;
            } else {
                if (!isdigit(number[i])) return false;
            }
        }
        return true;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (isValid(s)) cout << "Valid Number" << endl;
    else cout << "Invalid Number" << endl;
    return 0;
}
