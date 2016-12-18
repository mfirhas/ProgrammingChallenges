#include <stdio.h>
#include <math.h>

int isPrime(int num){
  int i;

  if (num==2)
    return 1;

  for (i=2;i<sqrt(num)+1;i++){
    if (num%i==0)
      return 0;
    }

  return 1;
}

int main(){
  int i,counter,ans;
  ans=0;
  counter=0;

  for (i=2;i<200000;i++){
    if (isPrime(i)==1){
      counter++;
      ans=i;
    }
    if (counter==10001){
      break;
    }
  }

  printf("%d",ans);
  return 0;
}
