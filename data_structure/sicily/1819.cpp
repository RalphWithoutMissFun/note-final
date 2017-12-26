#include <bitset>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void process(int n)
{
  vector<bitset<n> > orig1 , orig2 , answer , correct;
  string str;
  for (int index = 0 ; index < n ; index++)
  {
    cin >> str;
    bitset<n> temp(str);
    orig1.push_back(temp);
  }
  for (int index = 0 ; index < n ; index++)
  {
    cin >> str;
    bitset<n> temp(str);
    orig1.push_back(temp);
  }
  for (int index = 0 ; index < n ; index++)
  {
    cin >> str;
    bitset<n> temp(str);
    orig1.push_back(temp);
    bitset<n> tem;
    correct.push_back(tem);
  }
  for (int index = 0 ; index < n ; index++)
  {
    for (int i = 0 ; i < n ; i++)
    {
      int temp = 0;
      for (int j = 0 ; j < n ; j++)
        temp += orig1[index][n-1-j] * orig2[j][n - 1- i];
      correct[i][n - 1 - j] = temp;	
    }

  }
  if (correct == answer) cout << "NO" << endl;
  else cout << "YES" << endl;

}
int main()
{
  int test_case;
  cin >> test_case;
  while (test_case--)
  {
    int n;
    cin >> n;
    process(n);
  }
}
