#include <cstdlib>
#include <iostream>

using namespace std;

void counter(int);
//counter -a recursive function that counts up/down
//@param int - number to increment/decrement

int factorial(int);
//factorial - a recursive function  that returns the factorial number.
//@param int - number to give  factorial.

int main(int argc, char *argv[])
{
    
    int num;
    cout  << "Type an Integer: ";
    cin >> num;
    
    counter(num);
    
    cout << "Factorial of: " << num << " = " << factorial(num) << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


void counter(int count){
     
     if (count >= 1){
                 cout << "Number: " << count << endl;
                 counter(count-1);
                 }
     
     }
     
int factorial(int num){
         if (num <= 1) {
                 return 1;
                 }
          else{
               return (num * (factorial(num-1)));
               }
          
          }