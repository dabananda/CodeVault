bool isKthBitSet(int n, int k) {
  if ((n & (1 << k - 1)) != 0) return true;
  return false;
}