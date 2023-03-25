#include <iostream>
#include <cmath>
#include <vector>
#include <bitset>
using namespace std;

vector<int> Criba(int n){
	int t=(n-3)/2 + 1;
  vector<int> primos;
  bitset<999999> bset;
	int i(0), j;
	for (; (i*i) <= n; i++){
		if (!bset.test(i)){
			for (j=i+1; (2*j+1)*(2*i+3)<=n; j++)
				bset.set(((2*j+1)*(2*i+3)-3)/2);
		}
	}

	primos.push_back((int)2);
	for (i=1, j=0; j<t; j++){
		if (!bset.test(j))
			primos.push_back((int)2*j+3);
	}
  return primos;
}

void PrimoCheck(int n){
	int nraiz=sqrt(n);
	vector<int> primos = Criba(nraiz);
	int s=primos.size(), i(0);
	for(i=0; i<s; i++){
		if(n%primos[i]==0){
			cout<<"Compuesto";
			return;
		}
	}
	cout<<"Primo";
}

int main(){
	int n; cin>>n;
	PrimoCheck(n);
}