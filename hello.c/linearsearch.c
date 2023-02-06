#include <stdio.h>
int search(int array[], int n, int x) {
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}
int main() {
  int z,k, array[100];
  printf("Enter z:");
  scanf("%d",&z);
  for(k=0;k<z;k++)
  {
    printf("Enter terms:");
    scanf("%d",&array[k]);
  }
  int x = 1;
  int n = sizeof(array) / sizeof(array[0]);
  int result = search(array, n, x);
  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
