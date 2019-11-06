#include <stdio.h>

int multiplicar(int op1, int op2){
    int result = 0;
    result = op1 * op2;
    return result;
}

int main() {
    int a, b;
    printf("Qual o primeiro numero:\n");
    scanf("%d", &a);

    printf("Qual o segundo numero?:\n");
    scanf("%d", &b);

    int res;
    char op;
    printf("Qual o operador:\n");
    scanf("\n%c", &op);

    switch (op) {
        case '*':
            res = multiplicar(a, b);
            break;
    }
    printf("O resultado de %d %c %d = %d\n", a, op, b, res);
    return 0;

}
