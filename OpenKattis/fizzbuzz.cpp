#include <iostream>

using namespace std;

void PrintResult(int i, int x, int y){
  if(i%x == 0 && i%y != 0){
    cout<< "Fizz\n";
  }else if(i%y == 0 && i%x != 0){
    cout<< "Buzz\n";
  }else if(i%x == 0 && i%y == 0){
    cout<< "FizzBuzz\n";
  }else{
    cout<< i<<"\n";
  }
}

int main(){
  int x,y,n;
  cin>>x>>y>>n;
  for(int i = 1; i<=n; i++){
      PrintResult(i,x,y);
  }

  return 0;
}
