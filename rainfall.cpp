#include<iostream>
using namespace std;
int main()
{
	int z = 1;
	double Year[12];
	double Sum = 0, Average;
	double Max = Year[0], Min = Year[0];
	cout << "Enter the amount of rain fall in each month of a year " << endl;
	for (int month = 0; month < 12; month++)//for 12 months
		{
			cout << "Rainfall of " << z << "  month is = ";
			cin >> Year[month];
			cout << endl;
			z++;
		}
	for (int i = 0; i < 12; i++)

	{
		Sum = Sum + Year[i];
		cout << "Toatl Rain Fall in a year is  = " << Sum << endl;
		Average = Sum / 12;
		cout << "Average monthly Rain Fall is  = " << Average << endl;
		if (Year[i] > Max)
		{
			Max = Year[i];
			cout << "Maximum rain fall is in " << Year[i] << " Month" << endl;
		}
		else if (Year[i] < Min)
		{
			Min = Year[i];
			cout << "Minimum Rainfall is in " << Year[i] << " Month" << endl;
		}
	}
		
		

	
	system("Pause>0");
}
