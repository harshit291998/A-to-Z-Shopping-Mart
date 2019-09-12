/*#################### #A to Z Shopping Mart# #################### */
/*## HEADER FILES ##*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<iomanip>
#include<stdlib.h>
#include<windows.h>
using namespace std;
main()
{
    system("cls");
    unsigned int sum,add,d,i,e,f,h,k,l,w,x,y;
    unsigned int bir=40,per=56,mur=20,par=250,cor=99,twr=30,lur=35,tir=370;
    int qubis=1000,abis=0,qupep=1000,apep=0,qumun=1000,amun=0,quperk=500,aperk=0,qucoc=400,acoc=0,qutit=100,atit=0,qulux=1000,alux=0,qutid=1000,atid=0;
    unsigned int m=0,n=0,p=0,q=0,r=0,s=0,t=0,u=0;
    char name[50],rank[10],pu,c[20],a[15],b[15];
    cout<<"\n\n\n\n\n\n\n\n";
    printf("\n\t\t +++++++++++++++++++++++++++++++++++++++*+++++++++++++++++++++++++++++++++++++++");
    printf("\n\t\t + *************************************************************************** +");
    printf("\n\t\t + *************************************************************************** +");
    printf("\n\t\t + ******************** WELCOME TO A-to-Z SHOPPING MART ********************** +");
    printf("\n\t\t + *************************************************************************** +");
    printf("\n\t\t + *************************************************************************** +");
    printf("\n\t\t +++++++++++++++++++++++++++++++++++++++*+++++++++++++++++++++++++++++++++++++++");
    getch();
    system("cls");
    main:;
    cout<<"\n\t\t\t\t  ------------------------";
    cout<<"\n\t\t\t\t    A-to-Z SHOPPING MART ";
    cout<<"\n\t\t\t\t  ------------------------";
    cout<<"\n\n\n\t\tCONSUMER INFORMATION";
    cout<<"\n\t      ************************";
    cout<<"\n\n\t 1. NAME:";
    gets(name);
    cout<<"\n\t 2. RANK:";
    gets(rank);
    cout<<"\n\t 3. SERVICE NO.:";
    cin>>a;
    cout<<"\n\t 4. SMART CARD NO.:";
    cin>>b;
    cout<<"\n\t 5. PHONE NO.:";
    cin>>c;
    cout<<"\n\t 6. ENTER BILL NO.:";
    cin>>i;
    again:;
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t  ------------------------";
    cout<<"\n\t\t\t\t\t    A-to-Z SHOPPING MART ";
    cout<<"\n\t\t\t\t\t  ------------------------";
    cout<<"\n\n\t\t\t\t\t 1. MENU & PURCHASE";
    cout<<"\n\n\t\t\t\t\t 2. DETAILS";
    cout<<"\n\n\t\t\t\t\t 3. NEW CUSTOMER";
    cout<<"\n\n\t\t\t\t\t 4. QUANTITY AVAILABLE";
    cout<<"\n\n\t\t\t\t\t 5. EXIT";
    cout<<"\n\n\n\t\t\t ENTER YOUR CHOICE:";
    cin>>d;
    system("cls");
    switch(d)
    {
        case 1: cout<<"\n\n\n\t\t\t\t\t  ------------------------";
                cout<<"\n\t\t\t\t\t    A-to-Z SHOPPING MART ";
                cout<<"\n\t\t\t\t\t  ------------------------";
                cout<<"\n\n\t\t  MENU & PURCHASE";
                cout<<"\n\t        *********************";
                cout<<"\n===============================================================================";
                cout<<"\n\tITEMS" <<setw(40)<<"RATE(RS)";
                cout<<"\n===============================================================================";
                cout<<"\n\n\n\tBISCUITS" <<setw(35)<<"40";
                cout<<"\n\n\tPEPSODENT TOOTHPASTE" <<setw(23)<<"56";
                cout<<"\n\n\tMUNCH CHOCOLATE" <<setw(28)<<"20";
                cout<<"\n\n\tPARK AVENUE PERFUME"<<setw(25)<<"250";
                cout<<"\n\n\tCOCONUT HAIR OIL" <<setw(27)<<"99";
                cout<<"\n\n\tCHIPS" <<setw(38)<<"30";
                cout<<"\n\n\tLUX SOAP" <<setw(35)<<"35";
                cout<<"\n\n\tTIDE" <<setw(40)<<"370";
                cout<<"\n\n*******************************************************************************";
                    cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
                    cin>>pu;
                    if(pu=='Y'||pu=='y')
                    {
                        switch(pu)
                            case 1:system("cls");
                                cout<<"\n\n\n\n\t\t    *******************";
                                cout<<"\n\t\t       PURCHASE LIST";
                                cout<<"\n\t\t    *******************";
                                bis:;
                                cout<<"\n\n\tBISCUITS(MAX 30): ";
                                cin>>m;
                                if(m>30)
                                {
                                    cout<<"Enter Quantity Smaller than 30";
                                    getch();
                                    goto bis;
                                }
                                else
                                    abis=qubis-m;
                                pep:;
                                cout<<"\n\tPEPSODENT TOOTHPASTE(MAX 2): ";
                                cin>>n;
                                if(n>2)
                                {
                                    cout<<"Enter Quantity Smaller than 2";
                                    getch();
                                    goto pep;
                                }
                                else
                                    apep=qupep-n;
                                mun:;
                                cout<<"\n\tMUNCH CHOCOLATE(MAX 50): ";
                                cin>>p;
                                if(p>50)
                                {
                                    cout<<"Enter Quantity Smaller then 50";
                                    getch();
                                    goto mun;
                                }
                                else
                                    amun=qumun-p;
                                park:;
                                cout<<"\n\tPARK AVENUE PERFUME(MAX 2): ";
                                cin>>q;
                                if(q>2)
                                {
                                    cout<<"Enter Quantity Smaller then 2";
                                    getch();
                                    goto park;
                                }
                                else
                                    aperk=quperk-q;
                                coco:;
                                cout<<"\n\tCOCONUT HAIR OIL(MAX 2): ";
                                cin>>r;
                                if(r>2)
                                {
                                    cout<<"Enter Quantity Smaller then 2";
                                    getch();
                                    goto coco;
                                }
                                else
                                    acoc=qucoc-r;
                                titan:;
                                cout<<"\n\tCHIPS(MAX 2): ";
                                cin>>s;
                                if(s>2)
                                {
                                    cout<<"Enter Quantity Smaller then 2";
                                    getch();
                                    goto titan;
                                }
                                else
                                    atit=qutit-s;
                                lux:;
                                cout<<"\n\tLUX SOAP(MAX 10): ";
                                cin>>t;
                                if(t>10)
                                {
                                    cout<<"Enter Quantity Smaller then 10";
                                    getch();
                                    goto lux;
                                }
                                else
                                    alux=qulux-t;
                                tid:;
                                cout<<"\n\tTIDE(MAX 2): ";
                                cin>>u;
                                if(u>2)
                                {
                                    cout<<"Enter Quantity Smaller then 2";
                                    getch();
                                    goto tid;
                                }
                                else
                                    atid=qutid-u;
                                cout<<"\n";
                                system("cls");
                                cout<<"\n\n\n\t\t\t\t\t  ------------------------";
                                cout<<"\n\t\t\t\t\t    A-to-Z SHOPPING MART ";
                                cout<<"\n\t\t\t\t\t  ------------------------";
                                cout<<"\n\n\n\t\t\t\t   CASH MEMO";
                                cout<<"\n\t\t\t        **************";
                                cout<<"\n\t\t BILL NO.:"<<i;
                                cout<<"\n\n\t\tNAME:";
                                cout<<name;
                                cout<<"\n\n\t\tRANK:"<<rank;
                                cout<<"\n\n\t\tSERVICE NO.:"<<a;
                                cout<<"\n\n\t\tSMART CARD NO.:"<<b;
                                cout<<"\n\n\t\tPHONE NO.:"<<c;
                                cout<<"\n\n\n";
                                cout<<"=========================================================================================";
                                cout<<"\n\tITEMS" <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
                                cout<<"\n=========================================================================================";
                                if(m>0)
                                    cout<<"\n\n\tBISCUITS" <<setw(37)<<m<<setw(28)<<"Rs."<<m*bir;
                                if(n>0)
                                    cout<<"\n\tPEPSODENT TOOTHPASTE" <<setw(25)<<n<<setw(28)<<"Rs."<<n*per;
                                if(p>0)
                                    cout<<"\n\tMUNCH CHOCOLATE" <<setw(30)<<p<<setw(28)<<"Rs."<<p*mur;
                                if(q>0)
                                    cout<<"\n\tPARK AVENUE PERFUME"<<setw(26)<<q<<setw(28)<<"Rs."<<q*par;
                                if(r>0)
                                    cout<<"\n\tCOCONUT HAIR OIL" <<setw(29)<<r<<setw(28)<<"Rs."<<r*cor;
                                if(s>0)
                                    cout<<"\n\tCHIPS" <<setw(40)<<s<<setw(28)<<"Rs."<<s*twr;
                                if(t>0)
                                    cout<<"\n\tLUX SOAP" <<setw(37)<<t<<setw(28)<<"Rs."<<t*lur;
                                if(u>0)
                                    cout<<"\n\tTIDE" <<setw(41)<<u<<setw(28)<<"Rs."<<u*tir;
                                e=m*bir;
                                f=n*per;
                                h=p*mur;
                                k=q*par;
                                l=r*cor;
                                w=s*twr;
                                x=t*lur;
                                y=u*tir;
                                sum=e+f+h+k+l+w+x+y;
                                add=m+n+p+q+r+s+t+u;
                                cout<<"\n=========================================================================================";
                                cout<<"\n\tTOTAL: "<<setw(38)<<add<<setw(28)<<"Rs."<<sum;
                                cout<<"\n=========================================================================================";
                                cout<<"\n\n\t\t\t THANK YOU ........ VISIT US AGAIN\n";
                                getch();
                                system("cls");
                                goto again;
                            }
                            else
                            {
                                goto again;
                            }
        case 2:
                cout<<"\n\n\n\t\t\t\t\t  ------------------------";
                cout<<"\n\t\t\t\t\t    A-to-Z SHOPPING MART ";
                cout<<"\n\t\t\t\t\t  ------------------------";
                cout<<"\n\n\n\t\t\t MART DETAILS";
                cout<<"\n\t\t      ******************";
                cout<<"\n\n\t\t# TIMING:\n\n\t\t\t 10 AM TO 02 PM \n\t\t\t 03 PM TO 08 PM";
                cout<<"\n\n\t\t# A-to-Z MART WILL CLOSED ON TUESDAY";
                cout<<"\n\n\t\t# GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
                cout<<"\n\n\t\t# TAKE YOUR SMART CARD WITH YOU";
                cout<<"\n\n\t\t# COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
                cout<<"\n\n\t\t# DO NOT BREAK ANY MART ITEMS";
                getch();
                system("cls");
                goto again;
        case 3: goto main;
        case 4: if(m>0||n>0||p>0||q>0||r>0||s>0||t>0||u>0)
                {
                    cout<<"\n\n\n\t\t\t\t\t  ------------------------";
                    cout<<"\n\t\t\t\t\t    A-to-Z SHOPPING MART ";
                    cout<<"\n\t\t\t\t\t  ------------------------";
                    cout<<"\n\n\n\t\t\t Items Avaliable in Mart";
                    cout<<"\n\t\t      *******************************\n\n";
                    cout<<"===============================================================================";
                    cout<<"\n\tITEMS" <<setw(40)<<"QUANTITY";
                    cout<<"\n===============================================================================";
                    cout<<"\n\n\n\tBISCUITS" <<setw(37)<<abis;
                    cout<<"\n\n\tPEPSODENT TOOTHPASTE" <<setw(25)<<apep;
                    cout<<"\n\n\tMUNCH CHOCOLATE" <<setw(30)<<amun;
                    cout<<"\n\n\tPARK AVENUE PERFUME"<<setw(25)<<aperk;
                    cout<<"\n\n\tCOCONUT HAIR OIL" <<setw(28)<<acoc;
                    cout<<"\n\n\tCHIPS" <<setw(39)<<atit;
                    cout<<"\n\n\tLUX SOAP" <<setw(37)<<alux;
                    cout<<"\n\n\tTIDE" <<setw(41)<<atid;
                    cout<<"\n*******************************************************************************";
                    getch();
                    goto again;
                }
                else
                {
                    cout<<"\n\n\n\t\t\t\t\t  ------------------------";
                    cout<<"\n\t\t\t\t\t    A-to-Z SHOPPING MART ";
                    cout<<"\n\t\t\t\t\t  ------------------------";
                    cout<<"\n\n\n\t\t\t Items Avaliable in Mart";
                    cout<<"\n\t\t      ******************************\n\n";
                    cout<<"===============================================================================";
                    cout<<"\n\tITEMS" <<setw(40)<<"QUANTITY";
                    cout<<"\n===============================================================================";
                    cout<<"\n\n\n\tBISCUITS" <<setw(37)<<qubis;
                    cout<<"\n\n\tPEPSODENT TOOTHPASTE" <<setw(25)<<qupep;
                    cout<<"\n\n\tMUNCH CHOCOLATE" <<setw(30)<<qumun;
                    cout<<"\n\n\tPARK AVENUE PERFUME"<<setw(25)<<quperk;
                    cout<<"\n\n\tCOCONUT HAIR OIL" <<setw(28)<<qucoc;
                    cout<<"\n\n\tCHIPS" <<setw(39)<<qutit;
                    cout<<"\n\n\tLUX SOAP" <<setw(37)<<qulux;
                    cout<<"\n\n\tTIDE" <<setw(41)<<qutid;
                    cout<<"\n\n*******************************************************************************";
                    getch();
                    goto again;
                }
        case 5: cout<<"\n\n\n\n\n";
                printf("\n\t\t +++++++++++++++++++++++++++++++++++++++*+++++++++++++++++++++++++++++++++++++++");
                printf("\n\t\t + *************************************************************************** +");
                printf("\n\t\t + ******************************** THANK YOU ******************************** +");
                printf("\n\t\t + *************************************************************************** +");
                printf("\n\t\t +++++++++++++++++++++++++++++++++++++++*+++++++++++++++++++++++++++++++++++++++");
                cout<<"\n\n\n\t\t\t\t\t Press any key to Exit.......";
                getch();
                exit(0);
        default:cout<<"Your choice is wrong";
                getch();
                goto again;
    }
    getch();
    return 0;
}
