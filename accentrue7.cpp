#include <iostream>

using namespace std;

int numberOfCarries (int num1, int num2)
{
  int temp1 = num1, temp2 = num2;
  int carry = 0;
  int count = 0;

  while(temp1 && temp2){
    int a = temp1 % 10;
    temp1 /= 10;

    int b = temp2 % 10;
    temp2 /= 10;

    if(a + b + carry > 9){
        carry = (a+b+carry) - 9;
    }
    else{
        carry = 0;
    }
    if(carry > 0)count++;
  }
  while(temp1){
    int a = temp1%10;
    temp1 /= 10;
    if(a + carry > 9){
        carry = (a+carry) - 9;
    }else{
        carry = 0;
    }
    if(carry > 0)count++;

  }

  while(temp2){
    int a = temp2%10;
    temp2 /= 10;
    if(a + carry > 9){
        carry = (a+carry) - 9;
    }else{
        carry = 0;
    }
    if(carry > 0)count++;

  }
  return count;
}

int main ()
{
  int x, y, a;
  cin >> x >> y;
  a = numberOfCarries (x, y);
  cout << a;
  return 0;
}

/*
Problem Statement

A carry is a digit that is transferred to left if sum of digits exceeds 9 while adding two numbers from right-to-left one digit at a time

You are required to implement the following function.

Int NumberOfCarries(int num1 , int num2);

The functions accepts two numbers ‘num1’ and ‘num2’ as its arguments. You are required to calculate and return  the total number of carries generated while adding digits of two numbers ‘num1’ and ‘ num2’.

Assumption: num1, num2>=0

Example:

Input
Num 1: 451
Num 2: 349
Output
2
Explanation:

Adding ‘num 1’ and ‘num 2’ right-to-left results in 2 carries since ( 1+9) is 10. 1 is carried and (5+4=1) is 10, again 1 is carried. Hence 2 is returned.

Sample Input

Num 1: 23

Num 2: 563

Sample Output

0
*/