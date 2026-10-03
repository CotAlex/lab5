/*Леднёв Алексей Алексеевич
 ПИ 1-1
 Самостоятельная работа*/
#include <stdio.h>
int main(void){
    int n ;
    long long s = 0;
    int k = 0;
    int p = 0;
    printf("Ведите число от -1000 до 1000:\n");
    while(k < 100){

        if(scanf("%d",&n) != 1){
            printf("Ошибка! Вы не ввели ни одного числа.\n");
            return 1;
        }

        if (n < -1000 || n > 1000){
            printf("Не подходит\n");
        }

        if(n > 0){
            k++;
            s = s + n;
            p = p + n;
        
        }
        if(n < 0){
            k++;
            s = s + n;
        }

        if(n == 0){
        break;
        }
    }
    printf("Статистика:\n");
    printf("Количество введенных чисел: %d\n", k);
    printf("Сумма чисел: %d\n", s);
    printf("сумма положительных чисел: %d\n", p);
}
