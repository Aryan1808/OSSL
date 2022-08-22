#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <stack>
#include <queue>
#include <list>
#include <chrono>
#include <vector>
#include <map>
using namespace std;
using namespace std::chrono;
int main()
{
auto start = high_resolution_clock::now();
for (int i = 0; i < 10; i++)
{
cout << "Hello World" << endl;
}
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout << endl << "Time taken : " << duration.count() << endl;
return 0;
}
