#include <iostream>
#include<stdlib.h>
#include<ctime>
#include <windows.h> 
#include "loginacc.h"
#include "register.h"
using namespace std;
class Account:public Register,public login{
	char x;
	float wallet;
	public:
		int setLogInSignUp(){
			system("COLOR d0");
			input:
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|                      UBER                            | "<<endl;
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|       Press L for Login or S for Sign up             |"<<endl;
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|";
	        cin>>x;
			if(x == 115 || x== 83 ){
			Register::set_name();
			Register::set_age();
		    Register::set_email();
			Register::set_password();
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|                   WELCOME TO UBER                    |"<<endl;
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			}
            else if(x== 76|| x== 108){
            	int chk=0;
            	if (chk==1){
            		check:
            		system("CLS");
            		cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
		        	cout<<"\t\t\t\t\t|                      UBER                            | "<<endl;
		        	cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
				}
				login::setlogin_email();
				login::setlogin_password();
		        	if(login::getlogin_email()== Register::get_email() && login::getlogin_password() == Register::get_password()){
		               	cout<<"\t\t\t\t\t|-------------------Login successfuly!-----------------| "<<endl;
		        	}
		        	else{
		              	cout<<"\t\t\t\t\t|----------       Wrong id or password!      ----------|"<<endl;
		              	chk=1;
						Beep(2000,500); 
						goto check;
		            }
		    }
	        else{
	    	    cout<<"\t\t\t\t\t|-------------        Wrong choice       --------------|"<<endl;
	    	    goto input;
	        }	    		            
	    }
	    void walletamount(){
	    	cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
	    	cout<<"\t\t\t\t\t|PAID AMOUNT : ";
	    	cin>>wallet;
		}
		float get_walletamount(){
			return wallet;
		}
};
class Ride:public Account{
	int drivers,vehicle;
	float distance,fair;
	string pickup,drop;
	public:
		int drivers_active(){
			srand((unsigned) time(0));
			return rand()%10+1;
		}
		void set_pickup(){
			cout<<"\t\t\t\t\t|Enter Pickup Point : ";
			cin>>pickup;
		}
		string get_pickup(){
			return pickup;
		}	
		void set_drop(){
			cout<<"\t\t\t\t\t|Enter Drop Point:";
			cin>>drop;
		}
		float get_distance(){
			srand((unsigned) time(0));
			distance= rand()%30+.5;
			return distance;
		}
		void set_vehicle(){
       		cout<<"\t\t\t\t\t|Enter 1 for Moto "<<endl;
	     	cout<<"\t\t\t\t\t|Enter 2 for Uber Mini "<<endl;
	    	cout<<"\t\t\t\t\t|ENter 3 for Uber Go "<<endl;
	    	cout<<"\t\t\t\t\t|";
		    cin>>vehicle;
		}
        float get_fair(){
		    if (vehicle==1){
	         	if ( get_distance() > 0 && get_distance() <= 2 ){
		         	fair = 40;
		        	return fair;
	        	}
	        	else{
		            fair=get_distance()*15;
		            return fair;
	   	        }	
	   	    }
	        else if(vehicle==2){
            	if ( get_distance() > 0 && get_distance() <= 2 ){
		         	fair = 50;
		        	return fair;
	        	}
	        	else{
		            fair=get_distance()*25;
		            return fair;
    	        }
			}
			else if (vehicle==3){
				if ( get_distance() > 0 && get_distance() <= 2 ){
		         	fair = 80;
		        	return fair;
	        	}
	        	else{
		            fair=get_distance()*30;
		            return fair;
    	        }
			}
        }
        int arrival_time(){
         	srand((unsigned) time(0));
			return rand()%10+1;
        }
        void current_time(){
        	time_t curr_time;
	        curr_time = time(NULL);

	        tm *tm_local = localtime(&curr_time);
	        cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
	       	cout <<"\t\t\t\t\t|Current local time : " << tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec<<"\t\t\t       |"<<endl;
		}
    	void display_ride(){
    		cout<<"\t\t\t\t\t|ACTIVE DRIVERS NEAR YOU : "<<drivers_active()<<"                           |"<<endl;
    		cout<<"\t\t\t\t\t|TRIP DISTANCE : "<<get_distance()<<" km                               |"<<endl; 
    		cout<<"\t\t\t\t\t|DRIVER COMING IN "<<arrival_time()<<" mins                               |"<<endl;
    		cout<<"\t\t\t\t\t|FAIR : "<<get_fair()<<"   pkr                                        |"<<endl;
    		cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|                      RIDE START                      |"<<endl;
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|                      RIDE CONTINUE........           |"<<endl;
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|                       RIDE END                       |"<<endl;
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
		}
		float remainingbal(){
			return get_walletamount()-fair;
		}
		void feedback(){
			int stars;			
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|HOW WAS YOUR EXPERIENCE :                             |"<<endl;
			cout<<"\t\t\t\t\t|1)EXCELLENT                                           |"<<endl;
			cout<<"\t\t\t\t\t|2)GOOD                                                |"<<endl;
			cout<<"\t\t\t\t\t|3)AVERAGE                                             |"<<endl;
			cout<<"\t\t\t\t\t|4)POOR                                                |"<<endl;
			cout<<"\t\t\t\t\t|5)WORST                                               |"<<endl;
			cout<<"\t\t\t\t\t|";
			cin>>stars;
			cout<<"\t\t\t\t\t|------------------------------------------------------|"<<endl;
			cout<<"\t\t\t\t\t|YOUR REMAINING AMOUNT : "<<remainingbal()<<"                            |"<<endl;
			cout<<"\t\t\t\t\t|______________________________________________________|"<<endl;
			cout<<"\t\t\t\t\t|                  THANKS FOR YOUR REVIEW              |"<<endl;
			cout<<"\t\t\t\t\t|______________________________________________________|"<<endl;
		}	
};
int main(){
	Ride U;
	U.set_name("Ahmad");
	U.set_name("Asad");
	U.set_password("11223344");
	U.set_password("11223344");
	U.set_email("ahmadbabar40@gmail.com");
	U.set_email("asad123@gmail.com");
	U.set_age(20);
	U.getlogin_password();
	U.setLogInSignUp();
	U.set_pickup();
	U.set_drop();
	U.drivers_active();
	U.set_vehicle();
	U.current_time();
	U.display_ride();
	U.walletamount();
	U.remainingbal();
	U.feedback();
}
return 1;


