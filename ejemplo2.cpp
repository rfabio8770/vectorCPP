#include <iostream>
#include <vector>

using namespace std;


int main() {
	vector<int> v;
	int x;
	// pedir 5 elementos
	for(size_t i = 0; i < 5; ++i) {
		cout << "Elemento: " << i << endl;
		cin >> x;
	        v.push_back(x);	
	}
	cout << "Contenido del vector:\n";
	for(size_t i = 0; i < v.size(); ++i) {
		cout << v[i] <<  "  ";
	}
	cout << endl;

	return 0;
}
