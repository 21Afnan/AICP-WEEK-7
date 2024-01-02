  #include <iostream>
  #include <algorithm>
  using namespace std;
  double GrandTotal=0;
  string Charity[3];
  double Charitydonations[3]={0};
  double ShoppingBill;
  struct CharityDonationscalculations{
  	void donationsCollected(){
  	      cout << "Donation Summary:" <<endl;
          cout << Charity[0] << " Total Donation: Rs. " << Charitydonations[0] << endl;
          cout << Charity[1] << " Total Donation: Rs. " << Charitydonations[1] << endl;
          cout << Charity[2] << " Total Donation: Rs. " << Charitydonations[2] << endl;
	   }
  	void donationCalc(){
       for(int i=0;i<=2;i++){
         for(int j=0;j<2-i;j++){
                if(Charitydonations[j]<Charitydonations[j+1]){
                       int temp=Charitydonations[j];
                       Charitydonations[j]=Charitydonations[j+1];
                       Charitydonations[j+1]=temp;	
                       } 
               }
          }
    }
     void totalDonations(){
          cout<<" Donations in Descending order \n";
             for(int i=0;i<3;i++){
    	         cout<<Charitydonations[i]<<"Rs."<<endl;
    	         GrandTotal+=Charitydonations[i];
               }
             cout<<"GrandTotal donated to Charity is: "<<GrandTotal<<endl;
	}
     void charitiesName(){
     //Using for loop for taking name of charities....
    	 for(int i=0;i<3;i++){
	         cout<< "Enter the name of charities "<<i+1<<" : ";
	         cin>>Charity[i];
     	 }
     // Using loop for printing name of charities..
    	  cout<< "Charities entered are" << endl;
	       for(int i=0;i<3;i++){
		       cout<< "Charity"<<i+1<<" : "<< Charity[i] << endl;
         }
        int Charitychoice;
    // Using Do while loop for taking choice of user to which charity they want to donate..  
    do{
       cout<< "Select one charity to which you want to donate(1, 2, 3)  for exit 0 or -1 for total donations \n";
       cin>>Charitychoice;
          switch(Charitychoice){
   	         case 1:
   		          cout<< "You selected "<< Charity[0] << endl;
   		          cout<< "Enter the bill of customers shopping\n";
                  cin>>ShoppingBill;
   	              Charitydonations[0]+=ShoppingBill*0.01;
   	         break;
             case 2:
   	              cout<< "You selected "<< Charity[1] << endl;
   	              cout<< "Enter the bill of customers shopping\n";
                  cin>>ShoppingBill;
   	              Charitydonations[1]+=ShoppingBill*0.01;
   		 	break;
   	        case 3:
   		          cout<< "You selected "<< Charity[2] << endl;
   		          cout<< "Enter the bill of customers shopping\n";
                  cin>>ShoppingBill;
   	              Charitydonations[2]+=ShoppingBill*0.01;
   		          break;
   		          
    // Printing total donations for each charity
           case -1:      
		         cout << "Donation Summary:" <<endl;
                 cout << Charity[0] << " Total Donation: Rs. " << Charitydonations[0] << endl;
                 cout << Charity[1] << " Total Donation: Rs. " << Charitydonations[1] << endl;
                 cout << Charity[2] << " Total Donation: Rs. " << Charitydonations[2] << endl;
         	  	break;
   		   default:
   		     	if (Charitychoice!=0){
   		         	cout<< "invalid \n";
   		       }
			  else{
			  	cout<<"Exiting the program\n";
		     }  break;
   	      }	 
	  }
         while(Charitychoice!=0);
    }
};
    int main(int argc, char** argv) {
     CharityDonationscalculations s;
      s.charitiesName();
      s.donationsCollected();
      s.donationCalc();
      s.totalDonations();
 return 0;
  }
