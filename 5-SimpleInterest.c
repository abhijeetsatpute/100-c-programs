/*C progam to calculate simple interest
  Author: abhijeet
  Created on 9 Sept, 2019, 04:36 PM
*/
main()
{
  float si,p,n,r;
  printf("Enter the values of P N and R\n");
  scanf("%f%f%f",&p,&n,&r );
  si=(p*n*r)/100;
  printf("Simple interest = %6.2f",si );
  getch();
}
