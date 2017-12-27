#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int count(int a)
{
  int index = 1;
  int count = 0;
  if (a >= index)
  {
    count++;
    index *= 10;
  }
  return count;
}
void process(string str)
{
  int pos = 0;
  int len = str.size();
  char signal;
  vector<char> v;
  int n;
  stringstream stream_process(str);
  while (pos < len)
  {
     stream_process >> signal;
     v.push_back(signal);
     //cout << "character: " << signal << endl;
     pos++;
     if (pos >= len) break;
     if (str[pos] >= 'a' && str[pos] <= 'z')
       continue;
     else
     {
       stream_process >> n;
       //cout << "frequency: " << n << endl;
       pos += (count(n) + 1);
       for (int index = 1 ; index < n ; index++)
         v.push_back(signal);
     }
     //cout << "position: " << pos << endl;

  }
  len = v.size();
  string answer(v.begin() , v.end());
  cout << answer << endl;
//  for (int index = 0 ; index < len ; index++)
  //  printf("%c", v[index]);
  //printf("\n");  
}

int main()
{
   string str;
   cin >> str;
   string signal = "XXX";
   while (str != signal)
   {
     process(str);
     cin >> str;
   }
}
