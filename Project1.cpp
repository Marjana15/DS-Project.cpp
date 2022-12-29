#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char Password[10],Username[10] = "MARJU",US[10], ch;
    int i=0;
    bool iscorrect = 0;//check if its true or false;
    while((iscorrect == false)&&(i<3))
    {
        cout<<"Enter username: "<<endl;
        cin>> US;

        if(strcmp(Username,US)==0)//string compare function will compare Username stored in memory with the one being entered;
        {
            cout << "Enter password \n"; iscorrect = true;
              getchar();
            for(int i=0; i<=7; i++)
            {
                ch = getchar();//allows you press any button without displaying it on the console window
                Password[i]= ch;
               // cout << "after input " << ch << Password[i] << endl;
                ch = '*';
                cout << ch;
            }

            cout<<"Login successful \n:";
            cout<<"Your password is:\n:";
            for(int i=0; i<=7; i++)
            {
                cout<<Password[i];
            }
             cout << endl;
            // getchar();
        }
    }


}
