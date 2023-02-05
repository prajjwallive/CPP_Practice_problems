#include<iostream>
using namespace std;

class teacher{
	string name;
	string field;
	int salary;
	
	public:
		teacher(string a,string b,int c){
			name=a;
			field=b;
			salary=c;
		}
		
		void display(){
			cout<<name<<endl;
			cout<<field<<endl;
			cout<<salary<<endl;
			
		}	
};

class student{
	
	int number;
	string name;
	string faculty;
	public:
		student(){

        }
		student(int d,string e,string f){
			number=d;
			name=e;
			faculty=f;	
		}
		
		void display(){
			cout<<number<<endl;
			cout<<name<<endl;
			cout<<faculty<<endl;
			
		}
	
};


class TeachingAssistant:public teacher,public student{
	int working_years;
	public:
		TeachingAssistant(string a,string b, int c,int d,string e,string f,int g):teacher(a,b,c),student(d,e,f){
			working_years=g;
			
		}
	
	void display(){
		cout<<working_years<<endl;
	}
	
};

int main(){
	TeachingAssistant t1("Dip","Physics",2132,22,"Charlie","Science",2);
	t1.display();
	
	return 0;
}