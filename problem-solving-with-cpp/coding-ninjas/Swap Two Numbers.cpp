void swapNumber(int &a, int &b) {
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}