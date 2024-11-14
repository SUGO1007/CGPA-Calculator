#ifndef CGPA
#define CGPA
#include<iomanip>
#include<unordered_map>
#include<utility>
using namespace std;

class Sgpa{
	int tot_credit = 0;
	double credit_mark = 0;
	static unordered_map<string,int>grade_mp;
	public:
		int grademark(string grade){
			return grade_mp[grade];				
		}
		
		Sgpa(Semester sem){
			string grade;
			for(Course c : sem.get_course()){
				cout<<c.getcCode()<<" "<<c.getCourse()<<" : ";
				cin>>grade;
				int credit = c.getCredit();
				credit_mark += credit * grademark(grade);
				tot_credit+=credit;				
			}
		}
		pair<int,int> get_sgpa(){			
			return make_pair(tot_credit,credit_mark);
		}
};

unordered_map<string,int>Sgpa::grade_mp = {{"O",10},{"A+",9},{"A",8},{"B+",7},{"B",6},
										{"C",5},{"RA",0},{"AB",0}};

class Cgpa{
	double cgpa ;
	double credits =0 ;
	int creditmarks =0;
	
	public:
	void calculate(Departments dep){
		for(Semester i:dep.get_sem()){
			Sgpa sgpa(i);
			pair<int,int> p = sgpa.get_sgpa();
			credits += p.first;
			creditmarks +=p.second;
			int choice;
			cout<<"Enter 1 If You want to continue Next Semester .."<<endl;
			cin>>choice;
			if(choice!=1){
				break;
			}
		}
		cgpa = creditmarks / credits;
		cout<<"Your CGPA : "<<fixed<<setprecision(2)<<cgpa<<endl;
	}
};
#endif
