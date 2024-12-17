#include<iostream>
using namespace std;

int main(){
	int count[5] = {0, 0, 0, 0, 0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade ;
	int num = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
	    
		cout << "Student [" << num << "]: ";
	    
		cin >> grade; 
		
		if(grade == '0') { break; } //The loop must be terminated when grade = '0'
		
		if(grade == 'A'){ // if grade is A
		num++; count[0]++;	continue;
		}else if(grade == 'B'){ // if grade is B
		num++; count[1]++; continue;
		}else if(grade == 'C'){ // if grade is B
		num++; count[2]++; continue;
		}else if(grade == 'D'){ // if grade is B
		num++;count[3]++;continue;
		}else if(grade == 'F'){ // if grade is B
		num++; count[4]++; continue;
		}else{ // grade is wrong input
		cout << "Wrong input. Please input again.\n";
		
		} 
	}while(grade != 0);
	
	
    cout << "In total " << num-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}