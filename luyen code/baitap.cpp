#include<iostream>
#include<iomanip>
using namespace std;
class Employee
{
	public:
		int id;
		string name;
		float salary;
		Employee(){
			this->id = id;
			this->name = name;
			this->salary = salary;
		}
		virtual float calculateSalary() = 0;
		virtual void input()
		{
			cout<<"ID :";
			cin>>id;
			cin.ignore();
			cout<<"Name :";
			getline(cin,name);
		}
		virtual void output()
		{
			cout<<"id :"<<id<<endl;
			cout<<"name :"<<name<<endl;
			cout<<fixed;
			cout.precision(0);
			cout<<"salary :"<<salary<<endl;
		}
};
class RegularEmployee:public Employee
{
	public:
		float salaryGrading;
		RegularEmployee()
		{
			this->salaryGrading = 0;
		}
		void input()
		{
			Employee::input();
			cout<<"salary Grading :";
			cin>>salaryGrading;
		}
		float calculateSalary()
		{
			if(salaryGrading > 3)
				salary = 1500000;
			else
				salary = 0;
		}
};
class ContractStaff:public Employee
{
	public:
		float workday;
		ContractStaff()
		{
			this->workday = 0;
		}
		void input()
		{
			Employee::input();
			cout<<"workday :";
			cin>>workday;
		}
		float calculateSalary()
		{
			if(workday > 18)
				salary = 750000;
			else
				salary = 0;
		}
};

class EmployeeList
{
	public:
		Employee *e[100];
		int k;
		void input()
		{
			k = 0;
			int choose;
			while(true)
			{
				cout<<"1.RegularEmployee\n";
				cout<<"2.ContractStaff\n";
				cout<<"3.Stop\n";
				cout<<"Nhap lua chon : ";
				cin>>choose;
				if(choose == 3)
					break;
				if(choose == 1)
					e[k] = new RegularEmployee();
				if(choose == 2)
					e[k] = new ContractStaff();
				e[k]->input();
				e[k]->calculateSalary();
				k++;
			}
		}
		void output()
		{
			for(int i = 0 ; i < k ; i++)
			{
				e[i]->output();
			}
		}
		void sort()
		{
			for(int i = 0 ; i < k - 1 ; i++)
			{
				for(int j = i + 1 ; j < k ; j++)
				{
					if(e[i]->calculateSalary() > e[j]->calculateSalary())
					{
						Employee *tmp = e[i];
						e[i] = e[j];
						e[j] = tmp;
					}
				}
			}
		}
};
main()
{
	EmployeeList el;
	el.input();
	el.output();
	el.sort();
	el.output();
}
