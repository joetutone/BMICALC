//CIS278
//JOE TUTONE
//MODULE 1 2.30
//THIS PROGRAM TAKES THE USERS WEIGHT AND HEIGHT AS INPUT THEN CALCULATES BMI


#include <iostream>
using namespace std;

int main()
{
	int weight; //declaring variables for the users weight height and bmi
	int height;
	int bmi;

	cout << "Enter your weight in pounds: "; //user input for weight
	cin >> weight;

	cout << "Enter your height in inches: "; //user input for height
	cin >> height;

	bmi = (weight * 703) / (height * height); //calc bmi

	cout << "Your BMI is " << bmi << endl; //output bmi

	cout << "BMI Values\nUnderweight:\tLess than 18.5\n Normal:\tbetween 18.5 and 24.9\nOverweight:\tbetween 25 and 29.9\nObese:\t30 or greater\n";//output bmi data

	if (bmi <= 18.5) {
		cout << "You are underweight" << endl;	//display which bracket the user falls into
	}
	if (bmi >= 18.5 && bmi <= 24.5) {
		cout << "You are normal" << endl;
	}
	if (bmi >= 24.5 && bmi <= 29.9) {
		cout << "You are overweight" << endl;
	}
	if (bmi >= 30) {
		cout << "Your are obese" << endl;
	}
}


