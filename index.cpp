#include <iostream>
using namespace std;

int main ()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "rutwik" && userPassword == "rutwik")
        {
            cout << "Rutwik Welcome to Alandi!\n";
  	    cout<<"Please enter your choice\n";
	    cout<<"1.Temples\n"<<"2.Hospitals\n"<<"3.Restaurant\n"<<"4.About Alandi\n"<<"5.Best time to visit\n"<<"6.Review\n"<<"press any key to exit\n";
   	    int i;
	    char a[10];
	    cin>>i;
   	    switch(i) {
      		case 1: if(i==1){
			cout<<"\t\t\t\t\t\t\t\tTemples"<<endl;
			cout<<"\t\t\t\t\t\t\t\tlist of temples:\n";
			cout<<"\t\t\t\t\t\t\t\t1.temp1\n"<<"\t\t\t\t\t\t\t\t2.temp2\n"<<"\t\t\t\t\t\t\t\t3.temp3\n"<<"\t\t\t\t\t\t\t\t4.temp4\n"<<"\t\t\t\t\t\t\t\t5.temp5\n"<<"\t\t\t\t\t\t\t\t6.temp6\n"<<"\t\t\t\t\t\t\t\t7.temp7\n"<<"\t\t\t\t\t\t\t\t8.temp8\n";
			}
		
		break;
      		case 2: if(i==2){
			cout<<"\t\t\t\t\t\t\t\tHospitals"<<endl;
			cout<<"\t\t\t\t\t\t\t\tList of Hospitals in Alandi";
cout<<"\t\t\t\t\t\t\t\t\t1.hos1\n"<<"\t\t\t\t\t\t\t\t2.hos2\n"<<"\t\t\t\t\t\t\t\t3.hos3\n"<<"\t\t\t\t\t\t\t\t4.hos4\n"<<"\t\t\t\t\t\t\t\t5.hos5\n";
}
		break;
      		case 3: if(i==3){
			cout<<"\t\t\t\t\t\t\t\tRestaurant"<<endl;
			cout<<"\t\t\t\t\t\t\t\tList of restaurant in Alandi:\n";
cout<<"\t\t\t\t\t\t\t\t1.res1\n"<<"\t\t\t\t\t\t\t\t2.res2\n"<<"\t\t\t\t\t\t\t\t3.res3\n"<<"\t\t\t\t\t\t\t\t4.res4\n"<<"\t\t\t\t\t\t\t\t5.res5\n"<<"\t\t\t\t\t\t\t\t6.res6\n";
}		
break;
      		case 4: cout<<"\t\t\t\t\t\t\t\tAbout Alandi "<<endl;
		break;
		case 5: cout<<"\t\t\t\t\t\t\t\tBest time to visit"<<endl;
		break;
		case 6: if(i==6){
			cout<<"\t\t\t\t\t\t\t\tReview"<<endl;
			cout<<"\t\t\t\t\t\t\t please enter review in 0-10 word:\n";
			cin>>a;
			cout<<"\t\t\t\t\t\t\t\t"<<a<<"\n"<<"\t\t\t\t\t\t\t thanks for feedback. \n"; 
			}
		break;
      		default: cout<<"\t\t\t\t\t\t\t\tExit"<<endl; 
		break;
   		}
	   	return i;
		break;
        }
	//use fo adding multiple logins.
       /* else if (userName == "anant" && userPassword == "anant")
        {
            cout << "Welcome Anant!\n";
            break;
        }*/
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";
}
