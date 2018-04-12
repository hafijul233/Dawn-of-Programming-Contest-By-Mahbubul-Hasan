#include <iostream>

using namespace std;

int main(){

  long long n_numbers, m_times, total_appearance;
  while(cin >> n_numbers >> m_times){
    total_appearance = n_numbers * (m_times+1);
    cout << total_appearance << endl;
  }
  return 0;
}
