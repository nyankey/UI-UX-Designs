

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//The information below is based on the assumption that a customer
// is ordering food through their mobile app and is ready to pay 


//Base Class
class food_details{                                 
    public:
    float clients_order = 154.25;
    float tax_rates = 0.12;
    
};


class tax_calculation{              //Function overloading
    public: 
    float calculate_tax(float tax_rate,float meal_price) //Use of Constructors
    {
    float x = tax_rate * meal_price;
    return x;
    }
    string calculate_tax()   //overloading of function
    {
        cout << " $18.51 will be added to the cost of your food" << endl;
        
        return "";
    
        
    }

};


        //Polymorphism for different types of payments
            //Base
class payment_info{     
    public:
    void visa_card_info(string fname,string lname,string card_no,string ex_month,string ex_year, string cvv){
        cout << "Please Confirm the following Visa Card information" << endl;
        cout << " Name on Card: " << fname <<" "<< lname <<endl;
        cout << "Ending of Card Number: " << card_no <<endl;
        cout << "Expiration Date: "<< ex_month << "/" << ex_year <<endl;
        cout << "3- digit CVV: " << cvv << endl;
    }

    };
                                                            //Inheritance for payment method
class mastercard_info : public payment_info{
    public:
    void mcard_info(string fname,string lname,string card_no,string ex_month,string ex_year, string cvv){
        cout << "Please Confirm the following Visa Card information" << endl;
        cout << " Name on Card: " << fname <<" "<< lname <<endl;
        cout << "Ending of Card Number: " << card_no <<endl;
        cout << "Expiration Date: "<< ex_month << "/" << ex_year <<endl;
        cout << "3- digit CVV: " << cvv << endl;
    }

    };


    class paypal_info : public payment_info{
    public:                                                                 //Use of Access Specifiers
    void pcard_info(string fname,string lname,string card_no,string ex_month,string ex_year, string cvv){
        cout << "Please Confirm the following Visa Card information" << endl;
        cout << " Name on Card: " << fname <<" "<< lname <<endl;
        cout << "Ending of Card Number: " << card_no <<endl;
        cout << "Expiration Date: "<< ex_month << "/" << ex_year <<endl;
        cout << "3- digit CVV: " << cvv << endl;
    }

    };

    class billing_address{ 
        public:                                                             //Use of Constructors
        void address(string fname,string lname,string street_no,string apt_no,string city, string state, string zip_code){
        cout << "Please Confirm Your billing address" << endl;
        cout << " Name:  " << fname <<" "<< lname <<endl;
        cout << "Street Number: " << street_no <<endl;
        cout << "Apartment number: "<< apt_no <<endl;
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Zip Code: " << zip_code << endl;


    }
    };


int main(void) {
    food_details foodobj;                                   //Use of Objects
    foodobj.clients_order; 
    foodobj.tax_rates;

    cout << "The cost of your food is " << foodobj.clients_order<<endl;
    cout << " The tax rate is " << foodobj.tax_rates <<endl;

    tax_calculation taxes;                                      //Calling object
    

    cout << "Your total tax is $" << taxes.calculate_tax(foodobj.tax_rates,foodobj.clients_order) <<endl;
    taxes.calculate_tax();



    char pay_type;
    
    cout << "Please select a payment method below:" <<endl;
    cout << "For Visa, Masetrcard or Paypay enter 'v' for Cash enter 'c' "<< endl; 
    cin >> pay_type;

    if (pay_type == 'v' ){
        char card_type;
        cout << "Enter a card type, v for Visa, m for Mastercard and p for Paypal" <<endl;
        cin >> card_type;                               //User input for parameters
        if (card_type== 'v' ){
            string a,b,c,d,e,f;
            cout << "Enter your First Name on your card: " <<endl;
            cin >> a;
            cout << "Enter your Last Name on your card: " <<endl;
            cin >> b;
            cout << "Enter your 16 diigit card number: " <<endl;
            cin >> c;
            std :: string n (c,12,4); 
            cout << "Enter the Expiration Month on your card: " <<endl;
            cin >> d;
            cout << "Enter the Expiration year on your card: " <<endl;
            cin >> e;
            cout << "Enter your CVV : " <<endl;
            cin >> f;
            payment_info payobj;
            payobj.visa_card_info(a,b,n,d,e,f);

        }
        else if (card_type=='m' ){
            string a,b,c,d,e,f;
            cout << "Enter your First Name on your card: " <<endl;
            cin >> a;
            cout << "Enter your Last Name on your card: " <<endl;
            cin >> b;
            cout << "Enter your 18 diigit card number: " <<endl;
            cin >> c;
            std :: string n (c,12,4); 
            cout << "Enter the Expiration Month on your card: " <<endl;
            cin >> d;
            cout << "Enter the Expiration year on your card: " <<endl;
            cin >> e;
            cout << "Enter your CVV : " <<endl;
            cin >> f;
            mastercard_info mastercobj;
            mastercobj.mcard_info(a,b,n,d,e,f);


        }
        else if (card_type=='p' ){
            string a,b,c,d,e,f;
            cout << "Enter your First Name on your card: " <<endl;
            cin >> a;
            cout << "Enter your Last Name on your card: " <<endl;
            cin >> b;
            cout << "Enter your 17 diigit card number: " <<endl;
            cin >> c;
            std :: string n (c,12,4); 
            cout << "Enter the Expiration on your card: " <<endl;
            cin >> d;
            cout << "Enter the Expiration Month year on your card: " <<endl;
            cin >> e;
            cout << "Enter your CVV : " <<endl;
            cin >> f;
            paypal_info paypalobj;
            paypalobj.pcard_info(a,b,n,d,e,f); //Calling of object function
            
            
            

        }
        else {
            cout <<"Please contact your waiter";
        }
        
        cout << "Enter your Billing Address Below"<<endl;
        billing_address addressobj;
            string g,h,i,j,k,l,m;
            cout << "Enter your First Name : " <<endl;
            cin >> g;                                           //User input for all parameters
            cout << "Enter your Last Name : " <<endl;
            cin >> h;
            cout << "Enter your Address: " <<endl;
            cin >> i;
            cout << "Enter your Apartment number or NA if not applicable: " <<endl;
            cin >> j;
            cout << "Enter your City: " <<endl;
            cin >> k;
            cout << "Enter your State : " <<endl;
            cin >> l;
            cout << "Enter your zip code : " <<endl;
            cin >> m;
            addressobj.address(g,h,i,j,k,l,m);
         try {                                                      // Use of Exceptions
      cout << "Please enter your age to confirm legal payment"<<endl;

      int age_confirm;
      cin >> age_confirm;
      int age = age_confirm;
      if (age >= 18) {
          cout << "Payment Confirmed, Thank you!!.";
    } 
    else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum<<endl; 
    cout << "Please contact waiter" <<endl;
  }
        
    }
    else {
            cout <<"Please contact your waiter";
        }
    
    
    return 0;
}



