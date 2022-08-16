/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int main(){
  int num = 1000;
  int ans;
  int numMultiples3 = (num-1)/3;
  int numMultiples5 = (num-1)/5;
  int numMultiples15 = (num-1)/15;

  int sumMultiples3 = 3*((numMultiples3*(numMultiples3+1))/2);
  int sumMultiples5 = 5*((numMultiples5*(numMultiples5+1))/2);
  int sumMultiples15 = 15*((numMultiples15*(numMultiples15+1))/2);

  ans = sumMultiples3 + sumMultiples5 - sumMultiples15;
  printf("%d", ans);

  return 0;
}
