 #include<stdio.h>
 int main()
 {
  int n,count=0;
  printf("enter no");
  scanf("%d",&n);
  while(n!=0)
  {
  n=n/10;
  count++;
}
 printf("the no digts=%d",count);
  return 0;
}