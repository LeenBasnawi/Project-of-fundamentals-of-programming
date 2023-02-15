//Atheer al amari 2220000978
//leen Basnawi 2220006463
//Hadeel Alshammry 2220002998
//Fatimah Hamoud 2220004759
#include<iostream>
#include<string>
#include<fstream>
#include"gpacalculateor.h"
using namespace std;
//main method
int main() {
  
    int choice;

    do {
        printMenu();
        cin >> choice;

        //calculate the weighted rank
        if (choice == 1) {
            	string name ;
	int chice,size=12;
	double school , GAT , Achievement_test ,STEP, GPA, colgGPA[size];
	cout<< "plese enter your name \n";
	cin>>name ;
	cout<<name<<" plese enter yor GBA in high school ,Aptitude test (GAT) and Achievement test \n ";
	cin>>school>>GAT>>Achievement_test ;
	cout<<"If you have STEP tast";
	cin>>STEP;
cout<<"\n enter number of the University you wint to calculation the GPA of it: ";
cout<<"\n 0 To all University’s enter ";
cout<<"\n 1 To Imam Abdulrahman bin Faisal University (IAU) ";
cout<<"\n 2 To King Fahad University of Petroleum & Minerals (KFUPM) ";
cout<<"\n 3 To University of Jeddah (UOJ) ";
cout<<"\n 4 TO King Abdulaziz University (KAU) ";
cout<<"\n 5 TO Taibah University ";
cout<<"\n 6 TO Princess Nourah University (PNU) ";
cout<<"\n 7 TO King Khaled University (KKU) ";
cout<<"\n 8 TO King Faisal University (KFU) ";
cout<<"\n 9 TO King Saud University (KSU) ";
cout<<"\n 10 TO Umm Al-qura university (UQU) ";
cout<<"\n 11 TO University Of Hafr Al Batin(UHB) ";
cout<<"\n 12 TO Majmaah University (MU) ";
cout<<endl;
cin>>chice;
cout<<endl;
string rot;
switch (chice){
	case (0):{
	 IAU (school , GAT ,Achievement_test);
	 cout<<"\n";
	 KFUPM(school, GAT ,Achievement_test,STEP);
	 cout<<"\n";
	 UOJ(school, GAT, Achievement_test);
	 cout<<"\n";
	 KAU (school, GAT, Achievement_test);
	 cout<<"\n";
	 Taibah_University(school, GAT, Achievement_test);
	 cout<<"\n";
	 PNU(school, GAT, Achievement_test);
	 cout<<"\n";
	 KKU(school, GAT, Achievement_test);
	 cout<<"\n";
	 KFU(school, GAT, Achievement_test);
	 cout<<"\n";
	 KSU(school, GAT, Achievement_test) ;
	 cout<<"\n";
	 UQU(school, GAT, Achievement_test);
	 cout<<"\n";
	 UHB(school, GAT, Achievement_test);
	 cout<<"\n";
	 MU(school, GAT, Achievement_test);
	 cout<<endl;
	 cout<<"you wont to rotat";
	 cin>>rot;
	 if(rot=="yes")
    collgGPA(colgGPA,size);
    else 
	break;
	}
	case (1):
    	IAU (school , GAT ,Achievement_test);
	    cout<<endl;
	break;
	case (2):
	 KFUPM(school ,GAT ,Achievement_test,STEP);
	 cout<<endl;
	break;
	case (3):
	 UOJ(school, GAT, Achievement_test);
	 cout<<endl;
	break;
	case (4):
	 KAU (school, GAT, Achievement_test);
	 cout<<endl;
	break;
	case (5):
	 Taibah_University(school, GAT, Achievement_test);
	 cout<<endl;
	break;
	case (6):
	 PNU(school, GAT, Achievement_test);
	 cout<<endl;
	break;
	case (7):
	 KKU(school, GAT, Achievement_test);
	 cout<<endl;
	break;
	case (8):
	 KFU(school, GAT, Achievement_test);
	 cout<<endl;
	break;
	case (9):
	 KSU(school, GAT, Achievement_test) ;
	 cout<<endl;
	break;
	case (10):
	 UQU(school, GAT, Achievement_test);
	 cout<<endl;
	break;
	case (11):
	 UHB(school, GAT, Achievement_test);
	 cout<<endl;
	break;
	case (12):
	 MU(school, GAT, Achievement_test);
	 cout<<endl;
	break;
	default:
		cout<<"You enter wrong number";
}
            

            
        }

        //take college test
        else if (choice == 2) {
        int numColleges = 7;
        double percentage=0;
    College college[numColleges];
    college[0].name = "Computer";
    college[1].name = "Science";
    college[2].name = "Medicine";
    college[3].name = "Engineering";
    college[4].name = "Law";
    college[5].name = "Literature";
    college[6].name = "Business Administration";
    string answer;
            cout << "College of Computer" << endl;{
			
            cout << "-Do you like programming? Yes/No: ";
            cin >> answer;

            if (answer == "Yes"||answer=="yes") {
                college[0].percentage=percentage+33.3;
                
            }

            cout << "-Do you have problem-solving skills? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
              college[0].percentage=percentage +33.3;
               
            }

            cout << "-Do you prefer office work? Yes/No: ";
            cin >> answer;
            if (answer == "No"||answer=="no") {
                college[0].percentage=percentage+33.3;
				
            }
        cout<<percentage; 
}
            cout << "College of Science" << endl;{
            cout << "-Do you like science subjects? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[1].percentage=percentage+33.3;
                 percentage++;
            }

            cout << "-What's your favourite subject? (Chemistry, physics, biology, mathematics) Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                 college[1].percentage=percentage+33.3;
                  percentage++;
            }
            cout << "-Do you enjoy doing scientific research? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                 college[1].percentage=percentage+33.3;
                
            }
          cout<<percentage;   
}            
            cout << "College of medicine" << endl;{
            cout << "-Do you have a phobia of blood? Yes/No: ";
            cin >> answer;
            if (answer == "No"||answer=="no") {
                 college[2].percentage=percentage+33.3;
            }
            cout << "-Do you want to study the human body? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                 college[2].percentage=percentage+33.3;
            }
            cout << "-Do you have self-control skill? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                 college[2].percentage=percentage+33.3;
            }
          cout<<percentage;   
  }  
            cout << "College of Engineering" << endl;{
            cout << "-Do you like mathematics? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                 college[3].percentage=percentage+33.3;
            }
            cout << "-Are you wondering how things work? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
               college[3].percentage=percentage+33.3;
            }
           cout<<percentage;
		}
		   cout << "College of Law" << endl;{
            cout << "-Do you have the ability to defend the accused and the oppressed? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
               college[4].percentage=percentage+33.3;
            }
            cout << "-Do you have good analytical skills? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[4].percentage=percentage+33.3;
            }
            cout << "-Are you familiar with the legal regulations and provisions? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[4].percentage=percentage+33.3;
            }
           cout<<percentage;  
        }    
            cout << "College of Literature" << endl;{
            cout << "-Are you a fan of reading books? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[5].percentage=percentage+33.3;
            }
            cout << "-Would you rather read poetry than watch TV? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[5].percentage=percentage+33.3;
            }
            cout << "-Are you interested in studying grammar of languages? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[5].percentage=percentage+33.3;
            }
         cout<<percentage;
}
            cout << "College of Business Administration" << endl;{
            cout << "-Do you have the ability to run a company? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[6].percentage=percentage+33.3;
            }
            cout << "-Do you have experience about savings? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[6].percentage=percentage+33.3;
            }

            cout << "-Would you like to create a new business? Yes/No: ";
            cin >> answer;
            if (answer == "Yes"||answer=="yes") {
                college[6].percentage=percentage+33.3;
            }
            cout<<percentage; 
          } 
		   //display the result
            displayResult(college,7);

            process(college,7);
        }
        //exit
        else if (choice == 3) {
            cout << "Goodbye!" << endl;
            break;
        }
    } while(true);

    return 0;
}
