#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void process(int n)
{
  map<int , int> data;
  vector<int> signal;
  int temp;
  for (int index = 0 ; index < n ; index++)
  {
     cin >> temp;
     data[temp] += 1;
  }
  map<int , int>::iterator it;
  for (it = data.begin() ; it != data.end() ; it++)
      signal.push_back(it->first);
  sort(signal.begin() , signal.end());
  int len = signal.size();
  for (int index = 0 ; index < len ; index++)
    cout << signal[index] << " " << data[signal[index]] << endl;
}

int main()
{
   int n;
   while (cin >> n)
     process(n);
}


