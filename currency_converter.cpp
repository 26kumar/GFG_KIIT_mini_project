#include<iostream>
#include<string>
using namespace std;

int main(){
    
    cout<<endl<<"\t LIST OF CURRENCIES"<<endl<<endl;
    cout<<"\t 1. Indian Rupee"<<endl;
    cout<<"\t 2. US Dollar"<<endl;
    cout<<"\t 3. Euro"<<endl;
    cout<<"\t 4. Japanese Yen"<<endl;
    cout<<"\t 5. Mexican Peso"<<endl;
    cout<<"\t 6. South Korean Won"<<endl;
    cout<<"\t 7. Singapore Dollar"<<endl;
    cout<<"\t 8. Thai Bhat"<<endl;
    cout<<"\t 9. Russian Ruble"<<endl;
    cout<<"\t 10. Saudi Riyal"<<endl;


    int a,b;
    float curr_val;
    float curr[10];
    string curr_name[10];
    curr_name[0]="Indian Rupee";
    curr_name[1]="US Dollar";
    curr_name[2]="Euro";
    curr_name[3]="Japanese Yen";
    curr_name[4]="Mexican Peso";
    curr_name[5]="South Korean Won";
    curr_name[6]="Singapore Dollar";
    curr_name[7]="Thai Bhat";
    curr_name[8]="Russian Ruble";
    curr_name[9]="Saudi Riyal";

    cout<<"Choose the currency from which you want to convert: ";
    cin>>a;

    cout<<"Choose the currency to which you want to convert: ";
    cin>>b;

    cout<<"Enter amount in "<<curr_name[a-1]<<": ";
    cin>>curr_val;

    //...Value of different currency wrt Indian Rupee...
    curr[0]=1;
    curr[1]=0.012;
    curr[2]=0.011;
    curr[3]=1.73;
    curr[4]=0.21;
    curr[5]=15.69;
    curr[6]=0.016;
    curr[7]=0.42;
    curr[8]=1.1;
    curr[9]=0.046;

    float c,d;
    c=curr_val / curr[a-1];
    d=c * curr[b-1];

    cout<<endl;
    cout<<curr_val<< " "<<curr_name[a-1]<<" = "<<d<<" "<<curr_name[b-1]<<endl;

    return 0;
}
