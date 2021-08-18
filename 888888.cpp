#include<iostream>
using namespace std;
class hanghoa{
	public:
	string th;
	long int mh;
	float dg;
	int sl;
	int s=0;
	hanghoa(){
		}
		hanghoa(string th,long int m,float a,int l){
			this->th=th;
			this->mh=m;
			this->dg=a;
			this->sl=l;
			}
			void nhaphh(){
				cout<<"nhap ten mat hang:";
				fflush(stdin);
				getline(cin,this->th);
				cout<<"nhap ma hang hoa:";
				cin>>this->mh;
				cout<<"nhap don gia:";
				cin>>this->dg;
				cout<<"nhap so luong:";
				cin>>this->sl;
				}
		   void tonggiatrihanghoa(){
		   		this->s=this->s+this->sl*this->dg;
		   		cout<<this->s<<endl;
		   		}
		   	
		   	void xuathh(){
		   		cout<<<<this->th<<"\t"<<this->mh<<"\t"<<this->dg<<"\t"<<this->sl<<"\t"<<this->s<<"\t";
		   		}
};
class hg{
	int sldh;
	int nlhd;
	string nguoilhd;
	hanghoa hh[100];
    long int slmh;
    float s;
    public:
    	hg(){
    		}
    		hg(int sldh,int nlhd,string nguoildh,hanghoa hh[],long int slmh){
    			this->sldh=sldh;
    			this->nlhd=nlhd;
    			this->nguoilhd=nguoilhd;
    			this->hh[100]=hh[100];
    			this->slmh=slmh;
    			}
    			
    			 void nhaphg(){
    			 	int i;
    			 	cout<<"nhap so don hang:";
    			 	cin>>this->sldh;
    			 	cout<<"nhap ngay lap hoa don:";
    			 	cin>>this->nlhd;
    			 	cout<<"nhap nguoi lap hoa don:";
    			 	fflush(stdin);
					getline(cin,this->nguoilhd);
    			 	cout<<"so luong mat hang:";
    			 	cin>>this->slmh;
    			 	cout<<"nhap danh sach hang hoa:"<<endl;
    			 	for(i=1;i<=this->slmh;i++){
    			 		this->hh[i].nhaphh();
    			 	}
    			 	}
    			
    			void xuat(){
    				int i;
    				cout<<"danh sach mat hang:"<<endl;
					cout<<this->sldh<<"  "<<this->nlhd<<" "<<this->nguoilhd<<" "<<this->slmh<<"\t";
    				for(i=0;this->slmh;i++){
    					this->hh[i].xuathh();
    					}
    					cout<<this->s<<endl;
    					}
    			  void add(hanghoa a){
    			  	int i;
    			  	this->hh[this->slmh]=a;
    			  	this->slmh++;
    			  	}
    			  	void tonggiatridonhang(){
    			  		int i;
    			  		for(i=1;i<=this->slmh;i++){
    			  			this->s=this->s+this->slmh*hh[i].dg*hh[i].sl;
    			  			}
    			  			cout<<s<<endl;
    			  		}
    			  		
    			  			
    			  		 
    			  		 
};
int main(){
hanghoa a;
a.nhaphh();
hg h;
h.nhaphg();
h.tonggiatridonhang();
h.add(a);
h.xuat();
}



