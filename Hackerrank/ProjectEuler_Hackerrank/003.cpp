// Author: Muhammad Fathir Irhas
// ProjectEuler 003 Smallest Multiple.

#include <bits/stdc++.h>

using namespace std;

bool AllDivisible(long long* p, long long* num){
  int sum = 0;
  for(int i=1;i<=*num;i++){
    if(*p % i==0)
      sum++;
  }
  if(sum==*num){
    return true;
  }else{
    return false;
  }
}

long long Check(long long* num){
    long long _num = *num;
    long long n = 1;
    bool allisdivisible;
    do{
        allisdivisible = AllDivisible(&n, &_num);
        if(allisdivisible == true){
            break;
        }else{
            n++;
        }
    }while(allisdivisible==false);
    return n;
}

int main(){
    long long num;
    cin >> num;
    long long list[num];
    for(long long i=0;i<num;i++){
        cin >> list[i];
    }

    for(long long j=0;j<num;j++){
        cout << Check(&list[j]) <<endl;
    }

    return 0;
}
