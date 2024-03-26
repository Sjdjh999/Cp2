#include <stdio.h>

int main (void) {
	int p,m;
	int cash=0; //거스름돈 총액 체크 
	int c1=0 , c2=0 , c3=0 , c4 =0;  //각 동전 남은 갯수 체크 
	
	printf("가격(P)을 입력하세요: ");
	scanf("%d", &p);
	
	printf("돈(m)을 입력하세요: ");
	scanf("%d",&m);
	
	cash = m-p;  //거스름돈 총액
	 
	for(;cash - 500 >= 0;) {
		cash = cash - 500;
		c1++;
	}  //총액에서 500을 뺐을때 0보다 크면 c1을 +1해서 500원 갯수 계산 
	for (;cash -100 >= 0;) {
		cash = cash - 100;
		c2++;
	} //총액에서 100을 뺐을때 0보다 크면 c2을 +1해서 500원 갯수 계산 
	for (;cash -50 >= 0;) {
		cash = cash - 50;
		c3++;
	}//총액에서 50을 뺐을때 0보다 크면 c3을 +1해서 500원 갯수 계산 
	for (;cash -10 >= 0;) {
		cash = cash - 10;
		c4++;
	}//총액에서 10을 뺐을때 0보다 크면 c4을 +1해서 500원 갯수 계산 
	
	printf("거스름돈은 다음과 같습니다. \n");
	printf("500원: %d, 100원: %d, 50원: %d, 10원: %d",c1,c2,c3,c4);

}
