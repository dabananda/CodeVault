int setBits(int N) {
  if ((N & (N + 1)) == 0) {
    return N;  // All bits are set
  }

  // Set the rightmost unset bit
  return N | (N + 1);
}