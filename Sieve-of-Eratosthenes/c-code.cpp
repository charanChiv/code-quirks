#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

vector<int> SOE(int n){

  vector<uint8_t> prime(n + 1, true) ;
    for (int p = 2; p * p <=n; p++) {
      if (prime[p] == true) {
	for (int i = p * p; i <= n; i +=p)
	  prime[i] = false;
      }
    }

    vector<int> res;
    for (int p = 2; p <= n; p++){
      if (prime[p]){
	res.push_back(p);
      }
    }
    return res;
}


int main(){
  int n;
  cout << "Enter a Natural Number:" << endl;
  cin >> n;
  vector<int> res = SOE(n);
  for ( auto ele: res){
    cout << ele << ' ';
  }
  cout << endl;
  return 0;
}
   
