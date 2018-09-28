/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
 int n; // user input

 while(cin >> n){
  if(n == 2){
   cout << 1 << '\n';  //Specific case for returning 1 if n=2.
  }
  else if(n%2 == 0){  //n is an even number hence it cant be prime.
   cout << 0 << '\n';
  }
  else if(n%2 != 0){  //n is an odd number and is potentially a prime number.
    for(int i = 2; i <= n-1; i++){
     if(n%i == 0){
      cout << 0 << '\n';
      break;
     }
     if(i == n-1){
      cout << 1 << '\n';
      break;
     }
    }
    }
   }
  }
 }
