#include <iostream>
#include <string>
using namespace std;
int main()
{
	int count = 0, cycle = 0;
	string elements[9] = { "1","2","3","4","5","6","7","8","9" };
	string change = "X", choice = "0";
	cout << "Welcome to tic tac toe! The grid at present is : " << "\n";
	for (cycle = 0; cycle < 9; cycle++)
	{
		if (cycle % 3 == 0)
		{
			cout << "\n";
		}
		cout << elements[cycle];
	}
	while (count < 9)
	{
		if (count % 2 == 0)
		{
			change = "X";
			cout << "\n" << "Enter the number you want to change : ";
			cin >> choice;
			for (cycle = 0; cycle < 9; cycle++)
			{
				if (choice == elements[cycle])
				{
					elements[cycle] = change;
					for (cycle = 0; cycle < 9; cycle++)
					{
						if (cycle % 3 == 0)
						{
							cout << "\n";
						}
						cout << elements[cycle];
					}
					count = count + 1;
				}
			}
		}
		else
		{
			change = "O";
			cout << "\n" << "Enter the number you want to change : ";
			cin >> choice;
			for (cycle = 0; cycle < 9; cycle++)
			{
				if (choice == elements[cycle])
				{
					elements[cycle] = change;
					for (cycle = 0; cycle < 9; cycle++)
					{
						if (cycle % 3 == 0)
						{
							cout << "\n";
						}
						cout << elements[cycle];
					}
					count = count + 1;
				}
			}
		}
		if ((elements[0] == elements[1]) && (elements[0] == elements[2]))
		{
			cout << "\n" << "Horizontal Victory! " << change << " Wins the game!";
			break;
		}
		else
		{
			if ((elements[3] == elements[4]) && (elements[3] == elements[5]))
			{
				cout << "\n" << "Horizontal Victory! " << change << " Wins the game!";
				break;
			}
			else
			{
				if ((elements[6] == elements[7]) && (elements[6] == elements[8]))
				{
					cout << "\n" << "Horizontal Victory! " << change << " Wins the game!";
					break;
				}
			}
		}
		if ((elements[0] == elements[3]) && (elements[0] == elements[6]))
		{
			cout << "\n" << "Vertical Victory! " << change << " Wins the game!";
			break;
		}
		else
		{
			if ((elements[1] == elements[4]) && (elements[1] == elements[7]))
			{
				cout << "\n" << "Vertical Victory! " << change << " Wins the game!";
				break;
            }
			else
			{
				if ((elements[2] == elements[5]) && (elements[2] == elements[8]))
				{
					cout << "\n" << "Vertical Victory! " << change <<" Wins the game!";
					break;
				}
			}
		}
		if ((elements[0] == elements[4]) && (elements[0] == elements[8]))
		{
			cout << "\n" << "Diagonal Victory! " << change << " Wins the game!";
			break;
		}
		else
		{
		   if ((elements[2] == elements[4]) && (elements[2] == elements[6]))
		    {
			   cout << "\n" << "Diagonal Victory! " << change << " Wins the game!";
			   break;
		    }
		}
	}
}
