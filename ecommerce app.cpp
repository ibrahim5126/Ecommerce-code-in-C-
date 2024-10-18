#include<iostream>
using namespace std;
int main()
{
    double pricea=50, priceb=30, pricec=65;
    int quantity1, quantity2, quantity3;
    int paymenttype, location;
    int stocka=10, stockb=5, stockc=8;
    string coupon;
  
    cout<<"Choose payment method: 1 for Credit card, 2 for paypal, 3 for cash = "<<endl;
    cin>>paymenttype;
    cout<<"Enter a coupon code(if any) = "<<endl;
    cin>>coupon;
    cout<<"The tax rate depends on the regions based of their income:"<<endl;
    cout<<"Enter your region: Islamabad(9%)=1, Lahore(8%)=2, Karachi(7%)=3: = "<<endl;
    cin>>location;
    cout<<"The price of quantity 'A' is = 50, enter it's quantity(available = 10: =)"<<endl; 
    cin>>quantity1;
    cout<<"The price of quantity 'B' is = 30, enter it's quantity(available = 5: = )"<<endl; 
    cin>>quantity2;
    cout<<"The price of quantity 'C' is = 65, enter it's quantity(available = 8: = )"<<endl; 
    cin>>quantity3;
    if(quantity1>stocka){
        cout<<"Sorry only "<<stocka<<" Units of products A are available.\n";
    }
    if(quantity2>stockb){
                cout<<"Sorry only "<<stockb<<" Units of products B are available.\n";

    }
    if(quantity3>stockc){
                cout<<"Sorry only "<<stockc<<" Units of products C are available.\n";

    }
    else{
    double total = (pricea*quantity1) + (priceb*quantity2) + (pricec*quantity3);
    cout<<"The total bill is = "<<total<<endl;
    double finalbill = (total>200)?0.9*total:total;
    cout<<"The final bill is ="<<finalbill<<endl;
    double shipping = (finalbill<150)?15.0:0.0;
    double totalwithshipping = finalbill+shipping;
    int loyaltypoints = (totalwithshipping>300)?50:20;
double transactioncharge = (paymenttype==1)?totalwithshipping*0.02:(paymenttype==2)?totalwithshipping*0.03:0.0;
double totalafterpayment = totalwithshipping + transactioncharge;
double coupondiscount = (coupon=="mega10")?10.0:0.0;
double totalaftercoupon = totalwithshipping-coupondiscount;
double taxrate = (location==1)?0.09:(location==2)?0.08:0.07;
double totaltaxrate = totalaftercoupon*(1+taxrate);
cout<<"\n---------Order Summary---------"<<endl;
    /*cout<<"Final bill with total shipping is = "<<totalwithshipping<<endl;
    cout<<"Total loyality points are = "<<loyaltypoints<<endl;
    cout<<"The total bill with dicount applied(if any) = "<<totalaftercoupon<<endl;
    cout<<"Total charge with transaction fee is = "<<totalafterpayment<<endl;
    cout<<"Total charges with taxrate and other amounts is = "<<totaltaxrate<<endl;*/
cout<<"Product A (x"<<quantity1<<"):$"<<quantity1*pricea<<endl;
cout<<"Product B (x"<<quantity2<<"):$"<<quantity2*priceb<<endl;
cout<<"Product C (x"<<quantity3<<"):$"<<quantity3*pricec<<endl;
cout<<"Subtotal = $"<<total<<endl;
cout<<"Subtotal with Discount = $"<<total-finalbill<<endl;
cout<<"Shipping = $"<<shipping<<endl;
cout<<"Transaction Fee =$"<<transactioncharge<<endl;
cout<<"Coupon Rate = $"<<coupondiscount<<endl;
cout<<"Sales tax = $"<<totaltaxrate-totalaftercoupon<<endl;
cout<<"Total amount to pay = $"<<totaltaxrate<<endl;}
    return 0;
}