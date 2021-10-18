#include<iostream>
using namespace std;

class book
{
	public:
		int id;
		string name;
		void input()
		{
			cout<<"enter id:";
			cin>>id;
			cin.ignore();
			cout<<"enter name :";
			getline(cin,name);
		}
		void output()
		{
			cout<<id<<endl;
			cout<<name<<endl;
		}
};
void menu(){
	book b[100];
	int k = 0;
	int luachon;
	do
	{
		cout<<" Menu \n 0 thoat. \n 1 Them sach .\n 2 them doc gia. \n 3. danh sach SACH. \n 4. Danh sach DOCGIA. 	";
		cout<<"\n Ban chon : ";
		cin>>luachon;
		switch(luachon){
			case 0 : break;
			case 1 : b[k].input();break;
			case 2 : b[k].output();break;
		}
		k++;
	}while(luachon);
	
}
main(){
	menu();
}
