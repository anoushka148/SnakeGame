#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
static char bar[20][20];
int row =20,col=20,rf=03,cf=10,score=0;
void arr()
{
    for(int i=0;i<row;i++)
    {  cout<<'H';
    for(int j=0;j<col;j++)
    {
    cout<<bar[i][j];
    }
    cout<<'H'<<endl;
    }
}

void lost()
{
    system("cls");
    cout<<endl<<endl<<"!!!MINI SNAKE GAME!!!"<<endl;
    cout<<"Player must score 10 to win"<<endl<<endl;
    arr();
    cout<<endl<<endl<<"<<GAME OVER>>"<<endl<<"Sorry! YOU LOST!!"<<endl<<"Your score is "<<score;
    char a;
    a=getch();
    exit(0);
}
void win()
{
    system("cls");
    cout<<endl<<endl<<"!!!MINI SNAKE GAME!!!"<<endl;
    cout<<"Player must score 10 to win"<<endl<<endl;
    arr();
    cout<<endl<<endl<<"<<GAME OVER>>"<<endl<<"Congratulations! YOU WIN!!"<<endl<<"Your score is "<<score;
    char a;
    a=getch();
    exit(0);

}
void func2(int rp,int cp)
{

    Sleep(100);
    system("cls");

    cout<<endl<<endl<<"!!!MINI SNAKE GAME!!!"<<endl;
    cout<<"Player must score 10 to win"<<endl<<endl;


    for(int i=0;i<row;i++)
    {
    cout<<'H';
    for(int j=0;j<col;j++)
    {
    cout<<bar[i][j];
    }
    cout<<'H'<<endl;
    if(rf==rp&&cf==cp)
    {
    score++;
    if(score==10)
    {
    win();
    }
    while(rf==rp||rf==0||rf==(row-1))
    {
    rf=(rand()%20);
    }
    while(cf==cp)
    {
    cf=(rand()%20);
    }
    bar[rf][cf]='o';
    }
    }
    cout<<endl<<endl<<"Your Score="<<score;
}
void func1(char n,int rp,int cp)
{
    func2(rp,cp);
    n = getch();
    switch (n)
    {
    case '6':
                   {
    while(n=='6')
    {
    bar[rp][cp]=' ';
    cp++;
    bar[rp][cp]='*';
    if(rp<1||rp>(row-2)||cp<0||cp>(col-1))
    {
    lost();
    }
    Sleep(100);
    func2(rp,cp);
    if (kbhit())
    {
    func1(n,rp,cp);
    }
    }
    }
    break;
    case '4':
    {
    while(n=='4')
    {
    bar[rp][cp]=' ';
    cp--;
    bar[rp][cp]='*';
    if(rp<1||rp>(row-2)||cp<0||cp>(col-1))
    {
    lost();
    }
    Sleep(100);
    func2(rp,cp);
    if (kbhit())
    {
    func1(n,rp,cp);
    }
    }
    }
    break;
    case '2':
    {
    while(n=='2')
    {
    bar[rp][cp]=' ';
    rp++;
    bar[rp][cp]='*';
    if(rp<1||rp>(row-2)||cp<0||cp>(col-1))
    {
    lost();
    }
    Sleep(100);
    func2(rp,cp);
    if (kbhit())
    {
    func1(n,rp,cp);
    }
    }
    }
    break;
    case '8':
    {
    while(n=='8')
    {
    bar[rp][cp]=' ';
    rp--;
    bar[rp][cp]='*';
    if(rp<1||rp>(row-2)||cp<0||cp>(col-1))
    {
    lost();
    }
    Sleep(100);
    func2(rp,cp);
    if (kbhit())
    {
    func1(n,rp,cp);
    }
    }
    }
    }
}
int main()
{
    int rp=1,cp=0;
    char n;
    for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
    {
    bar[i][j]=' ';
    }
    }
    for(int i=0;i<row;i++)
    {
    bar[0][i]='Z';
    }
    for(int i=0;i<row;i++)
    {
    bar[row-1][i]='Z';
    }
    bar[rp][cp]='*';
    bar[rf][cf]='O';
    func2(rp,cp);
    while(5==5)
    {
    if (kbhit())
    {
    func1(n,rp,cp);
    }
    }
}
