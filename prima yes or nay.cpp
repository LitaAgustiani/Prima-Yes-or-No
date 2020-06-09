#include <ios tream>
using namespace std;

int main ()
{
	int n, cek = 0;
	cout << "Memastikan angka yang Anda masukkan bilangan PRIMA atau BUKAN" << endl;
	cout << "Masukkan angka : ";
	cin >> n;
	
	for (int i = 2; i <= n; i++)
	// bilangan prima dimulai dari angka 2
	
	{
		if (n % i == 0)
		{
			cek ++;
		}
	}
	if (cek == 1)
	{
		cout << n << " merupakan Bilangan PRIMA" << endl;
	} else {
		cout << n << " BUKAN Bilangan Prima" << endl;
	}
	return 0;
}

