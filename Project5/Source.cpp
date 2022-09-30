#include<iostream>
#include<string>
using namespace std;
class HDD {
	string model;
public:
	HDD() {
		model = "hddmodel";
	}
	HDD(const char* m) {
		model = m;
	}
	void Show()
	{
		cout << model << endl;
	}
};
class RAM {
	string model;
public:
	RAM() {
		model = "rammodel";
	}
	RAM(const char* m) {
		model = m;
	}
	void Show()
	{
		cout << model << endl;
	}
};
class Video {
	string model;
public:
	Video() {
		model = "videomodel";
	}
	Video(const char* m) {
		model = m;
	}
	void Show()
	{
		cout << model << endl;
	}
};
class CPU {
	string model;
public:
	CPU() {
		model = "cpumodel";
	}
	CPU(const char* m) {
		model = m;
	}
	void Show()
	{
		cout << model << endl;
	}
};
class Keyboard {
	string model;
public:
	Keyboard() {
		model = "keyboardmodel";
	}
	Keyboard(const char* m) {
		model = m;
	}
	void Show()
	{
		cout << model << endl;
	}
};
class Printer {
	string model;
public:
	Printer() {
		model = "printermodel";
	}
	Printer(const char* m) {
		model = m;
	}
	void Show()
	{
		cout << model << endl;
	}
};
class Laptop {
	Printer* p;
	Keyboard* k;
	CPU c;
	RAM r;
	HDD h;
	Video v;

public:
	Laptop(Printer* _p, Keyboard* _k, const char* c_model, const char* r_model, const char* h_model, const char* v_model) :p(_p),k(_k), c(c_model), r(r_model), h(h_model), v(v_model)
	{
	}
	void Show()
	{
		p->Show();
		k->Show();
		c.Show();
		r.Show();
		h.Show();
		v.Show();
	}
	~Laptop()
	{
		cout << "Destruct\n";
	}
};

int main()
{
	Keyboard obj1{"keyboardmodel"};
	Printer obj2("printermodel");

	Laptop* ptr = new Laptop(&obj2, &obj1, "cpumodel", "rammodel", "hddmodel", "videomodel");

	ptr->Show();

	delete ptr;
	//obj.Show();

	cout << "\n---- obj2 -------------------\n";
	Laptop new_obj(&obj2, &obj1, "cpumodel2", "rammodel2", "hddmodel2", "videomodel2");
	new_obj.Show();


	system("pause");
}