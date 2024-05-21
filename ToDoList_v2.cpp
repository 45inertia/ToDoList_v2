// The purpose of this program is to iterate of version 1 of this project. 
// The aims are as follows:
// 1) Create an item class that has: id, title, description, days (how many days until deadline).
// 2) Split previous functionality into functions. 

#include <iostream>

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
				std::cin.ignore();
				addItemToList(itemsToAdd);

				break;
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

int addItemToList(int itemsToAdd) {

}

int removeItemFromList() {

}
