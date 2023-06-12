#include<iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar

public:
	bidangDatar() { //constructor
		x = 0;
	}

	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling

	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}

	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class lingkaran: public bidangDatar {
	void input() {
		int r;

		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}

	float luas(int a) {
		return 3.14 * a * a;
	}

	float keliling(int a) {
		return 2 * 3.14 * a;
	}
};

class Bujursangkar : public bidangDatar {
	void input() {
		int s;

		cout << "Bujursangkar dibuat" << endl;
		cout << "Masukkan sisi : ";
		cin >> s;
		setX(s);
	}

	float luas(int a) {
		return a * a;
	}

	float keliling(int a) {
		return 4 * a;
	}
};

int main() {
	bidangDatar* bD;
	lingkaran lkr;
	Bujursangkar bjs;


	bD = &lkr;
	bD->input();
	cout << "Luas Lingkaran = " << lkr.Luas(lkr.getX()) << endl;
	cout << "Keliling Lingkaran = "<< lkr.Keliling(lkr.getX()) << endl << "\n";


	bD = &bjs;
	bD->input();
	cout << "Luas BujurSangkar = " << bjs.Luas(bjs.getX())<< endl;
	cout << "Keliling BujurSangkar = " << bjs.Keliling(bjs.getX()) << endl;


	return 0;
};