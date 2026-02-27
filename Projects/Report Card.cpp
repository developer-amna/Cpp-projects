#include<iostream>
#include<string>
using namespace std;
int main() {
	string name;
	int RollNumber;
	double percentage;
	char grade;
	bool status;
	cout<<"=== Student Data Entry ==="<<endl;
	cout<<"Enter your name : ";
	cin>>name;
	
	cout<<"Enter your rollnumber : ";
	cin>>RollNumber;
	
	cout<<"Enter your percentage : ";
	cin>>percentage;
	
	cout<<"Enter your grade : ";
	cin>>grade;
	
	status = (percentage >= 50.0);
	
	cout<<"=== Student Report Card ==="<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Roll Number: "<<RollNumber<<endl;
	cout<<"Percentage: "<<percentage<<endl;
	cout<<"Grade: "<<grade<<endl;
	cout<<"Status: "<<(status?"Passed":"Failed")<<endl;
	return 0;
}

/* 
OUTPUT

=== Student Data Entry ===
Enter your name : Amna
Enter your rollnumber : 02
Enter your percentage : 95
Enter your grade : A
=== Student Report Card ===
Name: Amna
Roll Number: 2
Percentage: 95
Grade: A
Status: Passed

--------------------------------
Process exited with return value 0

*/