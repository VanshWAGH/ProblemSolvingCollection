#include<bits/stdc++.h>
using namespace std;
string MoveHyphen (string s, int n)
{
  int count = 0;
  for (int i = 0; i < n;)
    {
      if (s[i] == '-')
	{
	  count++;
	  s.erase (i, 1);//erase one character form here on
	}
      else
	i++;
    }
  while (count--)
    {
      s = '-' + s;
    }
  return s;
}
int main ()
{
  string s;
  cin >> s;
  int n = s.size ();
  cout << MoveHyphen (s, n);
  return 0;
}

/*
Implement the following functions.a

char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(-) in the string to the front of the given string.

NOTE:- Return null if str is null.

Example :-

Input:
str.Move-Hyphens-to-Front
Output:
—MoveHyphenstoFront
Explanation:-

The string “Move-Hyphens -to-front” has 3 hyphens (-), which are moved to the front of the string, this output is “— MoveHyphen”

Sample Input

Str: String-Compare
Sample Output-

-StringCompare
*/