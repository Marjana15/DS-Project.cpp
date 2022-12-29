//ONLINE SHOPPING

#include<iostream>
using namespace std;

int main()
{
    char startValue;
    char choiceAgain;
    float onlineShopping(void);
startLevel:
    cout<<"Please press s to start Shopping"<<endl;
start:
    cin>>startValue;
    if(startValue=='s' || startValue=='S')
    {
        float totalAmount=onlineShopping();
        cout<<"Total BIllAmount is "<<totalAmount<<endl;
shopAgain:
        cout<<"Do you want shopping again,y or n "<<endl;

        cin>>choiceAgain;
        if(choiceAgain=='y' || choiceAgain=='Y')
        {
            goto startLevel;
        }
        else if(choiceAgain=='n' || choiceAgain=='N')
        {
            cout<<"Thanks for shopping"<<endl;
        }
        else
        {
            cout<<"You have entered wrong option,please type again"<<endl;
            goto shopAgain;
        }
    }
    else
    {
        cout<<"You have entered wrong option,please s"<<endl;
        goto start;
    }
}
float onlineShopping()
{
char choice;
char item;
float billAmount=0;
int quantity;
itemLevel:

    cout<<"********Welcome to Online Shopping********"<<endl;
    cout<<"******Please follow the instructions******"<<endl;
    cout<<"(1) Please enter m to order mobile phones"<<endl;
    cout<<"(2) Please enter l to order laptops"<<endl;
    cout<<"(3) Please enter d to order desktops "<<endl;
    cin>>choice;

    //*************Mobile************;
    if(choice=='m' || choice=='M')
    {
mobileLevel:
        cout<<"Mobile details"<<endl;
        cout<<"(1) Apple => Price : 40000"<<endl;
        cout<<"(2) Vivo => Price : 25000"<<endl;
        cout<<"(3) Oppo => Price : 20000"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*25000;
        }
        else if(item=='3')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*20000;
        }
        else
        {
            cout<<"You have entered wrong option,please type again"<<endl;
            goto mobileLevel;
        }


    }
      //*************Laptop************;
    else if(choice=='l' || choice=='L')
    {
laptopLevel:
        cout<<"laptop details"<<endl;
        cout<<"(1)HP => Price : 40000"<<endl;
        cout<<"(2) LG => Price : 25000"<<endl;
        cout<<"(3) Hitachi => Price : 20000"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*25000;
        }
        else if(item=='3')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*20000;
        }
        else
        {
            cout<<"You have entered wrong option,please type again"<<endl;
            goto laptopLevel;
        }


    }

    //*************Desktop************;
    else if(choice=='d' || choice=='D')
    {
desktopLevel:
        cout<<"desktop details"<<endl;
        cout<<"(1)HP => Price : 40000"<<endl;
        cout<<"(2) LG => Price : 25000"<<endl;
        cout<<"(3) Hitachi => Price : 20000"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*40000;
        }
        else if(item=='2')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*25000;
        }
        else if(item=='3')
        {
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billAmount= billAmount+quantity*20000;
        }
        else
        {
            cout<<"You have entered wrong option,please type again"<<endl;
            goto desktopLevel;
        }


    }
    else
        {
            cout<<"You have entered wrong option,please type again"<<endl;
            goto itemLevel ;
        }

    return  billAmount;


}







