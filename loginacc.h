#include <iostream>
using namespace std;
class login{
	string    email,pass ;
	public:
		void setlogin_email(){
			cout<<"\t\t\t\t\t|Enter email : ";
			cin>>email;
		}
		string getlogin_email(){
			return email;
		}
		void setlogin_password(){
			cout<<"\t\t\t\t\t|Enter your password: ";
		    cin>>pass;
		}
		string getlogin_password(){
			return pass;
		}
	
};
