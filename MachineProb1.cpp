// Machine Problem 1

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	// Declaration applicable for all
	int ex, st, mp, exp[4], skt[4], machprob[2];
	int prelimWr, prelimPr, finalWr, finalPr;
	string fname[50], lname[50];

// For all 50 students
for (int n=0; n<50; n++)
{
	cout << "Enter the name of the student:" << endl;
	cin >> fname[n] >> lname[n];		
		
	// Grades in experiments
	int ex = 4, exp[4];
	for (int ex=0; ex<4; ex++)
	{
		cout << "Enter grade in Experiment #" << ex+1 << ": ";
		cin >> exp[ex];
	}
	
	// Grades in skills tests
	int st = 4, skt[4];
	for (int st=0; st<4; st++)
	{
		cout << "Enter grades in Skills Tests #" << st+1 << ": ";
		cin >> skt[st];
	}
	
	// Grades in machine problems
	int mp = 2, machprob[2];
	for (int mp=0; mp<2; mp++)
	{
		cout << "Enter grades in Machine Problems # " << mp+1 << ": ";
		cin >> machprob[mp];
	}
		
		// Output for prelim exam grades
		int prelimWr, prelimPr, finalWr, finalPr;
		
		cout << "Enter grade in Written Preliminary Examination: ";
		cin >> prelimWr;
		cout << "Enter grade in Practical Preliminary Examination: ";
		cin >> prelimPr;
		
		// Output for final exam grades
		cout << "Enter grade in Written Final Examination: ";
		cin >> finalWr;
		cout << "Enter grade in Practical Final Examination: ";
		cin >> finalPr;
		
		// Total score, average, and raw grade (percentage) in experiments
		double expT, expAv, expP;
		expT = exp[0]+exp[1]+exp[2]+exp[3];
		expAv = expT / ex;
		expP = expAv*0.2;
		cout << "Experiments raw grade: " << expP << endl;
		
		// Total score, average, and raw grade (percentage) in skills tests
		double sktT, sktAv, sktP;
		sktT = skt[0]+skt[1]+skt[2]+skt[3];
		sktAv = sktT / st;
		sktP = sktAv*0.2;
		cout << "Skills Tests raw grade: " << sktP << endl;
		
		// Total score, average, and raw grade (percentage) in skills tests
		double mpT, mpAv, mpP;
		mpT = machprob[0]+machprob[1];
		mpAv = mpT / mp;
		mpP = mpAv*0.2;
		cout << "Machine Problems raw grade: " << mpP << endl;
		
		// Total score and raw grade (percentage) in prelim exam
		double prelimT, prelimP;
		prelimT = (prelimWr+prelimPr)/100;
		prelimP = prelimT*20;
		
		// Total score and raw grade (percentage) in final exam
		double finalT, finalP;
		finalT = (finalWr+finalPr)/100;
		finalP = finalT*20;
		cout << "Major Examinations raw grade: " << prelimP+finalP << endl;
		
		// Formula for raw grade
		double rg = expP+sktP+mpP+prelimP+finalP;
	
		if (rg >= 95.57 && rg <= 100)
		{
			cout << "Transmuted grade: 1.00 (PASSED)";
		}
		else if (rg >= 91.12 && rg <= 95.56)
		{
			cout << "Transmuted grade: 1.25 (PASSED)";
		}
		else if (rg >= 86.68 && rg <= 91.11)
		{
			cout << "Transmuted grade: 1.50 (PASSED)";
		}
		else if (rg >= 82.23 && rg <= 86.67)
		{
			cout << "Transmuted grade: 1.75 (PASSED)";
		}
		else if (rg >= 77.79 && rg <= 82.22)
		{
			cout << "Transmuted grade: 2.00 (PASSED)";
		}
		else if (rg >= 73.34 && rg <= 77.78)
		{
			cout << "Transmuted grade: 2.25 (PASSED)";
		}
		else if (rg >= 68.90 && rg <= 73.33)
		{
			cout << "Transmuted grade: 2.50 (PASSED)";
		}
		else if (rg >= 64.45 && rg <= 68.89)
		{
			cout << "Transmuted grade: 2.75 (PASSED)";
		}
		else if (rg >= 60.00 && rg <= 64.44)
		{
			cout << "Transmuted grade: 3.00 (PASSED)";
		}
		else
		{
			cout << "Transmuted grade: 5.00 (FAILED)";
		}
		
		cout << endl;
		cout << endl;
}
	// Ranking of top 10 students
	for (int t=0; t<10; t++)
	{
		cout << "Top " << t+1 << ": " << lname[t] << endl;
	}
	
	_getch();
	return 0;
}

