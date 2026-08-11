#include<stdio.h>
int main(){
  int a;
  int b;
  int c;

  printf("Enter the first boy age:");
  scanf("%d",&a);

  printf("Enter the second boy age:");
  scanf("%d",&b);
  
  printf("Enter the third boy age:");
  scanf("%d",&c);

  if ( a<b && a<c  ){
    printf("First boy is younger");
  }

  else if(b<a && b<c) {
    printf("Second boy is younger ");

  }
  else{

  printf("Third boy is younger");
}
    return 0;
}