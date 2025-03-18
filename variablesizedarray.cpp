#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q; // Read N (arrays) and Q (queries)

    vector<vector<int>> arr(n); 
   
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k; // Read size of the i-th array
        arr[i].resize(k); // Resize the vector to 'k' elements

        for (int j = 0; j < k; j++) {
            cin >> arr[i][j]; 
        }
    }

    // Answer queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y; 
        cout << arr[x][y] << endl; 
    }

    return 0;
}
