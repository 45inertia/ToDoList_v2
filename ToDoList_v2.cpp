// The purpose of this program is to iterate of version 1 of this project. 
// The aims are as follows:
// 1) Create an item class that has: id, title, description, days (how many days until deadline).
// 2) Split previous functionality into functions. 

// NEED TO THINK ABOUT AND PLAN BEFORE THE STRUCTURE OF THE FUNCTIONS AND HOW THEY INTERACT
// WITH EACHOTHER

#include <iostream>
#include <string>

std::string itemArray[10];

int main() {
	int endCheck{ 1 };
	int menuNum{ 0 };
	int numItems{ 0 };
	int itemsToAdd{};
	int removeChoice{};

	while (endCheck == 1) {
		std::cout << "\n(1) View List\n";
		std::cout << "(2) Add items to list\n";
		std::cout << "(3) Remove item from list\n";
		std::cout << "(4) Exit Program\n";
		std::cout << "\nPlease select your option: ";
		std::cin >> menuNum;
		switch (menuNum) {
			case 1: 
				displayList(numItems);
				break;
			case 2:
				std::cout << "\nHow many items would you like to add: ";
				std::cin >> itemsToAdd;
				std::cin.ignore();					// ignores the newline character left in the buffer.
				if (numItems + itemsToAdd > 10) {
					std::cout << "Cannot add that many items. Maximum capacity is 10.\n";
					break;
				} else {
					for (int i = 0; i < itemsToAdd; i++) {
						std::string inputString{};
						std::cout << "\nPlease enter a string: ";
						std::getline(std::cin, inputString);
						addItemToList(inputString, numItems);
						numItems++;
					}
				break;
				}
			case 3:
				removeItemFromList();
				break;
			case 4:
				endCheck = 0;
				break;
			default:
				std::cout << "\nPlease enter a number from 1 - 4!\n";
				break;
		}

	}



	return 0;
}

void displayList(int numItems) {
	if (numItems == 0) {
		std::cout << "\nList is empty";
	} else {
		std::cout << "\nYour List:\n";
		for (int i = 0; i < numItems; i++) {
			std::cout << '\n' << i + 1 << ": " << itemArray[i];
		}
		std::cout << '\n';
	}
}

void addItemToList(std::string inputString, int numItems) {
	itemArray[numItems] = inputString;
}

int removeItemFromList() {

}
