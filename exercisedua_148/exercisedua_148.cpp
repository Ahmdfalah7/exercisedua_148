
#include <iostream>
#include <string>
using namespace std;

class penerbit {
public:
	static int buku;
	int id;
	string nama;

	void setID();
	void printAll();
	penerbit(string pnama) :nama(pnama) { setID(); }
};

void penerbit::setID() {
	id = ++buku;
}

void penerbit::printAll() {
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	penerbit daftarpengarangpadapenerbit_Gamapress("joko,lia,giga");
	penerbit daftarpengarangpadapenerbit_Intanpariwara("asroni,giga");
	penerbit daftarpenerbityangdiikuti_Giga("gamapress,intanpariwara");
	penerbit daftarbukuyangdikarangg_Joko("fisika,algoritma");

	daftarpengarangpadapenerbit_Gamapress.printAll();
	daftarpengarangpadapenerbit_Intanpariwara.printAll();
	daftarpenerbityangdiikuti_Giga.printAll();
	daftarbukuyangdikarangg_Joko.printAll();
	return 0;
};