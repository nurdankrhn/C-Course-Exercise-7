#include <stdio.h>

struct COMPLEX {
	double real;
	double imag;
}typedef cmplx;

void disp_complex(cmplx *pz);
void get_complex(struct COMPLEX* pd);
void add_complex(struct COMPLEX* pz1, struct COMPLEX* pz2, struct COMPLEX* pz3);
void sub_complex(struct COMPLEX* pz1, struct COMPLEX* pz2, struct COMPLEX* pz3);
void mul_complex(struct COMPLEX* pz1, struct COMPLEX* pz2, struct COMPLEX* pz3);



int main(void)
{

	cmplx z1 = { 3,0 };
	cmplx z2 = { 5,0};
	cmplx z3;

	mul_complex(&z1, &z2, &z3);
	disp_complex(&z3);
	//disp_complex(&point);
	//get_complex(&point);

	return 0;
}

void disp_complex(cmplx *p)
{
	if (p->real != 0 && p->imag != 0)
	{
		if (p->imag == 1)
			printf("%.2f + i\n", p->real);
		else if (p->imag == -1)
			printf("%f -i\n", p->real);
		else if (p->imag > 0)
			printf("%.2f + %.2fi\n", p->real, p->imag);
		else if (p->imag < 0)
			printf("%.2f - %.2fi\n", p->real, -p->imag);
	}
	else if (p->real == 0 && p->imag != 0)
	{
		if (p->imag == 1)
			printf("i\n");
		else if (p->imag == -1)
			printf("-i\n");
		else
			printf("%.2fi\n", p->imag);
	}
	else
		printf("%.2f\n", p->real);
}

void get_complex(struct COMPLEX* pd)
{
	
	int res;
	int ch;
	while (1) {
		res = 0;
		printf("please enter a complex number: (for imaginer partion don't put i character just enter a number!):");
		if ((res = scanf("%lf%lf", &pd->real, &pd->imag) ) != 2)
			printf("The value you entered is incorrect, please try again\n");
		printf("if you want to exit press q or press enter to try again:");
		while (getchar() != '\n')
			;
		if ((ch = getchar()) == 'q')
			return;
		else 
			continue;
	}
}

void add_complex(struct COMPLEX* pz1, struct COMPLEX* pz2, struct COMPLEX* pz3)
{
	pz3->real = pz1->real + pz2->real;
	pz3->imag = pz1->imag + pz2->imag;
}

void sub_complex(struct COMPLEX* pz1, struct COMPLEX* pz2, struct COMPLEX* pz3)
{
	pz3->real = pz1->real - pz2->real;
	pz3->imag = pz1->imag - pz2->imag;
}

void mul_complex(struct COMPLEX* pz1, struct COMPLEX* pz2, struct COMPLEX* pz3)
{
	//3+ 4i * 5 + i ---> 15 3i  20i -4  == 11 23i
	pz3->real = pz1->real* pz2->real - pz1->imag * pz2->imag;
	pz3->imag = pz1->real * pz2->imag + pz1->imag * pz2->real;
}
