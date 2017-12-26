#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

bool check(vector<int>& data)
{
  int len = data.size();
  for (int index = 0 ; index < len ; index++)
     if (data[index] != data[0])
        return false;
  
  return true;
}

void soften(vector<int>& data)
{
  int len = data.size();
  for (int index = 0 ; index < len ; index++)
     if (data[index] % 2 != 0)
        data[index] += 1;
}
int main()
{
   int n;
   while (cin >> n)
   {
     if ( n == 0 ) break;
     vector<int> original;
     vector<int> remain;
     // part one : get the orginal amount;
     int temp;
     for (int index = 0 ; index < n ; index++)
     {
        cin >> temp;
	original.push_back(temp);
	remain.push_back(0);
     }
     bool flag = check(original);
     int count = 0;
     while (!flag)
     {
        //get the half;
	for (int index = 0 ; index < n ; index++)
	  remain[index] = (int)(0.5 * original[index]);
   
	for (int index = 1 ; index < n ; index++)
	  original[index] = remain[index] + remain[index-1];
	original[0] = remain[0] + remain[n-1];
	soften(original);
	flag = check(original);
	count++;
     }
     printf("%d %d\n", count , original[0]);
   }
}
