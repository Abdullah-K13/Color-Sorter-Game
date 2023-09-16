#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct player {
	int moves = 0;
	string name, levels;

}players;
bool boolean = true;
string level1_testTube_1[4]= {"R","B","R","B"};
string level1_testTube_2[4]= {"R","R","B","B"};
string level1_testTube_3[4]= {};

int top1 = 3;
int top2 = 3;
int top3 = -1;

string level2_testTube_1[4] = { "O","B","R","O" };
string level2_testTube_2[4] = { "O","B","O","B" };
string level2_testTube_3[4] = { "R","R","R","B" };
string level2_testTube_4[4] = {};
string level2_testTube_5[4] = {};

int topp1 = 3;
int topp2 = 3;
int topp3 = 3;
int topp4 = -1;
int topp5 = -1;

string level3_testTube_1[4] = { "G","P","B","O" };
string level3_testTube_2[4] = { "P","G","B","O" };
string level3_testTube_3[4] = { "O","R","P","R" };
string level3_testTube_4[4] = { "P","O","R","B" };
string level3_testTube_5[4] = { "G","G","R","B" };
string level3_testTube_6[4] = {};
string level3_testTube_7[4] = {};

int toppp1 = 3;
int toppp2 = 3;
int toppp3 = 3;
int toppp4 = 3;
int toppp5 = 3;
int toppp6 = -1;
int toppp7 = -1;

string test1[4] = {"R","R","R","R"};
string test2[4] = {"B","B","B","B"};
string test3[4] = {"O","O","O","O"};
string test4[4] = {"P","P","P","P"};
string test5[4] = {"G","G","G","G"};

bool push_tubesFunction(string num,int& top,string testTube[])
{
	bool b = true;
	if (top == 3)
	{
		cout << "Not Enough space in the test tube\n";
		b = false;
	}
	else
	{
		top = top + 1;
		testTube[top] = num;
		b = true;
	}
	return b;
}
string popTubesFunction(int& top,string testTubes[])
{
	boolean = true;
	string c;
	if (top == -1)
	{
		cout << "\nNo balls in this tu\n";
		boolean = false;
	}
	else
	{
		c = testTubes[top];
		top = top - 1;
	}
	return c;
}
void displayAllTubes_level1() {


	for (int i = 3; i >= 0; --i) {
		if (i <= top1) {
			cout << "|"<<level1_testTube_1[i] << "|" << "\t";
		}
		else {
			cout<<"|" << "0|\t";
		}

		if (i <= top2) {
			cout << "|" << level1_testTube_2[i] << "|" << "\t";
		}
		else {
			cout << "|0|\t";
		}

		if (i <= top3) {
			cout << "|" << level1_testTube_3[i]<<"|" ;
		}
		else {
			cout<<"|"<<  "0""|" ;
		}

	     cout << endl;
	}
}
void displayAllTubes_level3() {
	int maxTop = max(toppp1, max(toppp2, max(toppp3, max(toppp4, max(toppp5, max(toppp6, toppp7))))));

	for (int i = 3; i >= 0; --i) {
		if (i <= toppp1) {
			cout << "|" << level3_testTube_1[i] << "|";
		}
		else {
			cout << "|0|";
		}

		if (i <= toppp2) {
			cout << "\t|" << level3_testTube_2[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		if (i <= toppp3) {
			cout << "\t|" << level3_testTube_3[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		if (i <= toppp4) {
			cout << "\t|" << level3_testTube_4[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		if (i <= toppp5) {
			cout << "\t|" << level3_testTube_5[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		if (i <= toppp6) {
			cout << "\t|" << level3_testTube_6[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		if (i <= toppp7) {
			cout << "\t|" << level3_testTube_7[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		cout << std::endl;
	}
}
void displayAllTubes_level2() {
	int maxTop = max(topp1, max(topp2, max(topp3, max(topp4, topp5))));

	for (int i = 3; i >= 0; --i) {

		if (i <= topp1) {
			cout << "|" << level2_testTube_1[i] << "|";
		}
		else {
			cout << "|0|";
		}

		if (i <= topp2) {
			cout << "\t|" << level2_testTube_2[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		if (i <= topp3) {
			cout << "\t|" << level2_testTube_3[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		if (i <= topp4) {
			cout << "\t|" << level2_testTube_4[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		if (i <= topp5) {
			cout << "\t|" << level2_testTube_5[i] << "|";
		}
		else {
			cout << "\t|0|";
		}

		cout << std::endl;
	}
}
bool checkAndPrintMessage() {
	bool match = true;
	bool done = false;
	for (int i = 0; i < 4; i++) {
		if (level1_testTube_2[i] != test1[i] || level1_testTube_3[i] != test2[i] ) {
			match = false;
			break;
		}
	}
	string i;
	if (match == true) {
		cout << " ------------------------------------"<<endl;
		cout << "| Congratulations! Level 1 completed | " << endl;
		cout << " ------------------------------------"<<endl;

		done = true;
		cout << "Press any key to go to the main menu" << endl;
		cin >> i;
	}
	return done;
}
bool compareTestTube(string* testTube, string* test) {
	for (int i = 0; i < 4; i++) {
		if (testTube[i] != test[i]) {
			return false;
		}
	}
	return true;
}
bool checkAndPrintMessageLevel3() {
	int matchCount = 0;
	bool done = false;
	if (compareTestTube(level3_testTube_1, test1) || compareTestTube(level3_testTube_2, test1) || compareTestTube(level3_testTube_3, test1) || compareTestTube(level3_testTube_4, test1) || compareTestTube(level3_testTube_5, test1) || compareTestTube(level3_testTube_6, test1) || compareTestTube(level3_testTube_7, test1))
		matchCount++;

	if (compareTestTube(level3_testTube_1, test2) || compareTestTube(level3_testTube_2, test2) || compareTestTube(level3_testTube_3, test2) || compareTestTube(level3_testTube_4, test2) || compareTestTube(level3_testTube_5, test2) || compareTestTube(level3_testTube_6, test2) || compareTestTube(level3_testTube_7, test2))
		matchCount++;

	if (compareTestTube(level3_testTube_1, test3) || compareTestTube(level3_testTube_2, test3) || compareTestTube(level3_testTube_3, test3) || compareTestTube(level3_testTube_4, test3) || compareTestTube(level3_testTube_5, test3) || compareTestTube(level3_testTube_6, test3) || compareTestTube(level3_testTube_7, test3))
		matchCount++;

	if (compareTestTube(level3_testTube_1, test4) || compareTestTube(level3_testTube_2, test4 )|| compareTestTube(level3_testTube_3, test4) || compareTestTube(level3_testTube_4, test4) || compareTestTube(level3_testTube_5, test4) || compareTestTube(level3_testTube_6, test4) || compareTestTube(level3_testTube_7, test4))
		matchCount++;

	if (compareTestTube(level3_testTube_1, test5) || compareTestTube(level3_testTube_2, test5) || compareTestTube(level3_testTube_3, test5) || compareTestTube(level3_testTube_4, test5) || compareTestTube(level3_testTube_5, test5) || compareTestTube(level3_testTube_6, test5) || compareTestTube(level3_testTube_7, test5))
		matchCount++;
	string i;
		if (matchCount >= 5) {
			cout << " -------------------------------------" << endl;
			cout << "| Congratulations! Level 3 completed! |" << endl;
			cout << " -------------------------------------" << endl;
			cout << "Press any key to go to the main menu" << endl;
			cin >> i;
			done = true;
		}
		return done;
}
bool level_3() {
	players.moves = 0;
x:
	bool completion = false;
	//system("CLS");
	int moves = 0;
	int a;
	int b;
	int c;
	int k;
	int choi;
	
	string s;
	do {
		system("CLS");
		cout << R"(
   ______          __     _______ 
  / __/ /  ___ ___/ /__  / __/ _ \
 _\ \/ _ \/ -_) _  / _ \_\ \/ ___/
___/_//_/\__/\_,_/ .__/___/_/    
                 /_/             
  Welcome to the Level 3!
_______________________________
)" << endl;
		cout << "|   Maximum moves limit for level 2 is 25 moves   |\n";
		cout << "|   You have to sort the balls by colors          |  " << endl;
		cout << "|   press 1 to remove the ball from test tube 1   |" << endl;
		cout << "|   press 2 to remove the ball from test tube 2   |" << endl;
		cout << "|   press 3 to remove the ball from test tube 3   |" << endl;
		cout << "|   press 4 to remove the ball from test tube 4   |" << endl;
		cout << "|   press 5 to remove the ball from test tube 5   |" << endl;
		cout << "|   Press 0 to exit                               |" << endl;

		if (moves > 25)
		{
			cout << "Moves Limit exceeded!\n";
			cout << "Press 1 to add 25 more moves or 0 to exit" << endl;
			cin >> k;
			if (k == 1) {
				goto x;
			}
			else if (k == 0)
			{
				break;
			}
			else {
				cout << "Invalid choice!" << endl;
			}

		}
		bool done;
		done = checkAndPrintMessageLevel3();
		if (done == true) {
			completion = true;
			break;
		}
		displayAllTubes_level3();
		cout << "Moves done:" << moves << endl;
		cout << endl;

		cout << "Enter your choice ";
		cin >> choi;

		switch (choi) {
			
		case 1:

			s = popTubesFunction(toppp1, level3_testTube_1);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				bool b, c;
				if (a == 1) {
					b = push_tubesFunction(s, toppp1, level3_testTube_1);
					if (b == false) {
						push_tubesFunction(s, toppp1, level3_testTube_1);
					}
				}
				else if (a == 2) {
					b = push_tubesFunction(s, toppp2, level3_testTube_2);
					if (b == false) {
						push_tubesFunction(s, toppp1, level3_testTube_1);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, toppp3, level3_testTube_3);
					if (c == false) {
						push_tubesFunction(s, toppp1, level3_testTube_1);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, toppp4, level3_testTube_4);
					if (c == false) {
						push_tubesFunction(s, toppp1, level3_testTube_1);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, toppp5, level3_testTube_5);
					if (c == false) {
						push_tubesFunction(s, toppp1, level3_testTube_1);
					}
				}
				else if (a == 6) {
					c = push_tubesFunction(s, toppp6, level3_testTube_6);
					if (c == false) {
						push_tubesFunction(s, toppp1, level3_testTube_1);
					}
				}
				else if (a == 7) {
					c = push_tubesFunction(s, toppp7, level3_testTube_7);
					if (c == false) {
						push_tubesFunction(s, toppp1, level3_testTube_1);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, toppp1, level3_testTube_1);
				}
				break;
			}
			else
				break;
		case 2:

			s = popTubesFunction(toppp2, level3_testTube_2);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1) {
					b = push_tubesFunction(s, toppp1, level3_testTube_1);
					if (b == false) {
						push_tubesFunction(s, toppp2, level3_testTube_2);
					}
				}
				else if (a == 2) {
					b = push_tubesFunction(s, toppp2, level3_testTube_2);
					if (b == false) {
						push_tubesFunction(s, toppp2, level3_testTube_2);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, toppp3, level3_testTube_3);
					if (c == false) {
						push_tubesFunction(s, toppp2, level3_testTube_2);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, toppp4, level3_testTube_4);
					if (c == false) {
						push_tubesFunction(s, toppp2, level3_testTube_2);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, toppp5, level3_testTube_5);
					if (c == false) {
						push_tubesFunction(s, toppp2, level3_testTube_2);
					}
				}
				else if (a == 6) {
					c = push_tubesFunction(s, toppp6, level3_testTube_6);
					if (c == false) {
						push_tubesFunction(s, toppp2, level3_testTube_2);
					}
				}
				else if (a == 7) {
					c = push_tubesFunction(s, toppp7, level3_testTube_7);
					if (c == false) {
						push_tubesFunction(s, toppp2, level3_testTube_2);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, toppp2, level3_testTube_2);
				}
				break;
			}
			else
				break;

		case 3:


			s = popTubesFunction(toppp3, level3_testTube_3);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1) {
					b = push_tubesFunction(s, toppp1, level3_testTube_1);
					if (b == false) {
						push_tubesFunction(s, toppp3, level3_testTube_3);
					}
				}
				else if (a == 2) {
					b = push_tubesFunction(s, toppp2, level3_testTube_2);
					if (b == false) {
						push_tubesFunction(s, toppp3, level3_testTube_3);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, toppp3, level3_testTube_3);
					if (c == false) {
						push_tubesFunction(s, toppp3, level3_testTube_3);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, toppp4, level3_testTube_4);
					if (c == false) {
						push_tubesFunction(s, toppp3, level3_testTube_3);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, toppp5, level3_testTube_5);
					if (c == false) {
						push_tubesFunction(s, toppp3, level3_testTube_3);
					}
				}
				else if (a == 6) {
					c = push_tubesFunction(s, toppp6, level3_testTube_6);
					if (c == false) {
						push_tubesFunction(s, toppp3, level3_testTube_3);
					}
				}
				else if (a == 7) {
					c = push_tubesFunction(s, toppp7, level3_testTube_7);
					if (c == false) {
						push_tubesFunction(s, toppp3, level3_testTube_3);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, toppp3, level3_testTube_3);
				}
				break;
			}
			else
				break;

		case 4:

			s = popTubesFunction(toppp4, level3_testTube_4);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1) {
					b = push_tubesFunction(s, toppp1, level3_testTube_1);
					if (b == false) {
						push_tubesFunction(s, toppp4, level3_testTube_4);
					}
				}
				else if (a == 2) {
					b = push_tubesFunction(s, toppp2, level3_testTube_2);
					if (b == false) {
						push_tubesFunction(s, toppp4, level3_testTube_4);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, toppp3, level3_testTube_3);
					if (c == false) {
						push_tubesFunction(s, toppp4, level3_testTube_4);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, toppp4, level3_testTube_4);
					if (c == false) {
						push_tubesFunction(s, toppp4, level3_testTube_4);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, toppp5, level3_testTube_5);
					if (c == false) {
						push_tubesFunction(s, toppp4, level3_testTube_4);
					}
				}
				else if (a == 6) {
					c = push_tubesFunction(s, toppp6, level3_testTube_6);
					if (c == false) {
						push_tubesFunction(s, toppp4, level3_testTube_4);
					}
				}
				else if (a == 7) {
					c = push_tubesFunction(s, toppp7, level3_testTube_7);
					if (c == false) {
						push_tubesFunction(s, toppp4, level3_testTube_4);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, toppp4, level3_testTube_4);
				}
				break;
			}
			else
				break;
		

		case 5:

			s = popTubesFunction(toppp5, level3_testTube_5);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1) {
					b = push_tubesFunction(s, toppp1, level3_testTube_1);
					if (b == false) {
						push_tubesFunction(s, toppp5, level3_testTube_5);
					}
				}
				else if (a == 2) {
					b = push_tubesFunction(s, toppp2, level3_testTube_2);
					if (b == false) {
						push_tubesFunction(s, toppp5, level3_testTube_5);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, toppp3, level3_testTube_3);
					if (c == false) {
						push_tubesFunction(s, toppp5, level3_testTube_5);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, toppp4, level3_testTube_4);
					if (c == false) {
						push_tubesFunction(s, toppp5, level3_testTube_5);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, toppp5, level3_testTube_5);
					if (c == false) {
						push_tubesFunction(s, toppp5, level3_testTube_5);
					}
				}
				else if (a == 6) {
					c = push_tubesFunction(s, toppp6, level3_testTube_6);
					if (c == false) {
						push_tubesFunction(s, toppp5, level3_testTube_5);
					}
				}
				else if (a == 7) {
					c = push_tubesFunction(s, toppp7, level3_testTube_7);
					if (c == false) {
						push_tubesFunction(s, toppp5, level3_testTube_5);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl; 
					push_tubesFunction(s, toppp5, level3_testTube_5);
				}
				break;
			}
			else
				break;
		case 6:

			s = popTubesFunction(toppp6, level3_testTube_6);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1) {
					b = push_tubesFunction(s, toppp6, level3_testTube_6);
					if (b == false) {
						push_tubesFunction(s, toppp6, level3_testTube_6);
					}
				}
				else if (a == 2) {
					b = push_tubesFunction(s, toppp2, level3_testTube_2);
					if (b == false) {
						push_tubesFunction(s, toppp6, level3_testTube_6);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, toppp3, level3_testTube_3);
					if (c == false) {
						push_tubesFunction(s, toppp6, level3_testTube_6);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, toppp4, level3_testTube_4);
					if (c == false) {
						push_tubesFunction(s, toppp6, level3_testTube_6);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, toppp5, level3_testTube_5);
					if (c == false) {
						push_tubesFunction(s, toppp6, level3_testTube_6);
					}
				}
				else if (a == 6) {
					c = push_tubesFunction(s, toppp6, level3_testTube_6);
					if (c == false) {
						push_tubesFunction(s, toppp6, level3_testTube_6);
					}
				}
				else if (a == 7) {
					c = push_tubesFunction(s, toppp7, level3_testTube_7);
					if (c == false) {
						push_tubesFunction(s, toppp6, level3_testTube_6);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, toppp6, level3_testTube_6);
				}
				break;
			}
			else
				break;
		case 7:

			s = popTubesFunction(toppp7, level3_testTube_7);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1) {
					b = push_tubesFunction(s, toppp1, level3_testTube_1);
					if (b == false) {
						push_tubesFunction(s, toppp7, level3_testTube_7);
					}
				}
				else if (a == 2) {
					b = push_tubesFunction(s, toppp2, level3_testTube_2);
					if (b == false) {
						push_tubesFunction(s, toppp7, level3_testTube_7);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, toppp3, level3_testTube_3);
					if (c == false) {
						push_tubesFunction(s, toppp7, level3_testTube_7);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, toppp4, level3_testTube_4);
					if (c == false) {
						push_tubesFunction(s, toppp7, level3_testTube_7);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, toppp5, level3_testTube_5);
					if (c == false) {
						push_tubesFunction(s, toppp7, level3_testTube_7);
					}
				}
				else if (a == 6) {
					c = push_tubesFunction(s, toppp6, level3_testTube_6);
					if (c == false) {
						push_tubesFunction(s, toppp7, level3_testTube_7);
					}
				}
				else if (a == 7) {
					c = push_tubesFunction(s, toppp7, level3_testTube_7);
					if (c == false) {
						push_tubesFunction(s, toppp7, level3_testTube_7);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, toppp7, level3_testTube_7);
				}
				break;
			}
			else
				break;

		default:
			cout << "Invalid Choice, please try again";

		}
		cout << endl;

		moves++;
	} while (choi != 0);
	
	players.moves = players.moves + moves;
	players.levels = "3";
	return completion;
}
bool checkAndPrintMessageLevel2() {
	int matchCount = 0;
	bool done = false;
	if (compareTestTube(level2_testTube_1, test1) || compareTestTube(level2_testTube_2, test1) || compareTestTube(level2_testTube_3, test1)|| compareTestTube(level2_testTube_4, test1)|| compareTestTube(level2_testTube_5, test1))
		matchCount++;

	if (compareTestTube(level2_testTube_1, test2) || compareTestTube(level2_testTube_2, test2) || compareTestTube(level2_testTube_3, test2) || compareTestTube(level2_testTube_4, test2) || compareTestTube(level2_testTube_5, test2))
		matchCount++;

	if (compareTestTube(level2_testTube_1, test3) || compareTestTube(level2_testTube_3, test3) || compareTestTube(level2_testTube_3, test3) || compareTestTube(level2_testTube_4, test3) || compareTestTube(level2_testTube_5, test3))
		matchCount++;

	string i;
	if (matchCount >= 3) {
		cout << " -------------------------------------" << endl;
		cout << "| Congratulations! Level 2 completed! |" << endl;
		cout << " -------------------------------------" << endl;
		cout << "Press any key to go to the main menu" << endl;
		cin >> i;
		done= true;
	}
	return done;
}
bool level_2() {
	players.moves = 0;
x:

	bool completion = false;
	system("CLS");
	int moves = 0;
	int a;
	int b;
	int c;
	int k;
	int choi;

	string s;
	do {
		system("CLS");
		cout << R"(
   ______          __     _______ 
  / __/ /  ___ ___/ /__  / __/ _ \
 _\ \/ _ \/ -_) _  / _ \_\ \/ ___/
___/_//_/\__/\_,_/ .__/___/_/    
                 /_/             
  Welcome to the Level 2!
_______________________________
)" << endl;
		cout << "|   Maximum moves limit for level 2 is 15 moves   |\n";
		cout << "|   You have to sort the balls by colors          |  " << endl;
		cout << "|   press 1 to remove the ball from test tube 1   |" << endl;
		cout << "|   press 2 to remove the ball from test tube 2   |" << endl;
		cout << "|   press 3 to remove the ball from test tube 3   |" << endl;
		cout << "|   press 4 to remove the ball from test tube 4   |" << endl;
		cout << "|   press 5 to remove the ball from test tube 5   |" << endl;
		cout << "|   Press 0 to exit                               |" << endl;

		if (moves > 15)
		{
			cout << "Moves Limit exceeded!\n";
			cout << "Press 1 to add 15 more moves or 0 to exit" << endl;
			cin >> k;
			if (k == 1) {
				goto x;
			}
			else if (k == 0)
			{
				break;
			}
			else {
				cout << "Invalid choice!" << endl;
			}

		}
		bool done = checkAndPrintMessageLevel2();
		if (done == true) {
			completion = true;
			break;
		}
		displayAllTubes_level2();
		cout << "Moves done:" << moves << endl;
		cout << endl;
	
			cout << "Enter your choice ";
		cin >> choi;

		switch (choi) {
		case 1:

			s = popTubesFunction(topp1, level2_testTube_1);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				bool b, c;
				if (a == 1) {
					b = push_tubesFunction(s, topp1, level2_testTube_1);
					if (b == false) {
						push_tubesFunction(s, topp1, level2_testTube_1);
					}
				}
				else if (a == 2) {
					b = push_tubesFunction(s, topp2, level2_testTube_2);
					if (b == false) {
						push_tubesFunction(s, topp1, level2_testTube_1);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, topp3, level2_testTube_3);
					if (c == false) {
						push_tubesFunction(s, topp1, level2_testTube_1);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, topp4, level2_testTube_4);
					if (c == false) {
						push_tubesFunction(s, topp1, level2_testTube_1);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, topp5, level2_testTube_5);
					if (c == false) {
						push_tubesFunction(s, topp1, level2_testTube_1);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, topp1, level2_testTube_1);
				}
				break;
			}
			else
				break;
		case 2:


			s = popTubesFunction(topp2, level2_testTube_2);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;



				if (a == 1) {
					b = push_tubesFunction(s, topp1, level2_testTube_1);
					if (b == false) {
						push_tubesFunction(s, topp2, level2_testTube_2);
					}
				}

				else if (a == 2) {
					b = push_tubesFunction(s, topp2, level2_testTube_2);
					if (b == false) {
						push_tubesFunction(s, topp2, level2_testTube_2);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, topp3, level2_testTube_3);
					if (c == false) {
						push_tubesFunction(s, topp2, level2_testTube_2);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, topp4, level2_testTube_4);
					if (c == false) {
						push_tubesFunction(s, topp2, level2_testTube_2);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, topp5, level2_testTube_5);
					if (c == false) {
						push_tubesFunction(s, topp2, level2_testTube_2);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, topp2, level2_testTube_2);
				}
				break;
			}
			else
				break;
		case 3:


			s = popTubesFunction(topp3, level2_testTube_3);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1) {
					b = push_tubesFunction(s, topp1, level2_testTube_1);
					if (b == false) {
						push_tubesFunction(s, topp3, level2_testTube_3);
					}
				}

				else if (a == 2) {
					b = push_tubesFunction(s, topp2, level2_testTube_2);
					if (b == false) {
						push_tubesFunction(s, topp3, level2_testTube_3);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, topp3, level2_testTube_3);
					if (c == false) {
						push_tubesFunction(s, topp3, level2_testTube_3);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, topp4, level2_testTube_4);
					if (c == false) {
						push_tubesFunction(s, topp3, level2_testTube_3);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, topp5, level2_testTube_5);
					if (c == false) {
						push_tubesFunction(s, topp3, level2_testTube_3);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, topp3, level2_testTube_3);
				}
				break;
			}
			else
				break;
		case 4:
		
			s = popTubesFunction(topp4, level2_testTube_4);

			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;


				if (a == 1) {
					b = push_tubesFunction(s, topp1, level2_testTube_1);
					if (b == false) {
						push_tubesFunction(s, topp4, level2_testTube_4);
					}
				}

				else if (a == 2) {
					b = push_tubesFunction(s, topp2, level2_testTube_2);
					if (b == false) {
						push_tubesFunction(s, topp4, level2_testTube_4);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, topp3, level2_testTube_3);
					if (c == false) {
						push_tubesFunction(s, topp4, level2_testTube_4);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, topp4, level2_testTube_4);
					if (c == false) {
						push_tubesFunction(s, topp3, level2_testTube_3);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, topp5, level2_testTube_5);
					if (c == false) {
						push_tubesFunction(s, topp4, level2_testTube_4);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, topp4, level2_testTube_4);
				}
				break;
			}
			else
				break;
		case 5:


			s = popTubesFunction(topp5, level2_testTube_5);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1) {
					b = push_tubesFunction(s, topp1, level2_testTube_1);
					if (b == false) {
						push_tubesFunction(s, topp5, level2_testTube_5);
					}
				}

				else if (a == 2) {
					b = push_tubesFunction(s, topp2, level2_testTube_2);
					if (b == false) {
						push_tubesFunction(s, topp5, level2_testTube_5);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, topp3, level2_testTube_3);
					if (c == false) {
						push_tubesFunction(s, topp5, level2_testTube_5);
					}
				}
				else if (a == 4) {
					c = push_tubesFunction(s, topp4, level2_testTube_4);
					if (c == false) {
						push_tubesFunction(s, topp5, level2_testTube_5);
					}
				}
				else if (a == 5) {
					c = push_tubesFunction(s, topp5, level2_testTube_5);
					if (c == false) {
						push_tubesFunction(s, topp5, level2_testTube_5);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, topp5, level2_testTube_5);
				}
				break;
			}
			else
				break;
		default:
			cout << "Invalid Choice, please try again";

		}
		cout << endl;

		moves++;
	} while (choi != 0);
	
	players.moves = players.moves+ moves;
	players.levels = "2";
	return completion;
}
void checkLevel1Completion() {
	// Check if level1_testTube_1 and level1_testTube_2 have the same colors
	if (std::equal(std::begin(level1_testTube_1), std::end(level1_testTube_1), std::begin(level1_testTube_2))) {
		// Check if level1_testTube_1 or level1_testTube_2 matches level1_testTube_3
		if (std::equal(std::begin(level1_testTube_1), std::end(level1_testTube_1), std::begin(level1_testTube_3)) ||
			std::equal(std::begin(level1_testTube_2), std::end(level1_testTube_2), std::begin(level1_testTube_3))) {
			std::cout << "Congratulations! Level 1 completed.\n";
		}
	}
}
bool level_1() {
	players.moves = 0;
x:
	
	bool completion = false;
	system("CLS");
	int moves = 0;
	int a;
	int b;
	int c;
	int k;
	int choi;

	do {
		system("CLS");
	

		cout << R"(
   ______          __     _______ 
  / __/ /  ___ ___/ /__  / __/ _ \
 _\ \/ _ \/ -_) _  / _ \_\ \/ ___/
___/_//_/\__/\_,_/ .__/___/_/    
                 /_/             
  Welcome to the Level 1!
_______________________________
)" << endl;
		
		int o;
		string s;
		cout << "|   Maximum moves limit for level 1 is 10 moves   |\n";
		cout << "|   You have to sort the balls by colors          |  " << endl;
		cout << "|   press 1 to remove the ball from test tube 1   |" << endl;
		cout << "|   press 2 to remove the ball from test tube 2   |" << endl;
		cout << "|   press 3 to remove the ball from test tube 3   |" << endl;
		cout << "|   Press 0 to exit                               |" << endl;
		cout << endl;
		if (moves > 10)
		{
			cout << "Moves Limit exceeded!\n";
			cout << "Press 1 to add 10 more moves or 0 to exit" << endl;
			cin >> k;
			if (k == 1) {
				goto x;
			}
			else if (k == 0)
			{
				break;
			}
			else {
				cout << "Invalid choice!" << endl;
			}
		}
		bool done;
		done = checkAndPrintMessage();
		if (done == true) {
			completion = true;
			break;
		}
		displayAllTubes_level1();
		cout << "Moves done:" << moves << endl;
		cout << endl;

		cout << "Enter your choice ";
		cin >> choi;

		switch (choi) {
		case 1:
			
			s = popTubesFunction(top1, level1_testTube_1);
			if (boolean == true)
			{
				
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;
				bool b, c;
				if (a == 2) {
					b = push_tubesFunction(s, top2, level1_testTube_2);
					if (b == false) {
						push_tubesFunction(s, top1, level1_testTube_1);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, top3, level1_testTube_3);
					if (c == false) {
						push_tubesFunction(s, top1, level1_testTube_1);
					}
				}
				else if (a == 1) {
					c = push_tubesFunction(s, top1, level1_testTube_1);
					if (c == false) {
						push_tubesFunction(s, top1, level1_testTube_1);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, top1, level1_testTube_1);
				}
				break;
			}
			else {
				break;
			}
		case 2:

			s = popTubesFunction(top2, level1_testTube_2);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1)
				{
					b = push_tubesFunction(s, top1, level1_testTube_1);
					if (b == false) {
						push_tubesFunction(s, top2, level1_testTube_2);
					}
				}
				else if (a == 2) {
					c = push_tubesFunction(s, top2, level1_testTube_2);
					if (c == false) {
						push_tubesFunction(s, top2, level1_testTube_2);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, top3, level1_testTube_3);
					if (c == false) {
						push_tubesFunction(s, top2, level1_testTube_2);
					}
				}
				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, top2, level1_testTube_2);
				}
				break;
			}
			else
				break;

		case 3:

			s = popTubesFunction(top3, level1_testTube_3);
			if (boolean == true) {
				cout << "Enter number of the test tube to enter the ball" << endl;
				cin >> a;

				if (a == 1)
				{
					b = push_tubesFunction(s, top1, level1_testTube_1);
					if (b == false) {
						push_tubesFunction(s, top3, level1_testTube_3);
					}
				}
				else if (a == 2) {
					c = push_tubesFunction(s, top2, level1_testTube_2);
					if (c == false) {
						push_tubesFunction(s, top3, level1_testTube_3);
					}
				}
				else if (a == 3) {
					c = push_tubesFunction(s, top3, level1_testTube_3);
					if (c == false) {
						push_tubesFunction(s, top3, level1_testTube_3);
					}
				}

				else
				{
					cout << "Enter the correct number" << endl;
					push_tubesFunction(s, top3, level1_testTube_3);
				}
			}
			else
				break;
		
		default:
			cout << "Invalid Choice, please try again";

		}
		cout << endl;

		moves++;
		checkLevel1Completion();
	} while (choi != 0);
	players.moves = players.moves+ moves;
	players.levels = "1";
	return completion;
}
void main_menu() {
	
	cout << R"(
                                               ______          __     _______ 
                                              / __/ /  ___ ___/ /__  / __/ _ \
                                             _\ \/ _ \/ -_) _  / _ \_\ \/ ___/
                                            /___/_//_/\__/\_,_/ .__/___/_/    
                                                             /_/               
                                            _______________________________
)" << endl;
	cout << "                           ----------------------------------------------------------------\n";
	cout << "                                                    Color Sorter Game                       \n";
	cout << "                           ----------------------------------------------------------------\n";
	cout << "                           | The rules are:\n" ;
	cout << "                           | 1. You need to arrange balls of different colors into separate test tubes.\n";
	cout << "                           | 2. A single test tube can hold upto 4 balls. \n";
	cout << "                           | 3. You can only remove the balls from the top.\n";
	cout << "                           | 4. There are three different levels of different difficulty.\n";
	cout << "                           | 3. 5. On each level you will have limited moves. \n";

	cout << "                                           Enjoy Playing           " << endl;
	cout << "                           | 1. Level 1  ------------------   Easy  " << endl;
	cout << "                           | 2. Level 2  ------------------   Medium" << endl;
	cout << "                           | 3. Level 3  ------------------   Hard  " << endl;
	cout << "                           | 4. Display Scoreboard                  " << endl;
}
void Scoreboard_update() {
	ofstream fout;
	ifstream fin;
	fin.open("filename.txt");
	fout.open("filename.txt", ios::app);
	if (fin.is_open())
		fout <<  players.name << " " << players.moves << " " << players.levels << "\n";
	fin.close();
	fout.close();	
}
void details() {
	cout << "Enter PLayers Name:" << endl;
	cin >> players.name;
	cout << "Enter PLayers Moves:" << endl;
	cin >> players.moves;
	cout << "Enter PLayers Levels Cleared:" << endl;
	cin >> players.levels;
}
void displayScoreboard(const string& filename) {
	system("CLS");
	string chic;
	ifstream inputFile(filename);
	if (inputFile.is_open()) {
		string name;
		int moves;
		int levels;

		cout << R"(------------------------------------------------------
                    Scoreboard 
------------------------------------------------------)" << endl;
		cout << "Level 1 <= 10       Level 2 <= 15       Level 3 <= 25" << endl;
	
		cout << "Name \t\t" << " Moves " << "\t\t" << " Levels Cleared" << '\n';
		
		while (inputFile >> name >> moves >> levels) {
			cout << "";
			cout << "" << name << "\t\t  " << moves << "\t\t       " << levels << '\n';
		}
		inputFile.close();
	}
	else {
		cout << "Failed to open the file.\n";
	}
	ofstream outputFile("scoreboard_output.txt");
	if (outputFile.is_open()) {
		ifstream inputFile(filename);

		string line;
		while (getline(inputFile, line)) {
			outputFile << line << '\n';
		}
		outputFile.close();
	}
	else {
		cout << "Failed to create the output file.\n";
	}
	cout << "Enter any key for the main menu:";
	cin >> chic;
}
void updateFile(const string& filename, const string& wordToUpdate, const string& newLine) {
	ifstream inputFile(filename);
	if (!inputFile) {
		cerr << "Failed to open the file: " << filename << endl;
		return;
	}

	ofstream tempFile("temp.txt");
	if (!tempFile) {
		cerr << "Failed to create temporary file." <<endl;
		inputFile.close();
		return;
	}

	string line;
	while (getline(inputFile, line)) {
		if (line.find(wordToUpdate) != string::npos) {
			
			line = newLine;
		}
		tempFile << line << endl;
	}

	inputFile.close();
	tempFile.close();

	if (remove(filename.c_str()) != 0) {
		cerr << "Failed to remove the original file." <<endl;
		return;
	}

	if (rename("temp.txt", filename.c_str()) != 0) {
		cerr << "Failed to rename the temporary file." << endl;
		return;
	}
}



void main() {
	string filename = "filename.txt";
	bool completion1 = false, completion2= false, completion3 = false;
	int choic;
	cout << "Enter players name(it must be less than 7 characters):" << endl;
	cin >> players.name;
	players.levels = "0";
	players.moves = 0;
	Scoreboard_update();
	do {
		//i:
		system("CLS");
		main_menu();

		cout << "Enter choice" << endl;
		cin >> choic;
		
		switch (choic) {
		case 1:
			completion1 = level_1();
			break;

		case 2:
			completion2 = level_2();
			break;

		case 3:
			completion3 = level_3();
			break;
		case 4:
			displayScoreboard(filename);
			cout << endl;
			break;
		default:
			cout << "Invalid Choice, please try again!" << endl;
			//cin >> choic;
			break;

		}
		if (completion1 == true || completion2 == true || completion3 == true) {
			string newLine = players.name + " " + to_string(players.moves) + " " + players.levels;
			updateFile(filename, players.name, newLine);
		}
	} while (choic != 0);
	

	system("pause");
}