#include<iostream>
#include<string.h>
using namespace std;
class Cake{
public:
    void welcome()
    {
        cout<<"WELCOME TO THE CAKE SHOP!"<<endl;
    }
    void printline(int n)
    {
         int i=0;
        while(i<=n)
        {
            cout<<"-";
            i++;
        }
        cout<<endl;
    }
    void Size()
    {
        cout<<"Size and Price are:"<<endl;
        cout<<"No.\tSize\tPrice"<<endl;
        cout<<"1.\t1/2kg\t300Rs"<<endl;
        cout<<"2.\t1kg\t600Rs"<<endl;
    }
    long long b;
    string msg;
    char s[20];

    void bill()
    {
        cout<<"Enter the message you want on the cake:"<<endl;
        cin>>msg;
        cout<<"Enter your name:"<<endl;
        cin>>s;
        cout<<"Enter the contact number:"<<endl;
        cin>>b;
        cout<<"\nYour Bill is"<<endl;
        printline(35);
        cout<<"\tTHE CAKE SHOP"<<endl;
        cout<<"Name: "<<s<<endl;
        cout<<"Contact No.: "<<b<<endl;
        cout<<"Message on Cake: "<<msg<<endl;
        cout<<"\nYour order is"<<endl;
        cout<<"Cake\t\tSize\tPrice"<<endl;
    }
    };
    int main()
    {
        int x, a, j;
        char c[50];
        char s[20];

        Cake c1;
        j=1;
        do{
        c1.welcome();
        c1.printline(30);
        cout<<"Flavours of Cake"<<endl;
        cout<<"Enter\n1 for Black Forest\n2 for Strawberry\n3 for Pineapple\n0 for Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>x;
        switch(x)
        {
        case 1:
            c1.Size();
            cout<<"Enter your choice"<<endl;
            cin>>a;
            c1.printline(20);
            switch(a)
            {
            case 1:
                cout<<"You have ordered 1/2kg Black Forest Cake"<<endl;
                c1.bill();
                cout<<"Black Forest\t1/2kg\t300Rs"<<endl;
                cout<<"\nTotal Amount is Rs300/-"<<endl;
                cout<<"\n...Thankyou! Visit Again..."<<endl;
                break;
            case 2:
                cout<<"You have ordered 1kg Black Forest Cake"<<endl;
                c1.bill();
                cout<<"Black Forest\t1kg\t600Rs"<<endl;
                cout<<"\nTotal Amount is Rs600/-"<<endl;
                cout<<"\n...Thankyou! Visit Again..."<<endl;
                break;
            default:
                cout<<"You have entered wrong choice"<<endl;
            }
            break;
        case 2:
            c1.Size();
            cout<<"Enter your choice"<<endl;
            cin>>a;
            c1.printline(20);
            switch(a)
            {
            case 1:
                cout<<"You have ordered 1/2kg Strawberry Cake"<<endl;
                c1.bill();
                cout<<"Strawberry\t1/2kg\t300Rs"<<endl;
                cout<<"\nTotal Amount is Rs300/-"<<endl;
                cout<<"\n...Thankyou! Visit Again..."<<endl;
                break;
            case 2:
                cout<<"You have ordered 1kg Strawberry Cake"<<endl;
                c1.bill();
                cout<<"Strawberry\t1kg\t600Rs"<<endl;
                cout<<"\nTotal Amount is Rs600/-"<<endl;
                cout<<"\n...Thankyou! Visit Again..."<<endl;
                break;
            default:
                cout<<"You have entered wrong choice"<<endl;
            }
            break;
        case 3:
            c1.Size();
            cout<<"Enter your choice"<<endl;
            cin>>a;
            c1.printline(20);
            switch(a)
            {
            case 1:
                cout<<"You have ordered 1/2kg Pineapple Cake"<<endl;
                c1.bill();
                cout<<"Pineapple\t1/2kg\t300Rs"<<endl;
                cout<<"\nTotal Amount is Rs300/-"<<endl;
                cout<<"\n...Thankyou! Visit Again..."<<endl;
                break;
            case 2:
                cout<<"You have ordered 1kg Pineapple Cake"<<endl;
                c1.bill();
                cout<<"Pineapple\t1kg\t600Rs"<<endl;
                cout<<"\nTotal Amount is Rs600/-"<<endl;
                cout<<"\n...Thankyou! Visit Again..."<<endl;
                break;
            default:
                cout<<"You have entered wrong choice"<<endl;
            }
           break;
        case 0:
            j=0;
            cout<<"Thankyou!"<<endl;
        break;
        default:
                cout<<"You have entered wrong choice"<<endl;
        }
        system("pause>nul");
        system("cls");
        }
        while(j!=0);
        return 0;
    }
