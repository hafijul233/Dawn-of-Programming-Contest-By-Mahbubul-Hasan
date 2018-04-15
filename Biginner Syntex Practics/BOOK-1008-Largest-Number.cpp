#include <iostream>

using namespace std;

int main()
{
	int first, second, third;

	while(cin >> first >> second >> third){
    cout << "The Largest Number: ";

    if(first > second){
      if(first > third)
        cout << first << endl;
      else
          cout << third << endl;
    }
    else{
      if(second > third)
        cout << second << endl;
      else
        cout << third << endl;
    }
	}
  return 0;
}
