#include <stdio.h>
int main(void) 
{
	int t;
    char g;
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %c",&g);
        if(g=='b'||g=='B')
        {
            printf("BattleShip\n");
        }
        else if(g=='c'||g=='C')
        {
            printf("Cruiser\n");
        }
        else if(g=='d'||g=='D')
        {
            printf("Destroyer\n");
        }
        else if(g=='f'||g=='F')
        {
            printf("Frigate\n");
        }
}
	return 0;
}

