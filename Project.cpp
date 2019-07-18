#include<graphics.h>
#include<iostream>
#include<stdio.h>

using namespace std;

class TTT
{
     public:
        int n;
        void drawcircle();
        void drawcross();
        int get();
        void check(int,int,int,int);
};

void TTT:: check(int temp,int a,int b,int c)
{
    if(temp==0)
    {
       if(a==1&&b==2&&c==3||a==1&&b==3&&c==2||a==2&&b==3&&c==1||a==2&&b==1&&c==3||a==3&&b==1&&c==2||a==3&&b==2&&c==1)
       {
           cout<<"1st Player win the game...";
           exit(0);
       }
       else if(a==4&&b==5&&c==6||a==4&&b==6&&c==5||a==5&&b==6&&c==4||a==5&&b==4&&c==6||a==6&&b==4&&c==5||a==6&&b==5&&c==4)
       {
           cout<<"1st Player win the game...";
           exit(0);
       }
       else if(a==7&&b==8&&c==9||a==7&&b==9&&c==8||a==8&&b==9&&c==7||a==8&&b==7&&c==9||a==9&&b==7&&c==8||a==9&&b==8&&c==7)
       {
           cout<<"1st Player win the game...";
           exit(0);
       }
       else if(a==1&&b==4&&c==7||a==1&&b==7&&c==4||a==4&&b==7&&c==1||a==4&&b==1&&c==7||a==7&&b==1&&c==4||a==7&&b==4&&c==1)
       {
           cout<<"1st Player win the game...";
           exit(0);
       }
       else if(a==2&&b==5&&c==8||a==2&&b==8&&c==5||a==5&&b==8&&c==2||a==5&&b==2&&c==8||a==8&&b==2&&c==5||a==8&&b==5&&c==2)
       {
           cout<<"1st Player win the game...";
           exit(0);
       }
       else if(a==3&&b==6&&c==9||a==3&&b==9&&c==6||a==6&&b==9&&c==3||a==6&&b==3&&c==9||a==9&&b==3&&c==6||a==9&&b==6&&c==3)
       {
           cout<<"1st Player win the game...";
           exit(0);
       }
       else if(a==1&&b==5&&c==9||a==1&&b==9&&c==5||a==5&&b==9&&c==1||a==5&&b==1&&c==9||a==9&&b==1&&c==5||a==9&&b==5&&c==1)
       {
           cout<<"1st Player win the game...";
           exit(0);
       }
       else if(a==3&&b==5&&c==7||a==3&&b==7&&c==5||a==5&&b==7&&c==3||a==5&&b==3&&c==7||a==7&&b==3&&c==5||a==7&&b==5&&c==3)
       {
           cout<<"1st Player win the game...";
           exit(0);
       }
    }

    else if(temp==1)
    {
       if(a==1&&b==2&&c==3||a==1&&b==3&&c==2||a==2&&b==3&&c==1||a==2&&b==1&&c==3||a==3&&b==1&&c==2||a==3&&b==2&&c==1)
       {
           cout<<"2nd Player win the game...";
           exit(0);
       }
       else if(a==4&&b==5&&c==6||a==4&&b==6&&c==5||a==5&&b==6&&c==4||a==5&&b==4&&c==6||a==6&&b==4&&c==5||a==6&&b==5&&c==4)
       {
           cout<<"2nd Player win the game...";
           exit(0);
       }
       else if(a==7&&b==8&&c==9||a==7&&b==9&&c==8||a==8&&b==9&&c==7||a==8&&b==7&&c==9||a==9&&b==7&&c==8||a==9&&b==8&&c==7)
       {
           cout<<"2nd Player win the game...";
           exit(0);
       }
       else if(a==1&&b==4&&c==7||a==1&&b==7&&c==4||a==4&&b==7&&c==1||a==4&&b==1&&c==7||a==7&&b==1&&c==4||a==7&&b==4&&c==1)
       {
           cout<<"2nd Player win the game...";
           exit(0);
       }
       else if(a==2&&b==5&&c==8||a==2&&b==8&&c==5||a==5&&b==8&&c==2||a==5&&b==2&&c==8||a==8&&b==2&&c==5||a==8&&b==5&&c==2)
       {
           cout<<"2nd Player win the game...";
           exit(0);
       }
       else if(a==3&&b==6&&c==9||a==3&&b==9&&c==6||a==6&&b==9&&c==3||a==6&&b==3&&c==9||a==9&&b==3&&c==6||a==9&&b==6&&c==3)
       {
           cout<<"2nd Player win the game...";
           exit(0);
       }
       else if(a==1&&b==5&&c==9||a==1&&b==9&&c==5||a==5&&b==9&&c==1||a==5&&b==1&&c==9||a==9&&b==1&&c==5||a==9&&b==5&&c==1)
       {
           cout<<"2nd Player win the game...";
           exit(0);
       }
       else if(a==3&&b==5&&c==7||a==3&&b==7&&c==5||a==5&&b==7&&c==3||a==5&&b==3&&c==7||a==7&&b==3&&c==5||a==7&&b==5&&c==3)
       {
           cout<<"2nd Player win the game...";
           exit(0);
       }
    }
}

void TTT:: drawcircle()
{
    if(n==1)
    {
        circle(55,150,35);
    }

    else if(n==2)
    {
        circle(150,150,35);
    }

    else if(n==3)
    {
        circle(245,150,35);
    }

    else if(n==4)
    {
        circle(55,250,35);
    }

    else if(n==5)
    {
        circle(150,250,35);
    }

    else if(n==6)
    {
        circle(245,250,35);
    }

    else if(n==7)
    {
        circle(55,350,35);
    }

    else if(n==8)
    {
        circle(150,350,35);
    }

    else if(n==9)
    {
        circle(245,350,35);
    }

    else
    {
        cout<<"Invalid choice!!";
    }

}

void TTT:: drawcross()
{
    if(n==1)
    {
        line(25,115,85,185);
        line(25,185,85,115);
    }

    else if(n==2)
    {
        line(115,115,185,185);
        line(115,185,185,115);
    }

    else if(n==3)
    {
        line(215,115,285,185);
        line(215,185,285,115);
    }

    else if(n==4)
    {
        line(25,215,85,285);
        line(25,285,85,215);
    }

    else if(n==5)
    {
        line(115,215,185,285);
        line(115,285,185,215);
    }

    else if(n==6)
    {
        line(215,215,285,285);
        line(215,285,285,215);
    }

    else if(n==7)
    {
        line(25,315,85,385);
        line(25,385,85,315);
    }

    else if(n==8)
    {
        line(115,315,185,385);
        line(115,385,185,315);
    }

    else if(n==9)
    {
        line(215,315,285,385);
        line(215,385,285,315);
    }

    else
    {
        cout<<"Invalid choice!!";
    }
}

int TTT:: get()
{
    cin>>n;
    return n;
}


main()
{
    char ans,si;
    int a1,a2,a3,a4,a5,b1,b2,b3,b4,temp,m;
    TTT p1,p2;
    label1: cout<<"Press Y or y for Yes and N or n for No.";
    cout<<"\nDO YOU WANT TO PLAY GAME? ";                          //Please press Y for Yes and  N for No.
    cin>>ans;
    if(ans=='y' || ans=='Y')
    {
       int gd = 0,gm;
       initgraph(&gd,&gm,"");
       line(100,100,100,400);
       line(200,100,200,400);
       line(10,200,300,200);
       line(10,300,300,300);
       cout<<"\nPress C or c for circle and R and r for cross";
       label:    cout<<"\nPlease choose sign: ";                             //First sign selection is for 1st player. C or c for circle and R and r for cross.
       cin>>si;

       if(si=='c'||si=='C')
       {
           cout<<"1st player's chance: ";
           m=p1.get();
           a1=m;
           p1.drawcircle();

           cout<<"2nd player's chance: ";
           m=p2.get();
           b1=m;
           p2.drawcross();

           cout<<"1st player's chance: ";
           m=p1.get();
           a2=m;
           p1.drawcircle();

           cout<<"2nd player's chance: ";
           m=p2.get();
           b2=m;
           p2.drawcross();

           cout<<"1st player's chance: ";
           m=p1.get();
           a3=m;
           p1.drawcircle();
           temp=0;
           p1.check(temp,a1,a2,a3);

           cout<<"2nd player's chance: ";
           m=p2.get();
           b3=m;
           p2.drawcross();
           temp=1;
           p2.check(temp,b1,b2,b3);

           cout<<"1st player's chance: ";
           m=p1.get();
           a4=m;
           p1.drawcircle();
           temp=0;
           p1.check(temp,a2,a3,a4);

           cout<<"2nd player's chance: ";
           m=p2.get();
           b4=m;
           p2.drawcross();
           temp=1;
           p2.check(temp,b2,b3,b4);

           cout<<"1st player's chance: ";
           m=p1.get();
           a5=m;
           p1.drawcircle();
           temp=0;
           p1.check(temp,a3,a4,a5);
           cout<<"Match Drawn...";
       }

       else if(si=='R'||si=='r')
       {
           cout<<"1st player's chance: ";
           m=p1.get();
           a1=m;
           p1.drawcross();

           cout<<"2nd player's chance: ";
           m=p2.get();
           b1=m;
           p2.drawcircle();

           cout<<"1st player's chance: ";
           m=p1.get();
           a2=m;
           p1.drawcross();

           cout<<"2nd player's chance: ";
           m=p2.get();
           b2=m;
           p2.drawcircle();

           cout<<"1st player's chance: ";
           m=p1.get();
           a3=m;
           p1.drawcross();
           temp=0;
           p1.check(temp,a1,a2,a3);

           cout<<"2nd player's chance: ";
           m=p2.get();
           b3=m;
           p2.drawcircle();
           temp=1;
           p2.check(temp,b1,b2,b3);

           cout<<"1st player's chance: ";
           m=p1.get();
           a4=m;
           p1.drawcross();
           temp=0;
           p1.check(temp,a2,a3,a4);

           cout<<"2nd player's chance: ";
           m=p2.get();
           b4=m;
           p2.drawcircle();
           temp=1;
           p2.check(temp,b2,b3,b4);

           cout<<"1st player's chance: ";
           m=p1.get();
           a5=m;
           p1.drawcross();
           temp=0;
           p1.check(temp,a3,a4,a5);
           cout<<"Match Drawn...";
       }

       else
       {
            cout<<"Invalid choice!!";
            goto label;
       }
       getch();
       closegraph();
    }

    else if(ans=='n' || ans=='N')
    exit(1);

    else
    {
        cout<<"INVALID CHOICE!!";
        goto label1;
    }
}
