#include <iostream>

using namespace std;

bool AllDivisible(int *p){
  int sum = 0;
  for(int i=1;i<=20;i++){
    if(*p % i==0)
      sum++;
  }
  if(sum==20){
    return true;
  }else{
    return false;
  }
}

int main(){
  int n = 1;
  bool allisdivisible;
  do{
    allisdivisible = AllDivisible(&n);
    if(allisdivisible == true){
      break;
    }else{
      n++;
    }
  }while(allisdivisible==false);

  cout<<"Smallest Positive number: "<<n;
  return 0;
}
