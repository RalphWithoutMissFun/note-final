#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void process(int n , int m)
{
   set<string> user;
   set<string> sender;
   string str1 ;
   vector<string> v(n);
   for (int index = 0 ; index < n ; index++)
   {
     cin >> str1;
     transform(str1.begin() , str1.end() , str1.begin() , ::tolower);
     user.insert(str1);
   }

   for (int index = 0 ; index < m ; index++)
   {
     cin >> str1;
     transform(str1.begin() , str1.end() , str1.begin() , ::tolower);
     sender.insert(str1);
   }
   vector<string>::iterator it ;
   it = set_difference(user.begin() , user.end() , sender.begin() , sender.end() ,v.begin());
   cout << it - v.begin() << endl;
}

int main()
{
   int n , m;
   while (1)
   {
     cin >> n;
     if (n == 0) return 0;
     cin >> m;
     process(n , m);
   }
   return 0;
}
