#include <iostream>
using namespace std;

void bin(int bit, int k, int max_bits){
  if(bit == max_bits){
    bin(bit - 1, k, max_bits);
  }
  else{
    if((k & (1u << bit)) != 0)
      cout << (max_bits - bit)<< " ";
    if(bit != 0)
      bin(bit - 1, k, max_bits);
    else
      cout<<endl;
  }
}

void print(int k, int n, int max_bits){
  bin(max_bits, k, max_bits);
  if(k!=0){
    print(k - 1, n, max_bits);
  }
}

int main(){
  int n; cin>>n;
  cout<<"{}"<<endl;
  print((1u<<n)-1u, 1u<<n, n);
  return 0;
}