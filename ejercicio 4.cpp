#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <set>

using namespace std;


int main()
{
    int n, num; cin>>n;
    srand(time(NULL));
    set<int> enteros_unicos;

    for(int i=0; i<n; i++)
    {
        num = rand();
        enteros_unicos.insert(num);
    }

    for (auto& str : enteros_unicos) {
        std::cout << str << ' ';
    }
    cout << endl;

    return 0;
}