/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int x, y, total;
  float average;

  printf("Enter the marks of subject 1 : ");
  scanf("%d", &x);

  printf("Enter the marks of subject 2 : ");
  scanf("%d", &y);

  total = x + y;
  average = total / 2.0;

  printf("The average is : %.2f", average);
  return 0;
}

