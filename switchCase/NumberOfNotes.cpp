//Given a total amount, calculate the number of 100 Rs notes, 50 Rs notes, 20 Rs notes and 1 re notes required.
#include<iostream>
using namespace std;
int main()
{
    int total_amt;
    cout<<"Enter total amount"<<endl;
    cin>>total_amt;
    int n100,n50,n20,n1;
    switch (total_amt>=100)
        {
        case 1: {
              n100= (total_amt/100);
              cout<<"Total amount has "<<n100<<" "<<" 100 Rs notes"<<endl;
              total_amt -= n100*100;
              break;
        }
    }
    switch(total_amt<100 && total_amt>=50)
        {
        case 1: {
              n50= (total_amt/50);
              cout<<"Total amount has "<<n50<<" "<<" 50 Rs notes"<<endl;
              total_amt -= n50*50;
              break;
        }
    }
    switch(total_amt<50 && total_amt>=20)
        {
        case 1: {
              n20= (total_amt/20);
              cout<<"Total amount has "<<n20<<" "<<" 20 Rs notes"<<endl;
              total_amt -= n20*20;
              break;
        }
    }
    switch(total_amt<20 && total_amt>=1)
        {
        case 1: {
              n1= (total_amt/1);
              cout<<"Total amount has "<<n1<<" "<<" 1 Re notes."<<endl;
              total_amt -= n1*1;
              break;
        }
    }
}