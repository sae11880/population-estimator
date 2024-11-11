//Population-estimator 
//in this program we will estimate the population of orgiaismis based on a starting population and reproduction rate

#include <iostream>
using namespace std;

int main() {
	int startsize, numberofdays;
	double Dailyincrease;

	//start receiving of information start with number of ogrinisms, then percent of increase, end with number of days included in experiment
	do {
		cout << "Input the starting number of organisms must be a minimum of 2 : ";
			cin >> startsize;
		if (startsize < 2) {
			cout << "Error---input number greater then 2" << endl;

		}
	}while (startsize < 2);
	do {
		cout << "input the average percentage of population increase of the orgnism in a daily period :  ";
		cin >> Dailyincrease;
		if (Dailyincrease < 0) {
			cout << "Error---input number greater then 0 ";
			}
	} while (Dailyincrease < 0);
			do {
		cout << "Input the number of days you are hoping to estimate : ";
		cin >> numberofdays;
		if (numberofdays < 1) {
			cout << "Error---input number greater then 1 ";

		}
			} while (numberofdays < 1);

			Dailyincrease /= 100;

			//turn the daily increase in a mulitplcation equation 
			double population = startsize;
			cout << "the number of days and the population at the end of period-";
			for (int day = 1;day <= numberofdays;++day) {
				cout << day << " would result in " << population <<"organisms " << endl;
				population += population * Dailyincrease;
			}
			return 0;
}

