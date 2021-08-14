#include<iostream>
#include<iomanip>
using namespace std;

static string items[100];
int o = 0;
static int quantity_store[100];
static int quantity_num[100];
static int price[100];

int disp_desserts()
{
    int op,n;
    int count = 0;
    do
    {
        cout<<"\n       DESSERTS\n\n"<<left<<setw(27)<<"1.Chocolate Moose"<<"Rs 120\n"<<left<<setw(27)<<"2.Strawberry Moose"<<"Rs 120\n"<<left<<setw(27)<<"3.Vanilla Ice-Cream"<<"Rs 120\n"<<left<<setw(27)<<"4.Butterscotch Ice-Cream"<<"Rs 120\n5.Exit\nEnter your choice: ";
        cin>>op;

        if(op == 1)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*120;
            items[o] = "Chocolate Moose";
            quantity_store[o] = n*120;
            quantity_num[o] = n;
            price[o] = 120;
            o++;
        }
        else if(op == 2)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*120;
            items[o] = "Strawberry Moose";
            quantity_store[o] = n*120;
            quantity_num[o] = n;
            price[o] = 120;
            o++;
        }
        else if(op == 3)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*120;
            items[o] = "Vanilla Ice-Cream";
            quantity_store[o] = n*120;
            quantity_num[o] = n;
            price[o] = 120;
            o++;
        }
        else if(op == 4)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*120;
            items[o] = "Butterscotch Ice-Cream";
            quantity_store[o] = n*120;
            quantity_num[o] = n;
            price[o] = 120;
            o++;
        }

    } while(op <= 4);

    return count;
}

string *items_list4()
{
    return items;
}

int counter4()
{
    return o;
}

int *quantity4()
{
    return quantity_store;
}

int *quantity_number4()
{
    return quantity_num;
}

int *prices4()
{
    return price;
}