#include<stdio.h>
main()
{
	int a,b,c,d,e;
	
	printf("enter value of A,B,C,D,E=");
	
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
     if(a<b)
      {  if(a<c)
          {
              if(a<d)
              {
                if(a<e)
				{
                  printf("a is min");

				}                
                else
                {                  
				  printf("e is min");
				}   
              }
              else
              {
                  if(d<e)
                   {                 
				     printf("d is min");
				   }
                   else
                   {
                     printf("e is min");
				   }
                    
              }

          }
          else
          {  if(c<d)
               {
                    if(c<e)
                    {
                      printf("c is min");
					}
                    else
                    {                 
					  printf("e is min");
					}
               }
             else
             {
                 if(d<e)
                {
                  printf("d is min");
				}
                 else
                {
                  printf("e is min");
				}
             }

            }
      }
    else
      { if(b<c)
           {
               if(b<d)
               { 
			      if(b<e)
                  {
                     printf("b is min");
				  }
                  else
                  {
                    printf("e is min");
				  }
               }
               else
               {  
			      if(d<e)
                   {
				      printf("d is min");
				   }
                 else
                   {
                   	  printf("e is min");

				   }
               }
           }
           else
           { if(c<d)
               { 
			       if(c<e)
                   {
                   	 printf("c is min");
				   }
                   else
                   {
                   	  printf("e is min");

				   }
                   
               }
              else
              {    
			       if(d<e)
			       {
			       	  printf("d is min");

				   }
                  else
                  {
                  	  printf("e is min");

				  }
                   
              }
           }
      }

   	
}

