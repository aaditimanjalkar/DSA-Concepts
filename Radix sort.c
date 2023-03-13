#include <stdio.h> 
int a
print(int *a, int n)
{
int i;
for (i = 0; i < n; i++) 
 printf("%d ", a[i]);
}
void radix_sort(int *a, int n)
{
int i, b[10], m = 0, exp = 1; 
  for (i = 0; i < n; i++)
{
if (a[i] > m)
m = a[i];
  }
while (m / exp > 0)
{
int bucket[10] = { 0 }; 
  for (i = 0; i < n; i++)
bucket[a[i] / exp % 10]++;
  for (i = 1; i < 10; i++) 
    bucket[i] += bucket[i - 1];
  b[--bucket[a[i] / exp % 10]] = a[i];
for (i = 0; i < n; i++) a[i] = b[i];
exp *= 10;
}
}
int main()
{
int a[10]; int i, n;
printf("Enter size of array to be sorted:\n"); scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element %d:\n",i+1); scanf("%d",&a[i]);
}
printf("Entered array is: \n"); print(&a[0],n);
  radix_sort(&a[0],n);
printf("\nArray after radix sort is: \n"); 
  print(&a[0],n);
return 0;
 
for (i = n - 1; i >= 0; i--)	} 
