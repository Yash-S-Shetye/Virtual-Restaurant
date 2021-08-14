#include<iostream>
#include<iomanip>
using namespace std;

static string items[100];
int l =  0;
static int quantity_store[100];
static int quantity_num[100];
static int price[100];

int disp_main_course()
{
    int op,n;
    int count = 0;
    do
    {
        cout<<"\n     MAIN COURSE\n\n"<<left<<setw(12)<<"1.Dal"<<"Rs 100\n"<<left<<setw(12)<<"2.Roti"<<"Rs 120\n"<<left<<setw(12)<<"3.Rice"<<"Rs 120\n"<<left<<setw(12)<<"4.Noodles"<<"Rs 220\n5.Exit\nEnter your choice: ";
        cin>>op;

        if(op == 1)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*100;
            items[l] = "Dal";
            quantity_store[l] = n*100;
            quantity_num[l] = n;
            price[l] = 100;
            l++;
        }
        else if(op == 2)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*120;
            items[l] = "Roti";
            quantity_store[l] = n*120;
            quantity_num[l] = n;
            price[l] = 120;
            l++;
        }
        else if(op == 3)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*120;
            items[l] = "Rice";
            quantity_store[l] = n*120;
            quantity_num[l] = n;
            price[l] = 120;
            l++;
        }
        else if(op == 4)
        {
            cout<<"Please enter the quantity: ";
            cin>>n;
            count = count + n*220;
            items[l] = "Noodles";
            quantity_store[l] = n*220;
            quantity_num[l] = n;
            price[l] = 220;
            l++;
        }

    } while(op <= 4);
    
    return count;
}

string *items_list3()
{
    return items;
}

int counter3()
{
    return l;
}

int *quantity3()
{
    return quantity_store;
}

int *quantity_number3()
{
    return quantity_num;
}

int *prices3()
{
    return price;
}