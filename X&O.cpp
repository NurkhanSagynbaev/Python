#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{ srand(time(NULL));
int x,y;
char taktai[3][3]={ {'-','-','-'},
{'-','-','-'},
{'-','-','-'} };
bool userwin=false,botwin=false,draw=false;
int h;
do{
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cout<<taktai[i][j];
}cout<<endl;
}cout<<"орынынызды енгызыныз:";
cin>>x>>y;
taktai[x-1][y-1]='X';
h++;
if(h!=9){
do{
x=rand()%3;
y=rand()%3;}
while(taktai[x][y]!='-');
taktai[x][y]='O';
h++;}
if((taktai[0][0]=='X'&& taktai[0][1]=='X' and taktai[0][2]=='X') || //жол бойынша
(taktai[1][0]=='X'&& taktai[1][1]=='X' and taktai[1][2]=='X') ||
(taktai[2][0]=='X'&& taktai[2][1]=='X' and taktai[2][2]=='X') ||

(taktai[0][0]=='X'&& taktai[1][0]=='X' and taktai[2][0]=='X') || //баган бойынша
(taktai[0][1]=='X'&& taktai[1][1]=='X' and taktai[2][1]=='X') ||
(taktai[0][2]=='X'&& taktai[1][2]=='X' and taktai[2][2]=='X') ||

(taktai[0][0]=='X'&& taktai[1][1]=='X' and taktai[2][2]=='X') || //диоганаль бойынша
(taktai[0][2]=='X'&& taktai[1][1]=='X' and taktai[2][0]=='X')
){
userwin=true;}
if((taktai[0][0]=='O'&& taktai[0][1]=='O' and taktai[0][2]=='O') || //жол бойынша
(taktai[1][0]=='O'&& taktai[1][1]=='O' and taktai[1][2]=='O') ||
(taktai[2][0]=='O'&& taktai[2][1]=='O' and taktai[2][2]=='O') ||
(taktai[0][0]=='O'&& taktai[1][0]=='O' and taktai[2][0]=='O') || //баган бойынша
(taktai[0][1]=='O'&& taktai[1][1]=='O' and taktai[2][1]=='O') ||
(taktai[0][2]=='O'&& taktai[1][2]=='O' and taktai[2][2]=='O') ||
(taktai[0][0]=='O'&& taktai[1][1]=='O' and taktai[2][2]=='O') || //диоганаль бойынша
(taktai[0][2]=='O'&& taktai[1][1]=='O' and taktai[2][0]=='O')
){
botwin=true;}
if(userwin==false && botwin==false && h==9){
draw=true;
}
}while(userwin==false and botwin==false and draw==false);
if(userwin==true){cout<<"userwin!";}
if(botwin==true){cout<<"botwin!";}
if(draw==true){cout<<"draw!";}
return 0;
}
