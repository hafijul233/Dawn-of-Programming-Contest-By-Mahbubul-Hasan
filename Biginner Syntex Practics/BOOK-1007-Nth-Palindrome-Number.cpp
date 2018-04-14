#include <iostream>
#include <string>

using namespace std;

long long palindrometest(long long number){

  long long reverse_number=0, proof = number;

    while(number!=0){
      reverse_number = reverse_number*10 + (number%10);
      number /= 10;
    }

    if(proof == reverse_number){

      return reverse_number;

    }
    else{
      return 0;
    }
}

int main(){

  int nth_palindrome, range;
  long long number=1, result;

    cin >> nth_palindrome;

      range = nth_palindrome;

        while(nth_palindrome != 0){
          result = palindrometest(number);

          number++;
          if(result != 0) {
            //cout << result << endl;
              nth_palindrome--;
          }
        }
      cout << range << "th Palindrome Number is " << result << endl;

    return 0;
}
