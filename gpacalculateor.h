//Atheer al amari 2220000978
//leen Basnawi 2220006463
//Hadeel Alshammry 2220002998
//Fatimah Hamoud 2220004759
#include<iostream>
#include<string>
#include<fstream>
#ifndef GPACALCULATEOR_H
#define GPACALCULATEOR_H
using namespace std;

struct College {
    string name;
    double percentage=0.0;
};


//function to print the menu
void printMenu() {
    cout << "Welcome to the GPA Calculateor program." << endl;
    cout << "This program takes input from the user and calculates theGPA and you can teak aTast of collge." << endl;
    cout << "Please choose one of the following options:" << endl;
    cout << "1. Calculate weighted rank" << endl;
    cout << "2. Take college test" << endl;
    cout << "3. Exit" << endl;
}


//function to display the result
void displayResult(College college[],int size) {
    cout << "Your colloge is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << college[i].name<< ": " << college[i].percentage  << endl;
    }
}
// Function to shift all colleges in the array one place to the left 
void shiftLeft(College colloge[], int size) { 
    for (int i = 0; i < size - 1; i++) 
        colloge[i] = colloge[i + 1]; 
} 

// Function to rotate the array of colleges 
void rotate(College colloge[], int size, int n) { 
    n = n % size;   
    // Move the elements in the array 
    for (int i = 0; i <size ; i++) { 
        n=i+size;
        if(n>=size)
        n=n%size;
        colloge[n]=colloge[i]; 
     } 
     cout<<"new order\n";
	for (int i=0; i<size;i++){
	
	cout<<colloge[i].name<<"\n";
	
   }     
     
} 

// Function to add a college to the array of colleges 
void addCollege(College colloge[], int &size, College college) { 
    const int MAX_COLLEGES = 100; 
    if (size < MAX_COLLEGES) { 
        colloge[size++] = college; 
    } 
} 

// Function to print out the array of colleges 
void printColleges(College colloge[], int size) { 
    cout << "Colleges: " << endl; 
    for (int i = 0; i < size; i++) { 
        cout << "Name: " << colloge[i].name << endl;
        cout << "Percentage: " << colloge[i].percentage << endl;
        cout << endl;
    } 
} 

// Function to update a college in the array of colleges 
void updateCollege(College colloge[], int size, string name, College college) { 
    // Search for the college 
    for (int i = 0; i < size; i++) { 
        if (colloge[i].name == name) { 
		    colloge[i] = college;
		 
        } 
    	break;
   } 
   
} 

// Function to delete a college from the array of colleges 
void deleteCollege(College colloge[], int &size, string name) { 
    // Search for the college 
    for (int i = 0; i < size; i++) { 
        if (colloge[i].name == name) { 
            shiftLeft(colloge, size); 
            size--; 
            break; 
        } 
    } 
} 

// Function to sort the array of colleges by percentage 
void sortColleges(College colloge[], int size) { 
    for (int i = 0; i < size - 1; i++) { 
        for (int j = 0; j < size-1; j++) { 
            if (colloge[j].percentage>colloge[j + 1].percentage) { 
                College temp = colloge[j]; 
                colloge[j] = colloge[j + 1]; 
                colloge[j + 1] = temp; 
            } 
        } 
    } 
} 

// Function to search for a college in the array of colleges 
College* searchCollege(College colloge[], int size, string name) { 
    // Search for the college 
    for (int i = 0; i < size; i++) { 
        if (colloge[i].name == name) { 
        cout<<"The college is found ";
            return &colloge[i]; 
        } 
    } 
    return NULL; 
} 

// Function to store the array of colleges in a file 
void storeColleges(College colloge[], int size) { 
   std:: ofstream outFile; 
    outFile.open("colleges.txt"); 
  
    // Write the sizes 
    outFile << size << endl; 
  
    // Write the colleges 
    for (int i = 0; i < size; i++) { 
        outFile << colloge[i].name << " "; 
        outFile << colloge[i].percentage << " "; 
    } 
  
    outFile.close(); 
} 

// Function to read the array of colleges from a file 
void readColleges(College colloge[], int &size) { 
    ifstream inFile; 
    inFile.open("colleges.txt"); 
  
    // Read the size 
    inFile >> size; 
  
    // Read the colleges 
    for (int i = 0; i < size; i++) { 
        inFile >> colloge[i].name; 
        inFile >> colloge[i].percentage; 
    } 
  
    inFile.close(); 
} 

void process(College colloge[],int size){
    int choice;
    while (1) { 
        // Print the menu 
        cout << "1. Print Colleges" << endl; 
        cout << "2. Add College" << endl; 
        cout << "3. Update College" << endl; 
        cout << "4. Delete College" << endl; 
        cout << "5. Sort Colleges" << endl; 
        cout << "6. Search College" << endl; 
        cout << "7. Rotate Colleges" << endl; 
        cout << "8. Exit" << endl; 
        cout << "Enter your choice: "; 
        cin >> choice; 
  
        switch (choice) { 
            case 1: 
                // Print Colleges 
                printColleges(colloge, size); 
                break; 
            case 2: { 
                // Add College 
                College college; 
                cout << "Enter college name: "; 
                cin >> college.name; 
                cout << "Enter percentage: "; 
                cin >> college.percentage;  
                addCollege(colloge, size, college); 
                break; 
            } 
            case 3: { 
                // Update College 
                string name; 
                cout << "Enter college name to be updated: "; 
                cin >> name; 
                College college; 
                cout << "Enter college name: "; 
                cin >> college.name; 
                cout << "Enter percentage: "; 
                cin >> college.percentage;  
                updateCollege(colloge, size, name, college); 
                break; 
            } 
            case 4: { 
                // Delete College 
                string name; 
                cout << "Enter college name to be deleted: "; 
                cin >> name; 
                deleteCollege(colloge, size, name); 
                break; 
            } 
            case 5: 
                // Sort Colleges 
                sortColleges(colloge, size); 
                break; 
            case 6: { 
                // Search College 
                string name; 
                cout << "Enter college name to be searched: "; 
                cin >> name; 
                College* college = searchCollege(colloge, size, name); 
  
                if (college == NULL) { 
                    cout << "College not found!" << endl; 
                   break; 
                } 
                else { 
                    cout << "Name: " << college->name << endl;
                    cout << "Percentage: " << college->percentage << endl;
                    cout << endl;
                } 
                break; 
            } 
            case 7: { 
                // Rotate Colleges 
                int n; 
                cout << "Enter number of places to rotate: "; 
                cin >> n; 
                rotate(colloge, size, n); 
                break; 
            } 
            case 8: 
                // Store colleges 
                storeColleges(colloge, size); 
                exit(0); 
            default: 
                cout << "Invalid choice!" << endl; 
        } 
    } 
}
//Functions to display the required percentagefor each University 
double IAU (double a , double b ,double c){
double GPA ;
cout<<"\n Imam Abdulrahman bin Faisal University (IAU):";
cout<<"\n The required percentage:";
cout<<"\n High school GPA: 30%";
cout<<"\n General Aptitude test (GAT):30%";
cout<<"\n Achievement test: 40%";
GPA=( a * (0.30))+b* (0.30)+c*(0.40);
cout<<endl<< " yor GPA in IAU "<<GPA<<endl;
   return GPA ;
}

double KFUPM(double a , double b ,double c,double d){
double GPA ;
cout<<"\n King Fahad University of Petroleum & Minerals (KFUPM)";
cout<<"\n The required percentage:";
cout<<"\n High school GPA:10%";
cout<<"\n General Aptitude test (GAT):40%";
cout<<"\n Achievement test:50%";
cout<<"\n STEP: 50 or above";
if (d>=50){

GPA=(a * (0.10))+ (b * (0.40))+ (c *(0.50));
cout<<endl<< " yor GPA in KFUPM "<<GPA<<endl;
}
 else 
cout<<"\n sorr your STEP degre not alaod you to comlet ";
return GPA ;
}
double UOJ(double a, double b, double c){
double	GPA;
cout<<"\n University of Jeddah (UOJ):";
cout<<"\n The required percentage:";
cout<<"\n High school GPA: 30%" ;
cout<<"\n General Aptitude test (GAT):40%";
cout<<"\n Achievement test:30%" ;

GPA=(a * (0.30))+ (b * (0.40))+ (c*(0.30));
cout<<endl<< " yor GPA in UOJ "<<GPA<<endl;
return GPA ;
}
double KAU (double a, double b, double c){
double	GPA;
cout<<"\n King Abdulaziz University (KAU):";
cout<<"\n The required percentage:";
cout<<"\n High school GPA:40%" ;
cout<<"\n General Aptitude test (GAT):30%";
cout<<"\n Achievement test:30%" ;
GPA=(a * (0.40))+ (b * (0.30))+ (c *(0.30));
cout<<endl<< " yor GPA in KAU "<<GPA<<endl;
return GPA ;
}

double Taibah_University(double a, double b, double c){

double GPA ;
cout<<"\n The required percentage: ";
cout<<"\n High school GPA:40% " ;
cout<<"\n General Aptitude test (GAT):30%";
cout<<"\n Achievement test:30%";

GPA=(a* (0.40))+ (b* (0.30))+ (c*(0.30));
cout<<endl<< " yor GPA in Taibah_University "<<GPA<<endl;
return GPA ;
}

double PNU(double a, double b, double c){
double GPA ;
cout<<"\n Princess Nourah University (PNU):";
cout<<"\n The required percentage:" ;
cout<<"\n High school GPA: 30%";
cout<<"\n General Aptitude test (GAT):30%";
cout<<"\n Achievement test: 40%";
GPA=(a* (0.30))+ (b  * (0.30))+( c *(0.40)) ;
cout<<endl<< " yor GPA in PNU "<<GPA<<endl;

return GPA ;
}
double KKU(double a, double b, double c){
double GPA;
cout<<"\n King Khaled University (KKU):";
cout<<"\n The required percentage:" ;
cout<<"\n High school GPA: 30%";
cout<<"\n General Aptitude test (GAT):30%";
cout<<"\n Achievement test: 40%";
GPA=(a * (0.30))+ (b * (0.30))+ (c *(0.40));
cout<<endl<< " yor GPA in KKU "<<GPA<<endl;
return GPA;
}

double KFU(double a, double b, double c){
double GPA;
cout<<"\n King Faisal University (KFU):";
cout<<"\n The required percentage:";
cout<<"\n High school GPA: 30%";
cout<<"\n General Aptitude test (GAT):30%" ;
cout<<"\n Achievement test: 40%" ;
GPA=(a * (0.30))+ (b * (0.30))+ (c*(0.40)) ;
cout<<endl<< " yor GPA in KFU "<<GPA<<endl;
return GPA;	
}
double KSU(double a, double b, double c) {
double GPA;
cout<<"\n King Saud University (KSU):";
cout<<"\n The required percentage:";
cout<<"\n High school GPA: 30%";
cout<<"\n General Aptitude test (GAT):30%" ;
cout<<"\n Achievement test: 40%" ;
GPA=(a * (0.30))+ (b * (0.30))+ (c *(0.40));
cout<<endl<< " yor GPA in KSU "<<GPA<<endl;
 return GPA;	
 }
 
 double UQU(double a, double b, double c){
double GPA;
cout<<"\n Umm Al-qura university (UQU):";
cout<<"\n The required percentage:";
cout<<"\n High school GPA: 40%";
cout<<"\n General Aptitude test (GAT):30%" ;
cout<<"\n Achievement test: 30%" ;
GPA=(a* (0.40))+ (b* (0.30))+ (c *(0.30));	
cout<<endl<< " yor GPA in UQU "<<GPA<<endl; 	
return GPA;
 }
 
double UHB(double a, double b, double c) {
double GPA;
cout<<"\n University Of Hafr Al Batin(UHB):" ;
cout<<"\n The required percentage:";
cout<<"\n High school GPA: 30%";
cout<<"\n General Aptitude test (GAT):30%" ;
cout<<"\n Achievement test: 40%" ;
GPA=(a * (0.30))+ (b* (0.30))+ (c *(0.40));
cout<<endl<< " yor GPA in UHB "<<GPA<<endl;
return GPA;
 }

double MU(double a, double b, double c){
double GPA ;	
cout<<"\n Majmaah University (MU):";
cout<<"\n The required percentage:";
cout<<"\n High school GPA: 30%";
cout<<"\n General Aptitude test (GAT):30%";
cout<<"\n Achievement test: 40%";
GPA=(a * (0.30))+ (b * (0.30))+ (c *(0.40))	;
cout<<endl<< " yor GPA in MU"<<GPA<<endl;
return GPA;
}
// function to rotate the GPA 
void collgGPA(double arr[],int size){
 int n ;
 double a,b,c,d;
 	 IAU (a, b,c);
	 cin>>arr[0];
	 KFUPM(a,b,c,d);
	 cin>>arr[1];
	 UOJ(a,b,c);
	 cin>>arr[2];
	 KAU (a,b,c);
	 cin>>arr[3];
	 Taibah_University(a,b,c);
	 cin>>arr[4];
	 PNU(a,b,c);
	 cin>>arr[5];
	 KKU(a,b,c);
	 cin>>arr[6];
	 KFU(a,b,c);
	 cin>>arr[7];
	 KSU(a,b,c) ;
	 cin>>arr[8];
	 UQU(a,b,c);
	 cin>>arr[9];
	 UHB(a,b,c);
	 cin>>arr[10];
	 MU(a,b,c);
	 cin>>arr[11];
 cout<<"Enter number to rotate"<<endl;
 cin>>n;
  n = n % size;   
    // Move the elements in the array 
    for (int i = 0; i <size ; i++) { 
        n=i+size;
        if(n>=size)
        n=n%size;
        arr[n]=arr[i]; 
      
     cout<<"new order\n";
	for (int i=0; i<size;i++){
	
	cout<<arr[i]<<"\n";

}
}
}
#endif
