#include<iostream>
#include<iomanip>
using namespace std;

static string items[100];
int i = 0;
static int quantity_store[100];
static int quantity_num[100];
static int price[100];

int disp_starters()
{
    int op,n;
    int count = 0;

    do
    {
        cout<<"\n                STARTERS\n\n";
        cout<<left<<setw(25)<<"1.Mixed Veg crispies"<<"Rs 120\n"<<left<<setw(25)<<"2.Chicken Tikka"<<"Rs 200\n"<<left<<setw(25)<<"3.Fish Fry"<<"Rs 220\n"<<left<<setw(25)<<"4.Mutton Curry"<<"Rs 200\n5.Exit\nEnter your choice: ";
        cin>>op;

        if(op == 1)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*120;
            items[i] = "Mixed Veg crispies";
            quantity_store[i] = n*120;
            quantity_num[i] = n;
            price[i] = 120;
            i++;
        }
        else if(op == 2)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*200;
            items[i] = "Chicken Tikka";
            quantity_store[i] = n*200;
            quantity_num[i] = n;
            price[i] = 200;
            i++;
        }
        else if(op == 3)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*220;
            items[i] = "Fish Fry";
            quantity_store[i] = n*220;
            quantity_num[i] = n;
            price[i] = 220;
            i++;
        }
        else if(op == 4)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*200;
            items[i] = "Mutton Curry";
            quantity_store[i] = n*200;
            quantity_num[i] = n;
            price[i] = 200;
            i++;
        }
          
     } while (op <= 4);
    
    return count;
}

string *items_list()
{
    return items;
}

int counter()
{
    return i;
}

int *quantity()
{
    return quantity_store;
}

int *quantity_number()
{
    return quantity_num;
}

int *prices()
{
    return price;
}