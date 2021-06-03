#include<iostream>
using namespace std;
class cigar{
	int q;
	public:
		cigar(int w){
			q=w;
			cout<<"the constructor for class cigar is invoked"<<endl;
		}
		
		void display_cigar(){
			cout<<"the value of q is"<<q<<endl;
		}
};

class botany{
	int trees;
	public:
		botany(int e){
			trees=e;
			cout<<"the constructor for class botany is invoked"<<endl;	
		}
		void display_botany(){
			cout<<"the value of trees is "<<trees<<endl;
		}
		
};

class nature:public cigar,public botany{
	int semi1,semi2;
	public:
		nature(int a1,int b1,int c1,int d1):cigar(a1),botany(b1)
		{
			semi1=c1;
			semi2=d1;
			cout<<"the constructor for class nature is called"<<endl;
		}
		void display_nature(){
			cout<<"the value of semi1 is "<<semi1<<endl;
			cout<<"the value of semi2 is "<<semi2<<endl;
		}
};
int main(){
	nature earth(1,4,8,10);
	earth.display_cigar();
	earth.display_botany();
	earth.display_nature();
	return 0;
}
