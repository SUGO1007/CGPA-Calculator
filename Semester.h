#ifndef SEMESTER_H
#define SEMESTER_H
#include "Course.h"
#include<vector>

using namespace std;

class Semester{
	vector<Course>courses;
	public:
		Semester(vector<vector<string>>sem){
			for(int i = 0; i<sem.size(); i++){
				courses.push_back(Course(sem[i][0],sem[i][1],stoi(sem[i][2])));
			}			
		}
				
		void display(){
			cout<<"Course_Code		Course			Credits"<<endl;
			for(Course i:courses){
				cout<<i.getcCode()<<"		"<<i.getCourse()<<"		"<<i.getCredit()<<endl;
			}
		}
		
		vector<Course>get_course(){
			return courses;
		}		
	
};
#endif
