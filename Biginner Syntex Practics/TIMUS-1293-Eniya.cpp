#include <iostream>

using namespace std;

int main(){

  int n_panels, a_height, b_width, total_process;

  while(cin >> n_panels >> a_height >> b_width){

      total_process = (n_panels *2)*(a_height * b_width);

    cout << total_process << endl;
  }
  return 0;
}
