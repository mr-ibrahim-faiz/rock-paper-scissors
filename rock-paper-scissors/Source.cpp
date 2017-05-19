#include "Header.h"

int main() {
	vector<string> scpu_choices = { "rock", "paper", "scissors" };

	string su_choice{ "" };
	string scpu_choice{ "" };
	choice eu_choice{ unknown };
	choice ecpu_choice {unknown};
	int i {0};

	choices["rock"] = rock;
	choices["paper"] = paper;
	choices["scissors"] = scissors;

	cout << "rock, paper, scissors ?" << endl;

	while (cin >> su_choice) {
		eu_choice = choices[su_choice];

		if (eu_choice != unknown) {
			srand(time(NULL));
			i = rand() % 3;
			scpu_choice = scpu_choices[i];
			ecpu_choice = choices[scpu_choice];

			cout << su_choice << "\t" << scpu_choice << endl;
			if (eu_choice != ecpu_choice)
				cout << ((is_winner(eu_choice, ecpu_choice)) ? "You won !" : "You lost !") << endl;
			else
				cout << "Draw !" << endl;
		}
		else
			cout << "Please enter a valid choice !" << endl;
		cout << "\nrock, paper, scissors ?" << endl;
	}


	return 0;
}