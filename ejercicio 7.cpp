#include <iostream>
#include <string>

using namespace std;

void permutations(string vocales, int i, int n)
{
    if (i == n - 1){
        cout << vocales << endl;
        return;
    }
  
    for (int j = i; j < n; j++){
        swap(vocales[i], vocales[j]);
        permutations(vocales, i + 1, n);
        swap(vocales[i], vocales[j]);
    }
}



int main() {
  int N = 10; 
  string vocales = "ABCDEFGHIJ";
  permutations(vocales, 0, vocales.length());
}