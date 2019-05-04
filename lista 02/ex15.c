#include<stdio.h>
#include<math.h>


int main(){
	char operacao;
	double a, b, c, delta;
	int mod;
	int pot;
	scanf("%c", &operacao);

	switch (operacao){
		case '+':
		scanf("%lf %lf", &a, &b);
		printf("%.3lf\n", a+b);
		break;

	case '-':
		scanf("%lf %lf", &a, &b);
		printf("%.3lf\n", a-b);
		break;

	case '*':
		scanf("%lf %lf", &a, &b);
		printf("%.3lf\n", a*b);
		break;

	case '/':
		scanf("%lf %lf", &a, &b);
		if (b!=0){
			printf("%.3lf\n", a/b);
		}
		else{
			printf("ERROR!\n");
		}
	break;

	case '%':
		scanf("%lf %lf", &a, &b);
		mod = a - (int) a;
		pot = b - (int) b;
		if (b==0){
            printf("ERROR!");
		} else if (mod!=0 || pot!=0 ){
            printf("ERROR!");
		} else{
		    printf("%d\n", (int)a % (int)b);
		}
		break;

	case 'p':
	case 'P':
		scanf("%lf %lf", &a, &b);
		pot= b -(int) b;
		mod= b/b;
		if (a<0 && pot!=0){
            printf("ERROR!");
		} else if (a<0 && mod==1){
            printf("ERROR!");
        } else{
            printf("%.3lf\n", pow(a, b));
		}
		break;

	case 'r':
	case 'R':
		scanf("%lf", &a);
		if (a>=0){
            printf("%.3lf\n", sqrt(a));
		} else{
            printf("ERROR!");
        }
		break;

	case 'b':
	case 'B':
		scanf("%lf %lf %lf", &a, &b, &c);
		delta=pow(b,2)-4*a*c;
		if (a==0){
		printf("%.2lf\n", c/b);
		} else if (sqrt(delta)>0){
			printf("%.3lf %.3lf\n", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
		} else if (sqrt(delta)==0){
			printf("%.3lf\n", (-b+sqrt(delta))/(2*a));
		} else{
			printf("ERROR!\n");
		}
		break;
    }

    return 0;
}
