#include <stdio.h>

int main() {
  int n, r, original, reversed = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  original = n;

  while (n > 0) {
    r = n % 10;
    reversed = reversed * 10 + r;
    n = n / 10;
  }

  if (original == reversed) {
    printf("%d is a palindrome.\n", original);
  } else {
    printf("%d is not a palindrome.\n", original);
  }

  return 0;
}