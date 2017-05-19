#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<ctime>

#include<vector>
using std::vector;

#include<string>
using std::string;

#include<map>
using std::map;

enum choice { unknown, rock, paper, scissors };
map<string, choice> choices;

//Check if you are the winner by comparing the user and cpu's choices,
bool is_winner(choice eu_choice, choice ecpu_choice) {
	switch (eu_choice) {
	case unknown:
		return false;
		break;
	case rock:
		switch (ecpu_choice) {
		case unknown:
			return false;
			break;
		case rock:
			return false;
			break;
		case paper:
			return false;
			break;
		case scissors:
			return true;
			break;
		default:
			return false;
			break;
		}
		break;
	case paper:
		switch (ecpu_choice) {
		case unknown:
			return false;
			break;
		case rock:
			return true;
			break;
		case paper:
			return false;
			break;
		case scissors:
			return false;
			break;
		default:
			return false;
			break;
		}
		break;
	case scissors:
		switch (ecpu_choice) {
		case unknown:
			return false;
			break;
		case rock:
			return false;
			break;
		case paper:
			return true;
			break;
		case scissors:
			return false;
			break;
		default:
			return false;
			break;
		}
		break;
	default:
		return false;
		break;
	}
}
