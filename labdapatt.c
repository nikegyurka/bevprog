#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

void gotoxy(int x, int y){
int i;
for(i=0; i<y; i++) printf("\n");
for(i=0; i<x; i++) printf(" ");
}

int main()
{

int egyx=1, egyy=-1, i,j,x=10,y=20, w=1000;
int ty[23], tx[80];

for(i=1; i<23; i++) ty[i]=1; ty[1]=-1; ty[22]=-1;
for(i=1; i<80; i++) tx[i]=1; tx[1]=-1; tx[79]=-1;

while(w){
for(i=0; i<70; i++) printf("-"); printf("x=%d", x); printf("y=%d", y);

gotoxy(x,y); printf("X\n");

x+=egyx; y+=egyy;
egyx*=tx[x]; egyy*=ty[y];

usleep(50000);
system("clear");
w--;
}

return 0;
}