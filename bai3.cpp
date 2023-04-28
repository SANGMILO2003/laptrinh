#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;

class SHAPE{
	public:
		virtual void nhap()=0;
		virtual void xuat()=0;
		friend float tongdt();
		friend float tongcv();
		virtual float chuvi()=0;
		virtual float dt()=0;
};
class ROUND:public SHAPE{
	private:
		float r;
	public:
		virtual void nhap()
		{
			cout<<"\nNhap ban kinh: ";cin>>r;
			
		}
		virtual void xuat()
		{
			cout<<"\nChu Vi: "<<r;
		}
		float dt()
		{
			return 3,14*r*r;
		}
		float chuvi()
		{
			return 2*3,14*r;
		}
		
};
class REC:public SHAPE{
	private:
		int dai,rong;
	public:
		virtual void nhap()
		{
			cout<<"\n(+)Nhap chieu dai: ";
			cin>>dai;
			cout<<"\n(+)Nhap chieu rong: ";
			cin>>rong;
		}
		virtual void xuat()
		{
			cout<<"\n+Chieu Dai: "<<dai<<endl;
			cout<<"\n+Chieu Rong: "<<rong<<endl;
		}
		float chuvi()
		{
			return (dai+rong)*2;
		}
		float dt()
		{
			return dai*rong;
		}
};
class TRI:public SHAPE{
	private:
		int a,b,c;
	public:
		 void nhap()
		{
			cout<<"\n(+)Nhap a: ";
			cin>>a;
			cout<<"\n(+)Nhap b: ";
			cin>>b;
			cout<<"\n(+)Nhap c: ";
			cin>>c;
		}
		void xuat(){
            cout<<"Ti le 3 canh lan luot la : "<<"("<<a<<","<<b<<","<<c<<")"<<endl;
            cout<<"Chu vi la : "<<chuvi()<<endl;
            cout<<"Dien tich la : "<<dt()<<endl;
        }

        float chuvi(){
            return a+b+c;
        }

        float dt(){
            float p=chuvi()/2;
            return sqrt(p*(p - a)*(p - b)*(p - c));
        }

	};
	void tongdt(SHAPE *a[],int n)
	{
		float sum = 0;
		for(int i =0 ; i < n ; i++)
		{
			sum+= a[i]->dt();
		}
		cout<<"\n----Tong dien tich la :"<<sum<<endl;
	}
	void tongchuvi(SHAPE *a[],int n)
	{
		float summ=0;
		for(int i =0 ; i < n ; i++)
		{
			summ+= a[i]->chuvi();
		}
		cout<<"\n----Tong Chu Vi La :"<<summ<<endl;
	}
int main()
{
	SHAPE *d[100];
	int n;
	cout<<"\n(*)Nhap so luong hinh :";cin>>n;
	for(int i= 0 ; i < n ; i++)
	{
		cout<<"1.Nhap hinh tron."<<endl;
		cout<<"2.Nhap hcn."<<endl;
		cout<<"3.NHap tam giac."<<endl;
		cout<<"4.Exit."<<endl;
	int c;
	cout<<"\n[+]Moi Nhap lua chon: ";cin>>c;
		if(c==1)
		{
		d[i]=new ROUND();
		}
		else if(c==2)
		{
		d[i]=new REC();
		}
		else if(c==3)
		{
		d[i]=new TRI();
		}
		d[i]->nhap();
		}
	for(int i = 0 ; i < n ; i++)
	{
		cout<<"\n\n\nThong tin hinh thu "<<i+1<<":"<<endl;
		d[i]->xuat();
	}
	tongdt(d,n);
	tongchuvi(d,n);
	
	return 0;
}