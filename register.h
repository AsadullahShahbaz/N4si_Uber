#include <iostream>
using namespace std;
class Register{
		string name,email,password;
		long long contact;
		int age;
		public:
			void set_name(string name){
				this->name=name;
			}
			void set_name(){
				cout<<"\t\t\t\t\t|Enter full name : ";
				cin>>name;
			}
			string get_name(){
				return name;
			}
			void set_age(int age){
				this->age=age;
			}
			void set_age(){
				cout<<"\t\t\t\t\t|Enter your age: ";
				cin>>age;
			}
			void set_email(string email){
				this->email=email;
			}
			void set_email(){
				cout<<"\t\t\t\t\t|Enter you E-mail address: ";
				cin>>email;
			}
			string get_email(){
				return email;
			}
			void set_password(string password){
				this->password=password;
			}
			void set_password(){
				cout<<"\t\t\t\t\t|Enter you password: ";
				cin>>password;
			}			
			string get_password(){
			return password;
		}
};
