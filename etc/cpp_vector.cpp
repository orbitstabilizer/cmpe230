#include <vector>

using namespace std;


int main(){
  vector<int> v;
  for (int i = 0 ; i< 1000000; i++){
    v.push_back(i);
  } 

  return 0;
}

