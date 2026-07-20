#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  long long int money;
  scanf("%lld", &money);
  if (money <= 1000) {
    printf("Bad luck!\n");
  } else {
    if (money >= 1500) {
      printf("I will buy Punjabi\n");
      printf("I will buy new shoes\n");
      printf("Alisa will buy new shoes\n");
    } else {
      printf("I will buy Punjabi\n");
    }
  }

  return 0;
}
