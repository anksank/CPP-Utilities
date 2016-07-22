#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
    vector<string> L1;
    vector<string> L2;
    L1.push_back("0");
    L1.push_back("1");
    L2.push_back("1");
    L2.push_back("0");
    string zero = "0";
    string one = "1";

	for(int i = 1; i < n; i++){
        for(int j = 0; j < L1.size(); j++){
            L1[j] = zero + L1[j];
            L2[j] = one + L2[j];
        }
        L1.insert(L1.end(), L2.begin(), L2.end());
        L2 = L1;
        reverse(L2.begin(), L2.end());
	}
	for(int i = 0; i < L1.size(); i++){
        cout<<L1[i]<<" ";
	}
	return 0;
}
