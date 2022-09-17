#include <iostream>
using namespace std;

int main(){
	
	string student_name, student_id;
	int score1, score2, score3, score4, score5;
	double average;
	
	cout << "Enter student name: ";
	cin >> student_name; 
	cout << endl;
	
	cout << "Enter student ID: ";
	cin >> student_id ;
	cout<< endl;
	
	cout << "Enter the five scores of the student" <<endl;
	cin >> score1;
	
	cin >> score2 ;
	
	cin>>score3;
	
	cin >>score4;
	
	cin >>score5;

	
	 average =double(score1 + score2 + score3 + score4 + score5) / 5;
	
	cout << "Student name: " << student_name << endl;
	cout << "Student id: " << student_id << endl;
	cout << "All the five test scores: ";cout<<endl; cout<< score1; cout<<endl; cout << score2; cout<<endl; cout<<score3; cout<<endl; cout<<score4; cout<<endl; cout<<score5; cout << endl;
	cout << "The average scores are: " << average;
	
	return 0;
}
