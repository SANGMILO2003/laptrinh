#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;

class HinhVe{
	public:
		virtual void nhap()=0;
		virtual void xuat()=0;
		friend float tongdt();
		friend float tongcv();
		virtual float chuvi()=0;
		virtual float dt()=0;
};
class Haichieu:public HinhVe{
	public:
		virtual void nhap()
		{
			cout<<"\nNhap ban kinh: ";cin>>r;
			
		}
		virtual void xuat()
		{
			cout<<"\nChu Vi: "<<r;
		}
};
class bachieu:public HinhVe{
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
};
class Tron:public Haichieu{
	private:
		float r;
	public:
		 void nhap()
		{
			cout<<"\n(+)Nhap ban kinh: ";
			cin>>r;
		}
		void xuat(){
            cout<<"\nBan Kinh :"<<r<<endl;
        }
	};
class ChuNhat:public Haichieu{
	
};
class Vuong:public HaiChieu{
	
};
class Cau:public bachieu{
	
}
class LapPhuong:public bachieu{
	
}
