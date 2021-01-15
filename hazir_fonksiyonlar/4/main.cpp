#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {
	time_t x;
	struct tm *zaman;
	time (&x);
	zaman =localtime (&x);
	cout << "su aanki tarih ve saat: " << asctime(zaman) << endl;
	cout << "00:00:00 GMT, Jan 1, 1970'den beri \" " << time_t(x) << "\" saniye geçti"<< endl;
	system("PAUSE");
	return 0;
}
