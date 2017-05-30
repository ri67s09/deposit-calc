#include "deposit.h"

int main()
{
    int days, sum;

    printf("Введите срок вклада:");
    scanf("%d", &days);
    printf("Введите сумму вклада:");
    scanf("%d", &sum);
	
	if (cor_days(days) == 0){
		printf("Не верно введен срок вклада");
	}
	if (cor_sum(sum) == 0){
		printf("Не верно введен сумма вклада");
	}
    if ((cor_days(days) == 1) && (cor_sum(sum) == 1)){
        printf("Верно\n");
        sum = sum_time_of_expiry(days, sum);
        printf("Cумму вклада:%d",sum );
    } 

    return 0;
}
