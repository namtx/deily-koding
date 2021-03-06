#include <iostream>
#include <sys/types.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
  public:
    int distributeCandies(vector<int>& candyType) {
      int selectedTypes = 0;
      int n = candyType.size();
      int i = 0;
      unordered_map<int, bool> marked(false);

      while (selectedTypes < (n / 2) && i < n) {
        if (marked[candyType[i]] == false) {
          selectedTypes++;
          marked[candyType[i]] = true;
        }
        i++;
      }

      return selectedTypes;
    }
};

int main() {
  Solution s;
  static const int arr[] = {-1000, 1, 1, 1};
  vector<int> candyType (arr, arr + sizeof(arr) / sizeof(arr[0]));
  cout << s.distributeCandies(candyType) << endl;

  return 0;
}
