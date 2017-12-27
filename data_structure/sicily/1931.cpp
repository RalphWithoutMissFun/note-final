#include <queue>
#include <iostream>
#include <cstdio>
using namespace std;

void process(int n)
{
  queue<int> q;
  for (int index = 1 ; index <= n ; index++)
    q.push(index);
  int count = n - 1 , data;
  while (count--)
  {
    data = q.front();
    printf("%d " , data);
    q.pop();
    data = q.front();
    q.pop();
    q.push(data);
  }

  data = q.front();
  printf("%d\n" , data);
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
