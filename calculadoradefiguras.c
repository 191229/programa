#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void rectangulo(float base, float altura, float res, float r);
void  triangulo(float bas1, float altu, float bas2, float lad, float perimetro);
void circulo(float  rad, float pi);
void trapecio(float bas, float bas1, float alt, float w, float a, float f, float d, float s, float g, float res);
int menu (int opc)

 
int main (void)
{
    int men, opc;
    float base, altura, res, r, bas1, altu, bas2, perimetro, rad, pi, bas, bas1, alt, w, a, f, d, s, g, res;  
    
    do
	{
    	
    	opc = menu(opc);
	
	   switch(opc)
	   {
	         case 1: 
	           rectangulo (base, altura, res, r);
	           break;
	
	        case 2:
		       triangulo (bas1, altu, bas2, lad, perimetro);
		       break;
	        case 3:
		       circulo (rad, pi);
		       break;
	        case 4:
	          trapecio(bas, bas1, alt, w, a, f, d, s, g, res);
	          break;
	        
			default:
	           printf ("\nla opcion no es valida");
	     
	    }
   }
   while(opc !=0)

}

int menu (opc)
{
	 printf ("1.rectangulo\n");
	 printf ("2.triangulo\n");
	 printf ("3.circulo\n");
	 printf ("4.trapecio\n");
	 printf ("5.salir del menu");
	 printf ("\nsi desea salir del menu ponga (0)")
	 printf ("\nQue digito desea realizar: ");
	  scantf ("%d", &opc);
    return (opc);
}

void rectangulo (float base, float altura, float res, float r)
{
	printf("\ningrse la base del rectangulo ");
	scanf("%g", &bas1);
	printf("\ningrse la altura del rectangulo ");
	scanf("%g", altu);
	
	
	res = (2*base) + (2*altura);
	
	printf("el perimetro del rectangulo es : %g ", base, altura, res);
	r = base * altura;
	printf(" el area del rectangulo es : %g ", base, altura, r);
}

void triangulo (float bas1, float altu, float bas2, float lad, float perimetro)

{
    printf("\n Introduce la altura: ");
	 scanf("%g", &altu);
	printf("\n Introduce la base: "); 
	 scanf("%g", &bas1);
	
	if  (altura>0  &&  base>0)
	{
		printf("\n El area del triangulo es:  %g\n", bas1 * altu/2);
		
		 bas2 = bas1 / 2;
		 lad = pow(altu,2)+pow(bas2,2);
		 lad = sqrt(lad);
		
		 perimetro= lad + lad + bas1;  
		printf("\n El perimetro del triangulo es : %g\n", perimetro);
    }
		
    else{
			printf ("\nFigura inexistente\n");
	    } 
}
 
 void circulo(float rad, float pi)
 {
    
    printf("ingrse el radio del circulo");
    scanf("%g", rad);
    
   
    if(rad>0){
    	
		pi=3.1416
		res = pi*rad*rad
		printf("el perimetro del circulo es: %g ", pi, rad, rad, res );
		re = 2*pi*rad*rad
		printf("el area del circulo es: %g ", 2, pi, rad, rad, re);
		
	}
    else{
    	printf("error");
	}
 }
 
 void trapecio (float bas, float bas1, float alt, float w, float a, float f, float d, float s, float g, float res)
{
	printf("\n Introduce la base mayor: ");
	 scanf("%g", &bas);
	printf("\n Introduce la base menor: ");
	 scanf("%g", &bas1);
	printf("\n Introduce la altura: ");
	 scanf("%g", &alt);
	
	if ( bas>0  &&  bas1>0 && bas > bas1 && alt>0)
	{
		printf("\n El area del trapezoide es: %g",((bas+bas1)/2)*alt);
		 w = (bas-bas1);
		 a = (w/2);
		 f = (a * a);
		 d = (alt * alt);
	     s = (f + d);
		 g = sqrt(s);
		 res = (bas + bas1 + g + g);
		printf ("\nEl perimetro del trapecio es: %g\n", res);
	}
	else{
		printf ("\nFigura inexistente o la base menor mide más que la mayor\n"); 
	} 
}
