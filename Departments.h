#ifndef DEPARTMENTS
#define DEPARTMENTS

using namespace std;

class Departments{
	private:
	vector<Semester>semesters;
	
	public:
    Departments(vector<vector<vector<string>>>departments){
    	for(int i=0; i<departments.size(); i++){
    		semesters.push_back(Semester(departments[i]));
		}    	
	}
	void display(){
		int v = 0;
		for(Semester i:semesters){
			cout<<"Semester - "<<v++<<endl;
			i.display();
			cout<<endl;
		}
	}
	
	vector<Semester>get_sem(){
		return semesters;
	} 
    
};
#endif
