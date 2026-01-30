#include<iostream>
using namespace std;
int main() {
	int choice;
	do {
		cout<<"------Welcome------"<<endl;
		cout<<"1. Coffee"<<endl;
		cout<<"2. Chicken"<<endl;
		cout<<"3. Simple Rice"<<endl;
		cout<<"4. Biryani"<<endl;
		cout<<"5. Sushi"<<endl;
		cout<<"6. Tea"<<endl;
		cout<<"7. Exit"<<endl;
		cout<<"--------------"<<endl;
		cout<<"Choose an option: ";
		cin>>choice;
		switch(choice) {
			case 1:
				cout<<"You ordered coffee!"<<endl;
				break;
			case 2:
				cout<<"You ordered Chicken!!"<<endl;
				break;
			case 3:
				cout<<"You ordered Simple Rice"<<endl;
				break;
			case 4:
			    cout<<"You ordered Biryani!!"<<endl;
				break;
			case 5:
			    cout<<"You ordered Sushi"<<endl;
				break;
			case 6:
			    cout<<"You ordered Tea!!"<<endl;
				break;
			case 7:
				cout<<"Exiting...."<<endl;
				break;
			default:
				cout<<"Invalid choice."<<endl;
				cout<<"Enter again: ";
		} 
	} while(choice!=7);
}