#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();






int main ()
{
int option;
cout<<"__________________________________________XYZ High Court____________________________________________"<<endl;
cout<<"\n\n\n";
cout<<"Welcome to Login page: "<<endl;
cout<<endl;
cout<<"1-Register: "<<endl<<"2-Login: "<<endl<<"3-Exit: "<<endl;
cout<<"\t\t\t Choose from above options:  "<<endl;
cin>>option;

switch(option)
{
case 1:
{
registration();
break;
}
case 2:
{
login();
break;
}
case 3:
{
cout<<"Thankyou for visiting! "<<endl;
break;
}
default:
{
cout<<"Invalid! choice, Choose from above stated options: "<<endl;
}
}
}




void registration()
{
system("CLS");
int count;
string reg_uid,reg_password,reg_id,reg_pass;
cout<<"_________________________________________________Registration Window__________________________________________________________"<<endl;

cout<<"Enter user name: "<<endl;
cin>>reg_id;
cout<<"Enter password: "<<endl;
cin>>reg_pass;

ofstream r1("data.txt", ios::out);
    r1<<reg_id<<" "<<reg_pass<<endl;
    cout<<"Registration is successfull! "<<endl;
    main();
    cout<<endl;
}

  void login()
{
system("CLS");
int count=0;
string uid,password,id,pass;
cout<<"_________________________________________________Login window____________________________________________________________________"<<endl;
cout<<"Enter your username: "<<endl;
cin>>uid;
cout<<endl;
cout<<"Enter password: "<<endl;
cin>>password;

ifstream l1("data.txt");

while(l1>>id>>pass)
{
if(uid==id && password==pass)
{
count=1;
}
}
l1.close();
if(count==1)
{
cout<<"your login is successfull! "<<endl;
cout<<endl;
cin.get();
system("CLS");
}
else
{
cout<<"Your Username or Password is incorrect: "<<endl;
main();
}


int count1,option2,option3;



cout<<"____________________________________________________Welcome to Home page:______________________________________________ "<<endl;
cout<<endl;

cout<<"1-Add/File Case: "<<endl;
cout<<"2-Edit/Modify Case: "<<endl;
cout<<"3-Delete Case: "<<endl;
cout<<"4-Search Case: "<<endl;
cout<<"5-Back to Main Menu: "<<endl;

cout<<"\t\t\tChoose from above given options: "<<endl;
cin>>option2;

int f_nic,a_nic,f_number;
string case_id,case_type,f_name,f_mail,a_name;
  




switch(option2)
{
	case 1:
		{
			cout<<"__________________________________ADD CASE:______________________________________ "<<endl;
			cout<<endl;
			cout<<"________Enter details below:________ "<<endl;
			cout<<endl;
			
			cout<<"Enter filer name here: ";
			cin>>f_name;
			cout<<endl;
			cout<<"Enter filer nic here: ";
			cin>>f_nic;
			cout<<endl;
			cout<<"Enter filer mail here: ";
			cin>>f_mail;
			cout<<endl;
			cout<<"Enter filer number here: ";
			cin>>f_number;
			cout<<endl;
			cout<<"Criminal case, Civil Case,Family case: "<<endl;
			cout<<endl;
			cout<<"Enter your case type:(eg: given above ):here: ";
			cin>>case_type;
			cout<<endl;
			cout<<"Enter accused name here: ";
			cin>>a_name;
			cout<<endl;
			
			ofstream add("info.txt");
			{
			add<<f_name<<" "<<f_nic<<" "<<f_mail<<" "<<f_number<<" "<<case_type<<" "<<a_name<<" "<<a_nic;
			}
			system("CLS");
			cout<<"Your case is filed: "<<endl;
			cout<<"\n\n\n";
			cout<<"Press one to continue: "<<endl;
			cin>>option3;
			switch(option3)
			{
				case 1:
					login();
			}
			break;
		}
		case 2:
		{
			int ef_number,ea_nic,ef_nic;
			string ef_name,ef_mail,ea_name,e_casetype;
			
			fstream info;
			fstream m_info;
			
			
			cout<<"__________________________________Modify Window:______________________________________ "<<endl;
			ofstream edit("info.txt");
			cout<<"Enter ef_nic "<<endl; //e means edit 
			cin>>ef_nic;;
			ifstream add("info.txt");
			while(add>>f_name>>f_nic>>f_mail>>f_number>>case_type>>a_name>>a_nic)
			{
				if(ef_nic==f_nic)
				count=1;
		}
		while(add>>f_name>>f_nic>>f_mail>>f_number>>case_type>>a_name>>a_nic)
		{
			if(count==1)
			{
			cout<<"Case for modification is found: "<<endl;
			cout<<"Case details are: "<<endl;
			cout<<endl;
			cout<<"Filer name: "<<f_name<<endl;
			cout<<"Filer nic: "<<f_nic<<endl;
			cout<<"Filer mail: "<<f_mail<<endl;
			cout<<"Filer number: "<<f_number<<endl;
			
			cout<<"Enter new filer name: "<<endl;
			cin>>ef_name;
	        cout<<"Enter new filer nic: "<<endl;
	        cin>>ef_nic;
	        cout<<"Enter new filer number: "<<endl;
	        cin>>ef_number;
	        cout<<"Enter new filer mail: "<<endl;
	        cin>>ef_mail;
	        cout<<"Enter new  case type: "<<endl;
	        cin>>e_casetype;
	        cout<<"Enter new accused  name: "<<endl;
	        cin>>ea_name;
	        cout<<"Enter new accused nic: "<<endl;
	        cin>>ea_nic;
	        	    
			ofstream edit1("m_info.txt");
				edit1<<ef_name<<" "<<ef_nic<<" "<<ef_number<<" "<<ef_mail<<" "<<ea_name<<" "<<ea_nic;
			
			info.close();
			m_info.close();
			remove("info.txt");
			rename("m_info.txt","info.txt");
			else
			{
				cout<<"Your case is not found! "<<endl;
			}
		}
			}
			cout<<endl;
			break;
		
		case 3:
		{
			cout<<"__________________________________Delete Window:______________________________________ "<<endl;
			cout<<endl;
			break;
		}
		case 4:
		{
			cout<<"__________________________________Search Panel:______________________________________ "<<endl;
			cout<<endl;
			break;
		}
		case 5:
		{
			main();
			cout<<endl;
			
		}
			
		}
}

 
