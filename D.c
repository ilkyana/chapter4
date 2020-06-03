# include<stdio.h>
void main(){
int class;
int f;
do{
printf("enter the number of failed in.");
scanf("%d",&f);
printf("Enter the class(1,2,3) and 4 for exit ");
scanf("%d",&class);

switch(class) 
{
case 1: 
if(f>3){
printf("\n No grace");	
}else if(f<=3){
printf("5 number grace");
}
break ;

case 2: 
if(f>2){
printf("\n No grace");	
}else if(f<=2){
printf("4 number grace");
}
break ;

case 3: 
if(f>1){
printf("\n No grace");	
}else if(f==1){
printf("5 number grace");
}
break ;

case 4:
break;

}
}while(class!=4);

}
