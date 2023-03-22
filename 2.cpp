#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int n; bool cumple = false;
  while(!cumple)
    {
      cin>>n;
      if(n<=15)
        cumple = true;
    }
  cout << setprecision(n+1) << M_PI;
}