#include <stdio.h>

void printFactors(int n) {
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf("%d ", i);
    }
  }
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("The factors of %d are: ", n);
  printFactors(n);

  return 0;
}