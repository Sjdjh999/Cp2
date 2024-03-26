#include <stdio.h>

int main (void) {
	int temp;  //¼·¾¾ ÀÔ·Â º¯¼ö 
	int ch_temp;  // ¼·¾¾ >> È­¾¾ º¯È¯º¯¼ö 
	
	printf("¼·¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%d",&temp);
	
	ch_temp = (temp * 9/5) + 32;
	printf("¼·¾¾: %d, È­¾¾: %d",temp, ch_temp);
	return 0;
	
}
