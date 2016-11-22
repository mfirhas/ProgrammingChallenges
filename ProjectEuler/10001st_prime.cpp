#include <iostream>

using namespace std;

bool isPrime(int number){
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

int prime_numbers(){
  int count = 0;
  int n = 2;
  do{
    bool is_prime = isPrime(n);
    if(isPrime){
      count++;
      n++;
    }else{
      n++;
    }
  }while(count<=10001);
  cout<<count;
  return 0;
}

int main(){
  cout<<prime_numbers();
  return 0;
}
