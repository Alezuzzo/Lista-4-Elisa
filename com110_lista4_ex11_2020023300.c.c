#include <stdio.h>
#include <stdlib.h>

int main(){
    double di, mi, ai, df, mf, af, id, ma, da;

    printf("Informe o dia de seu nascimento:\n");
    scanf("%lf", &di);
    printf("Informe o mês de seu nascimento:\n");
    scanf("%lf", &mi);
    printf("Informe o ano de seu nascimento:\n");
    scanf("%lf", &ai);
    printf("Informe o dia atual:\n");
    scanf("%lf", &df);
    printf("Informe o mês atual:\n");
    scanf("%lf", &mf);
    printf("Informe o ano atual:\n");
    scanf("%lf", &af);

    id = af - ai;
    ma = mf - mi;
    da = df - di;

    printf("Você tem %.0lf anos, %.0lf meses e %.0lf dias.\n", id, ma, da);

    return 0;

}
