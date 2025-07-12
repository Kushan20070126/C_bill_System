#include<stdio.h>
void billoute();
    int r_count = 0;
    int c_count = 0;
    int i_count = 0;           // main var
    int exceed_500kwhc0unt =0;
    float total = 0;

int main()
{

    int account_no = 0,ele_Usage = 0,consumers = 1;
    char type;
    float Charge = 0,cust_total = 0;


    FILE *fp;

     fp =  fopen("KUDSE243F-011.txt","a");// txt file make



        while(consumers<=42500)
        {

          fprintf(fp,"\n----------------Customer Account %d------------------- \n",consumers);

            printf("\nEnter(%d)The Customer Account Number: ",consumers);
            scanf(" %d",&account_no);

            fprintf(fp,"Customer AccountNumber : %d\n",account_no); // AccountNumber  add file


                if(account_no == -1){break;}


                printf("\n\nResidential enter R OR r\n");
                printf("Commercial enter C OR c\n");
                printf("Industrial enter I OR i\n\n");

            printf("Enter The Customer Type:");
            scanf(" %c",&type);

            printf("Monthly Electricity Usage(in kWh) : ");
            scanf(" %d",&ele_Usage);

            fprintf(fp,"Customer Monthly Electricity Usage : %d kWh\n",ele_Usage);// Monthly Electricity Usage  add file


              if(type == 'r' || type == 'R')
               {

                       r_count++;


            if(ele_Usage > 300)

            {
                Charge =  0.20;

                cust_total = (ele_Usage *Charge);



            }
            else if(ele_Usage >=  101 && ele_Usage <= 300)
            {

                Charge =  0.15;
                cust_total = (ele_Usage *Charge);


            }else if(ele_Usage < 100 )
            {

                Charge =  0.12;
                cust_total = (ele_Usage *Charge);

            }



        }
        else if(type == 'c' || type == 'C')

        {
                c_count ++;
            if(ele_Usage>500)
            {



                    exceed_500kwhc0unt ++;

                Charge =  0.25;
                cust_total = (ele_Usage *Charge);
            }
            if(ele_Usage<500)
                {

                    Charge =  0.18;
                    cust_total = (ele_Usage *Charge);
                }


        }
         else if(type == 'i' || type == 'I')
         {


             i_count ++;


             Charge =  0.30;
             cust_total = (ele_Usage *Charge);

         }
         else


         {

             printf("\n Error Invaled input ! \n\n");
         }


                consumers ++;


                total += cust_total; // calcula

        }




billoute(); // bill output







return 0;
}

void billoute()
{

     printf("\n=============================Total Bill==============================\n\n");  // finale total bill

        printf("\nTotal Number of Customers billed Under each Consumer Type.\n\n");


        printf("Number of Customer Residential: %d \n",r_count);
        printf("Number of Customer Commercial: %d \n",c_count);
        printf("Number of Customer Industrial: %d \n\n",i_count);




        printf("Total Revenue All Customer : %.2f\n",total);

        printf("Total Number of Customer Exceeding 500kWh Usage : %d\n",exceed_500kwhc0unt);


        printf("\n========================================================================\n\n");


}

