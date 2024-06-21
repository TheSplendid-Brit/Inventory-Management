#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class inventoryItem {
	private:
		string itemName;
		int itemQuantity;
		double itemPrice;
		int itemID;
	public:
		string getItemName();
		int getItemQuantity();
		double getItemPrice();
		int getItemID();

		void setItemName(string name);
		void setItemQuantity(int quantity);
		void setItemPrice(double price);
		void setItemID(int id);

		void displayItem();
};

string inventoryItem::getItemName()
{
	return itemName;
}

int inventoryItem::getItemQuantity()
{
	return itemQuantity;
}

double inventoryItem::getItemPrice()
{
	return itemPrice;
}

int inventoryItem::getItemID()
{
	return itemID;
}

void inventoryItem::setItemName(string name)
{
	itemName = name;
}

void inventoryItem::setItemQuantity(int quantity)
{
	itemQuantity = quantity;
}

void inventoryItem::setItemPrice(double price)
{
	itemPrice = price;
}

void inventoryItem::setItemID(int id)
{
	itemID = id;
}

void inventoryItem::displayItem()
{
	cout << "Item ID: " << itemID << endl;
	cout << "Item Name: " << itemName << endl;
	cout << "Item Quantity: " << itemQuantity << endl;
	cout << "Item Price: " << itemPrice << endl;
}

void validateInt(int& num)
{
	while (cin.fail() || num < 1 || num > 8)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input. Please enter a number between 1 and 8: ";
		cin >> num;
	}
}

void mainMenu()
{
	cout << "Inventory Management System" << endl;
	cout << "1. Add Item" << endl;
	cout << "2. Update Item" << endl;
	cout << "3. Delete Item" << endl;
	cout << "4. View Inventory" << endl;
	cout << "5. View Low Stock" << endl;
	cout << "6. View total value of inventory" << endl;
	cout << "7. Exit" << endl;
	cout << "Enter your choice: ";
}

int main()
{
 	vector<inventoryItem> inventory;
	int choice;

	do {
		mainMenu();
		validateInt(choice);

		switch (choice)
		{
			case 1:
				// Add Item function
				break;
			case 2:
				// Update Item function
				break;
			case 3:
				// Delete Item function
				break;
			case 4:
				// View Inventory function
				break;
			case 5:
				// View Low Stock function
				break;
			case 6:
				// View total value of inventory function
				break;
			case 7:
				// Exit
				break;
			default:
				cout << "Invalid input or error occurred. Please enter a number between 1 and 7." << endl;
				break;
		}

	} while (choice != 7);
    
}
