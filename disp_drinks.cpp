#include<iostream>
#include<iomanip>
using namespace std;

static string items[100];
int k = 0;
static int quantity_store[100];
static int quantity_num[100];
static int price[100];

int disp_drinks()
{
    int op,n;
    int count = 0;
    do 
    {
        cout<<"\n     DRINKS\n\n"<<left<<setw(14)<<"1.Sprite"<<"Rs 40\n"<<left<<setw(14)<<"2.Seven Up"<<"Rs 40\n"<<left<<setw(14)<<"3.Coca Cola"<<"Rs 50\n"<<left<<setw(14)<<"4.Pepsi"<<"Rs 50\n5.Exit\nEnter your choice: ";
        cin>>op;

        if(op == 1)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*40;
            items[k] = "Sprite";
            quantity_store[k] = n*40;
            quantity_num[k] = n;
            price[k] = 40;
            k++;
        }
        else if(op == 2)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*40;
            items[k] = "Seven Up";
            quantity_store[k] = n*40;
            quantity_num[k] = n;
            price[k] = 40;
            k++;
        }
        else if(op == 3)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*50;
            items[k] = "Coca Cola";
            quantity_store[k] = n*50;
            quantity_num[k] = n;
            price[k] = 40;
            k++;
        }
        else if(op == 4)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*50;
            items[k] = "Pepsi";
            quantity_store[k] = n*50;
            quantity_num[k] = n;
            price[k] = 40;
            k++;
        }

    } while(op <= 4);
        
    return count;
}

string *items_list2()
{
    return items;
}

int counter2()
{
    return k;
}

int *quantity2()
{
    return quantity_store;
}

int *quantity_number2()
{
    return quantity_num;
}

int *prices2()
{
    return price;
}