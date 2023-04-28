#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;

class Docgia{
	protected:
		char ma[15];
		char ho[22];
		char ten[20];
		int sothang;
	public:
		virtual void nhap()
		{
			fflush(stdin);
			cout<<"\n(+)Nhap ma :";cin.getline(ma,15);
			cout<<"\n(+)Nhap ho :";cin.getline(ho,22);
			cout<<"\n(+)Nhap ten :";cin.getline(ten,20);
			cout<<"\n(+)Nhap so thang hieu luc :";cin>>sothang;
		}
		virtual void xuat()
		{
			cout<<"\nMA :"<<ma<<endl;
			cout<<"\nHO :"<<ho<<endl;
			cout<<"\nTEN :"<<ten<<endl;
			cout<<"\nSO THANG :"<<sothang<<endl;
			
		}
};
class DGTRE:public Docgia{
	protected:
		int namsinh;
	public:
		virtual void nhap()
		{
			fflush(stdin);
			Docgia::nhap();
			fflush(stdin);
			cout<<"\n(+)Nhap nam sinh :";cin>>namsinh;
		}
		virtual void xuat()
		{
			Docgia::xuat();
			cout<<"\nNam Sinh :"<<namsinh<<endl;
		}
		float thue()
		{
			return sothang*200000;
		}
		int Tim()
		{
			if(sothang < 10)
			return true;
			else
			return false;
		}
};
class DGLON:public Docgia{
	protected:
		char nn[18];
	public:
		virtual void nhap()
		{
			fflush(stdin);
			Docgia::nhap();
			cout<<"\n(+)Nhap nghe nghiep :";cin.getline(nn,18);
		}
		virtual void xuat()
		{
			Docgia::xuat();
			cout<<"\nNGHE NGHIEP :"<<nn<<endl;
		}
		float thue()
		{
			return sothang*3000000;
		}
		int Tim()
		{
			if(strcmp(nn,"Giang Vien")==0&&sothang>20)
			return true;
			else
			return false;
		}
};
class QuanLyDG{
	public:
		Docgia *a[22];
		int n,i,choose;
		void nhap()
		{
			int choose;
			cout<<"\nMoi ban nhap lua chon cua minh : ";cin>>choose;
			laplai:
			switch(choose){
				case 1 : 
				a[i]->nhap();
				goto laplai;
				case 2:
				a[i]->nhap();
				goto laplai;
			}
	}
		
};
//		void search()
//		{
//			for(int i = 0 ; i < n ; i++)
//			{
//				}
//			}
//		}
int main()
{
	QuanLyDG m;
	m.nhap();

	return 0;
	
}