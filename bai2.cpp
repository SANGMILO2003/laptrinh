#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
using namespace std;

class Person{
	protected:
		char hoten[20];
	public:
		virtual bool thuong()=0;
		
		virtual void nhap()
		{
			fflush(stdin);
			cout<<"\n(+)Nhap ho va ten: ";cin.getline(hoten,20);
			
		}
		virtual void xuat()
		{
			cout<<setw(18)<<hoten;
		}
};
class Sinhvien:public Person{
	private:
		float diem;
	public:
		virtual void nhap()
		{
			Person::nhap();
			cout<<"\nNhap diem thi: ";cin>>diem;
			
		}
		virtual void xuat()
		{
			Person::xuat();
			cout<<setw(18)<<diem;
		}
		bool thuong()
		{
			if(diem>8)
			{
				return true;
			}
			else 
			return false;
		}
};
class Giangvien:public Person{
	private:
		int sobaibao;
	public:
		virtual void nhap()
		{
			Person::nhap();
			cout<<"\n(+)Nhap so luong bai bao: ";
			cin>>sobaibao;
		}
		virtual void xuat()
		{
			Person::xuat();
			cout<<setw(18)<<sobaibao<<endl;
		}
		bool thuong()
		{
			if(sobaibao>5)
			{
				return true;
			}
			else 
			return false;
		}
		
};
void Title(){
	cout<<setw(18)<<"HOTEN";
	cout<<setw(18)<<"DIEM";
	cout<<setw(18)<<"SO_BAI_BAO";
	cout<<endl;
}
int main()
{
	Person *d[100];
	int k=0,choose,i;
	while(1)
	{
		cout<<"\n*GV/SV/EXIT(1,2,3):";cin>>choose;fflush(stdin);
		if(choose==1) d[k]=new Giangvien();
		if(choose==2) d[k]=new Sinhvien();
		if(choose==3)break;
		d[k]->nhap();k++;
	}
	Title();
	cout<<"\n\t\t---DANH SACH TOP THUONG : \n";
		for(int i = 0 ; i < k ; i++)
		{
			if(d[i]->thuong()==true)
			{
				d[i]->xuat();
			}
		}
}