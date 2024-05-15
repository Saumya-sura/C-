#include<stdio.h>

int lS(int arr[],int size,int element)
{
  for(int i=0;i<size;i++)
    {
      if(arr[i]==element)
      {
        return i;
      }
      
    }
  return -1;
}
int main()
{
  int arr[]={2,4,6,8,9};
  int element=4;
  int size=sizeof(arr)/sizeof(int);
  int search=lS(arr,size,element);
  printf(" element is %d and found at  %d",element,search);
  return 0;
}