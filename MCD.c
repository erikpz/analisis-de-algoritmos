//MCD
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int MCD1(int,int);
int MCD2(int,int);
int MCD3(int,int);

int ins=0;

int main(int argc, char *argv[])
{
	int a,b,c;
	
	if(argc!=3) 
		exit(1);
	
	a=atoi(argv[1]); 
	b=atoi(argv[2]);
	
	c=MCD1(a,b);     
	printf("El MCD1 de %d y %d es: %d",a,b,c); 
	printf("\nEl numero de instrucciones fue:%d",ins); 
	
	ins=0;
	c=MCD2(a,b);     
	printf("El MCD2 de %d y %d es: %d",a,b,c); 
	printf("\nEl numero de instrucciones fue:%d",ins);

}

//Condicionales, aritmeticas, asignaciones
int MCD1(int a,int b)
{
	int i,l,r;
	l=(a<b)?a:b; ins+=3;
	r=1; ins++;
	ins++;ins++;		 	
	for(i=2;i<=l;i++)
	{
		ins+=3;
		if(a%i==0&&b%i==0)
		{
			r=i;
			ins++;
		}
		ins+=2;	
	}
	return r;
}
//Asignacion, aritmeticas, condicional 
int MCD2(int a,int b)
{
    int tmp;
	ins++;
    while (b != 0) 
	{
        tmp = b; ins++;
		ins++;
        b = a % b; ins++;
        a = tmp; ins++;
		ins++;
    }
    return a;
}

int MCD3(int a, int b)
{
	ins++;
    if (b == 0) return a;
	else
	{
		ins++;ins+=2;
		return MCD3(b, a % b);
	}
}