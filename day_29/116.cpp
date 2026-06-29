// Write a program to Create inventory management system.
#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
    int itemId;
    string itemName;
    int quantity;
    float price;
};

vector<Item> items;

void addItem()
{
    Item i;

    cout << "Enter Item ID: ";
    cin >> i.itemId;

    cout << "Enter Item Name: ";
    cin >> i.itemName;

    cout << "Enter Quantity: ";
    cin >> i.quantity;

    cout << "Enter Price: ";
    cin >> i.price;

    items.push_back(i);

    cout << "Item Added Successfully." << endl;
}

void viewItems()
{
    if (items.size() == 0)
    {
        cout << "No Items Found." << endl;
    }
    else
    {
        cout << "\nInventory Details\n";

        for (int i = 0; i < items.size(); i++)
        {
            cout << "\nItem ID: " << items[i].itemId << endl;
            cout << "Item Name: " << items[i].itemName << endl;
            cout << "Quantity: " << items[i].quantity << endl;
            cout << "Price: " << items[i].price << endl;
        }
    }
}

void searchItem()
{
    int id;
    bool found = false;

    cout << "Enter Item ID to Search: ";
    cin >> id;

    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].itemId == id)
        {
            cout << "\nItem Found\n";
            cout << "Item ID: " << items[i].itemId << endl;
            cout << "Item Name: " << items[i].itemName << endl;
            cout << "Quantity: " << items[i].quantity << endl;
            cout << "Price: " << items[i].price << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Item Not Found." << endl;
    }
}

void updateItem()
{
    int id;
    bool found = false;

    cout << "Enter Item ID to Update: ";
    cin >> id;

    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].itemId == id)
        {
            cout << "Enter New Item Name: ";
            cin >> items[i].itemName;

            cout << "Enter New Quantity: ";
            cin >> items[i].quantity;

            cout << "Enter New Price: ";
            cin >> items[i].price;

            cout << "Item Updated Successfully." << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Item Not Found." << endl;
    }
}

void deleteItem()
{
    int id;
    bool found = false;

    cout << "Enter Item ID to Delete: ";
    cin >> id;

    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].itemId == id)
        {
            items.erase(items.begin() + i);

            cout << "Item Deleted Successfully." << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Item Not Found." << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n      INVENTORY MANAGEMENT SYSTEM";
        cout << "\n1. Add Item";
        cout << "\n2. View Items";
        cout << "\n3. Search Item";
        cout << "\n4. Update Item";
        cout << "\n5. Delete Item";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addItem();
            break;

        case 2:
            viewItems();
            break;

        case 3:
            searchItem();
            break;

        case 4:
            updateItem();
            break;

        case 5:
            deleteItem();
            break;

        case 6:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}