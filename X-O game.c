#include<stdio.h>
#include<math.h>
#include<stdlib.h>
printsim(char sim[3][3]){
	int i ;
	for(i=0;i<3;i++)
		printf("%c | %c | %c\n",sim[i][0],sim[i][1],sim[i][2]);
}
int checkwin(char sim[3][3])
{
    if (sim[0][1] == sim[0][0] && sim[0][1] == sim[0][2]){
    	if(sim[0][0]=='X')
			printf("Player X won the game");
		else
			printf("Player O won the game");
    	return 1;
	}
    else if (sim[1][0] == sim[1][1] && sim[1][1] == sim[1][2]){
    	if(sim[1][0]=='X')
			printf("Player X won the game");
		else
			printf("Player O won the game");
    	return 1;
    	
	}
    else if (sim[2][0] == sim[2][1] && sim[2][1] == sim[2][2]){
    	if(sim[2][0]=='X')
			printf("Player X won the game");
		else
			printf("Player O won the game");
    	return 1;
    	
	}
    else if (sim[0][0] == sim[1][0] && sim[1][0] == sim[2][0]){
    	if(sim[0][0]=='X')
			printf("Player X won the game");
		else
			printf("Player O won the game");
    	return 1;
    	
	}
    else if (sim[0][1] == sim[1][1] && sim[1][1] == sim[2][1]){
    	if(sim[0][1]=='X')
			printf("Player X won the game");
		else
			printf("Player O won the game");
    	return 1;
    	
	}
    else if (sim[0][2] == sim[1][2] && sim[1][2] == sim[2][2]){
    	if(sim[0][2]=='X')
			printf("Player X won the game");
		else
			printf("Player O won the game");
    	return 1;
    	
	}
    else if (sim[0][0] == sim[1][1] && sim[1][1] == sim[2][2]){
    	if(sim[0][0]=='X')
			printf("Player X won the game");
		else
			printf("Player O won the game");
    	return 1;
	}
    else if (sim[0][2] == sim[1][1]&& sim[2][0] == sim[1][1]){
    	if(sim[0][2]=='X')
			printf("Player X won the game");
		else
			printf("Player O won the game");
    	return 1;
	}
	return 0;
}
int main(){
	char sim[3][3];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			sim[i][j]=' ';
	printsim(sim);
	int temp,temp1=0;
	for(i=0;i<9;i++){
		temp1=0;
		if(i%2==0){
			printf("Player X:\n");
			scanf("%d",&temp);
			temp--;
			for(;temp>2;temp-=3)
				temp1++;
			sim[temp1][temp]='X';
			printsim(sim);
		}
		else{
			printf("Player O:\n");
			scanf("%d",&temp);
			temp--;
			for(;temp>2;temp-=3)
				temp1++;
			sim[temp1][temp]='O';
			printsim(sim);
		}
	}
	if(checkwin(sim)==0)
		printf("Draw");
	
	
}
