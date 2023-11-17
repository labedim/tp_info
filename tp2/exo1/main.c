#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h> \*TP2  Exo2
int simple_fonction_suite(int a,int d,int n){
int somme;

somme=(n/2)*(2*a+(n-1)*d);
printf("%d",somme);

}


int recursive_fonction_suite(int a,int d,int n){
int somme;
if (n==1){
somme=a;
printf("%d",somme);
}
else{
somme=a+recursive_fonction_suite(a+d,d,n-1);
printf("%d",somme);
}
}


int main()
{

 simple_fonction_suite(0,2,4);

}
}
