#include<stdio.h>



float calc(float salary,float valor_diaria) {
    float calc = salary + valor_diaria;
    return calc;
}


int main() {
    float get_salary;
    char employeeName[50];
    float valor_diaria;
    printf("digite o nome do funcionario");
    scanf("%s", employeeName);
    printf("digite o salario do funcionaro");
    scanf("%f", &get_salary);
    printf("digite o valor da diaria");
    scanf("%f", &valor_diaria);
        if(get_salary > 0 && valor_diaria >0) {
            float calc_new_salary = calc(get_salary,valor_diaria);
            printf("valor que devera ser pago ao funcionario: %s"  " e: %.2f",employeeName,calc_new_salary);
        }else {
            printf("valores digitados não suportados, tente novamente!");
        }
    return 0;
}