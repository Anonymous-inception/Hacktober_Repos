//finds the sumof all even and all odd digits, and returns the greater value

#include<stdio.h>

int sum(int num){
  int i,sum_even=0,sum_odd=0;
  while(num!=0){
    i=num%10;
    if(i%2==0)
      sum_even=sum_even+i;
    if(i%2!=0)
      sum_odd=sum_odd+i;
    num=num/10;
  }
  //printf("%d\n%d",sum_odd,sum_even );
  if(sum_odd>sum_even)
    printf("%d\n",sum_odd );
  else
    printf("%d\n", sum_even);
}
int main(){
  int i=123456789;
  //scanf("%d",&i);
  sum(i);
  return 0;
}
