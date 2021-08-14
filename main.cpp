#include<iostream>
#include "header.h"
#include<iomanip>
using namespace std;

int op;
int bill_count = 0;

string *items_list();
string *items_list2();
string *items_list3();
string *items_list4();

string *p, *r, *s, *t;

int *u, *v, *w, *z, *x, *y, *c, *d, *e, *f, *g, *h;

int main()
{
    do
    {
        cout<<"\n            MENU\n\n1.Starters\n2.Drinks\n3.Main Course\n4.Desserts\n5.Total Bill\nEnter your choice: ";
        cin>>op;
        
        if(op == 1)
        {
           bill_count = bill_count + disp_starters();
           p = items_list();
           u = quantity();
           x = quantity_number();
           e = prices();
        }
        else if(op ==2)
        {
            bill_count = bill_count + disp_drinks();
            r = items_list2();
            v = quantity2();
            y = quantity_number2();
            f = prices2();

        }
        else if(op == 3)
        {
            bill_count = bill_count + disp_main_course();
            s = items_list3();
            w = quantity3();
            c = quantity_number3();
            g = prices3();
        }
        else if(op == 4)
        {
            bill_count = bill_count + disp_desserts();
            t = items_list4();
            z = quantity4();
            d = quantity_number4();
            h = prices4();
        }
        else if(op == 5)
        {
            cout<<"\n__________________________________________________________\n";
            cout<<"\n                            BILL\n\n";
            cout<<left<<setw(25)<<"Food Items"<<left<<setw(10)<<" Price"<<left<<setw(12)<<"Quantity"<<left<<setw(11)<<"Total Price\n\n";
            for(int i=0; i<counter(); i++)
            {
                cout<<left<<setw(25)<<*(p+i)<<" Rs "<<left<<setw(10)<<*(e+i)<<left<<setw(10)<<*(x+i)<<"Rs "<<*(u+i)<<"\n";
            }
            for(int j=0; j<counter2(); j++)
            {
                int temp, incr = 0;
                temp = *(v+j);
                while(temp > 0)
                {
                    ++incr;
                    temp = temp / 10;
                }
                if(incr == 2)
                    cout<<left<<setw(25)<<*(r+j)<<" Rs  "<<left<<setw(9)<<*(f+j)<<left<<setw(10)<<*(y+j)<<"Rs  "<<*(v+j)<<"\n";
                else
                    cout<<left<<setw(25)<<*(r+j)<<" Rs  "<<left<<setw(9)<<*(f+j)<<left<<setw(10)<<*(y+j)<<"Rs "<<*(v+j)<<"\n";
            }
            for(int a=0; a<counter3(); a++)
            {
                cout<<left<<setw(25)<<*(s+a)<<" Rs "<<left<<setw(10)<<*(g+a)<<left<<setw(10)<<*(c+a)<<"Rs "<<*(w+a)<<"\n";
            }
            for(int b=0; b<counter4(); b++)
            {
                cout<<left<<setw(25)<<*(t+b)<<" Rs "<<left<<setw(10)<<*(h+b)<<left<<setw(10)<<*(d+b)<<"Rs "<<*(z+b)<<"\n";
            }

            cout<<"__________________________________________________________\n";
            cout<<left<<setw(48)<<"TOTAL BILL"<<" Rs "<<bill_count<<"\n";
        }
    
    } while(op < 5);

    return 0;
}