#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v(5);

	for(size_t i = 0; i < v.size(); ++i) {
		cout << "Elemento: " << i << ": ";
		cin >> v[i];
	}

	cout << "Contenido original del vector:\n";
	for(size_t i = 0; i < v.size(); ++i) {
		cout << v[i] << " - ";
	}
	cout << endl;

	int aux = v[v.size()-1];
	for(size_t i = v.size()-1; i > 0; --i) {
		v[i] = v[i-1];
	}
	v[0] = aux;
	cout << "Contenido del vector desplazado un lugar a la derecha:" << endl;
	for(size_t i = 0; i < v.size(); ++i) {
		cout << v[i] << " - ";
	}
	cout << endl;
	return 0;
}
