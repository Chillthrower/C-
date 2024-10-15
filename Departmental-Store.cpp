#include <bits/stdc++.h>
using namespace std;

class Item
{
private:
    float price;
    int code;

public:
    Item(float p, int c) 
    {
        price = p;
        code = c;
    }

    float getPrice() 
    {
        return price;
    }

    int getCode() 
    {
        return code;
    }

    void displayItem()
    {
        cout << "Price : " << price << endl;
        cout << "Code : " << code << endl;
    }
};

class ShoppingList
{

    private:
        vector<Item> items; 

    public:
        void addItem(int c, float p)
        {
            items.push_back(Item(p, c));
        }

        void deleteItem(int c)
        {
            for (auto it = items.begin(); it != items.end(); it++)
            {
                if (it->getCode() == c)
                {
                    items.erase(it);
                    break;
                }
            }
        }

        void displayItems()
        {
            for (auto &item : items)
            {
                item.displayItem();
            }
        }

        void calculateTotal()
        {
            float sum = 0;
            for (auto &item : items)
            {
                sum += item.getPrice();
            }

            cout << "Total price : " << sum << endl;
        }
};

int main()
{
    ShoppingList list;
    list.addItem(101, 50.5);
    list.addItem(102, 75.0);
    list.addItem(103, 100.25);

    cout << "Items in the list:" << endl;
    list.displayItems();

    list.deleteItem(102);
    cout << "\nAfter deleting an item:" << endl;
    list.displayItems();

    list.calculateTotal();
    return 0;
}
