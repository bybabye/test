#include<iostream>
#include<iomanip>
using namespace std;

template <class T> void inputArray(T *a[], int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
}
template <class T> void outputArray(T a[], int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout<<a[i];
	}
}
class Shape
{
	public:
		string color;
		float area;
		virtual float displayArea() = 0;
		Shape()
		{
			color = "";
			area = 0;
		}
		virtual void input()
		{
			cout<<"color :";
			getline(cin,color);
		}
		void output()
		{
			cout<<"color :"<<color<<endl;
			cout<<"area :"<<fixed<<setprecision(3)<<area<<endl;
		}
};
class Circle:public Shape
{
	public:
		float radius;
		Circle()
		{
			radius = 0;
		}
		float displayArea()
		{
			return area = radius * 3.14;
		}
		void input()
		{
			Shape::input();
			cout<<"Radius :";
			cin>>radius;
		}
//		void output()
//		{
//			Shape::output();
//			cout<<"Radius :";
//		}
		
		
};
class Rectangle:public Shape
{
	public:
		float width;
		float height;
		Rectangle()
		{
			width = 0;
			height = 0;
		}
		float displayArea()
		{
			return area = width * height;
		}
		void input()
		{
			Shape::input();
			cout<<"width :";
			cin>>this->width;
			cout<<"height :";
			cin>>this->height;
		}
//		void output()
//		{
//			Shape::output();
//			cout<<"width :"<<width<<endl;
//			cout<<"height :"<<height<<endl;
//		}
		
};
class ArrShape
{
	public:
		Shape *shape[100];
		int k;
		void inputArr()
		{
			int k = 0,luachon;
			while(true)
			{
				cout<<"1.Rectangle\n2.Circle\n3.Exit"<<endl;
				cin>>luachon;
				cin.get();
				if(luachon == 3)
					break;
				if(luachon == 1)
					shape[k] = new Rectangle();
				if(luachon == 2)
					shape[k] = new Circle();
				shape[k]->input();
//				shape[k]->displayArea();
				k++;
			}
		}
		void outputArr()
		{
			for(int i = 0 ; i < k ; i++)
			{
				shape[i]->output();
//				cout<<fixed<<setprecision(3)<<shape[i]->displayArea();
			}
		}
		void change()
		{
			for(int i = 0 ;i < k ;i++)
			{
				if(shape[i]->color == "black" || shape[i]->color == "BLACK")
				{
					shape[i]->color = "blue";
				}
			}
		}
};
main()
{
	ArrShape a;
	a.inputArr();
	a.outputArr();
	a.change();
}
