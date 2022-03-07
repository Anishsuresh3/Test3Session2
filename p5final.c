#include<stdio.h>
int input_size()
{
  int n;
  printf("Enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  printf("Enter the array elements\n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int find_largest(int n, int a[n])
{
  int max=a[0],k=0;
  for(int i=1;i<n;i++)
    {
      if(max<a[i]){
        max=a[i];
        k=i;
        }
    }
  return k;
}
void out_put(int n, int a[n], int largest)
{
  printf("The index of the largest element %d in array is %d\n",a[largest],largest);
}
int main()
{
  int n=input_size();
  int a[n];
  input_array(n,a);
  int l=find_largest(n,a);
  out_put(n,a,l);
  return 0;
}