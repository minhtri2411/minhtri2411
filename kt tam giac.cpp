#include<iostream>
using namespace std;
class triangle
{
	private:
		float a,b,c;
	public:
		void nhap();
		void kiemtra();
};
void triangle::nhap()
{
	cout<<"Nhap canh a: ";
	cin>>a;
	cout<<"\nNhap canh b: ";
	cin>>b;
	cout<<"\nNhap canh c: ";
	cin>>c;
}
void triangle::kiemtra()
{
	if(a+b>c && a+c>b && b+c>a)
	cout<<"Day la tam giac hop le.";
	else
	cout<<"Day la tam giac khong hop le.";
}
main()
{
	triangle tg;
	cout<<"~~~Chuong trinh kiem tra tam giac~~~";
	cout<<"\nNhap 3 canh cua tam giac: "<<endl;
	tg.nhap();
	tg.kiemtra();
}