#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

void process(int n)
{
  vector<int> data;
  int temp;
  for (int index = 0 ; index < n ; index++)
  {
     cin >> temp;
     data.push_back(temp);
  }
  sort(data.begin() , data.end());
  int pos = 0;
  while (1)
  {
    if (pos != n - 1 && data[pos] == data[pos+1] ) pos += 2;
    else  break;
  }
  cout << data[pos] << endl;
}

int main()
{
  int n;
  while (cin >> n)
  {
     if (n == 0) return 0;
     process(n);
  }
}
