		 #include<reg51.h>
		 #include<stdio.h>
		sbit led0=P1^0;
		sbit led1=P1^1;
		sbit led2=P1^2;
		sbit led3=P1^3;
		sbit led4=P1^4;
		sbit led5=P1^5;
		sbit led6=P1^6;
		sbit led7=P1^7;
		
		 void key()	;
     void key1();
     int A,C,X,Y,Z;
	
      void delay(int i)
      {
	     int j;
	     for(i=0;i<=j;i++)
	     for(j=0;j<=300;j++);
      }
		 void main()
		 {
		 P1=0x00;
		 P2=0x00;
		 P3=0x00;
		 P0=0x00;
		 while(1)
		 
		   {
		   
	    
			for(X=0;X<=9;X++)
				for(C=0;C<=9;C++) 
		{
		key();
			key1();
		
		   }
		 }
	 }

		void key()
		  {
		switch(C)
  	
	  {
			 
  case 0:	
		led0=0;led1=0;led2=0;led3=0;
	break;

  case 1:

  	led0=1;led1=0;led2=0;led3=0;
			break;

  case 2:	
		led0=0;led1=1;led2=0;led3=0;
	break;

  case 3:	
		led0=1;led1=2;led2=0;led3=0;
	break;

 case 4:	
		led0=0;led1=0;led2=1;led3=0;
	break;

 case 5:	
		  led0=1;led1=0;led2=1;led3=0;
			break;

 case 6:	
 		led0=0;led1=1;led2=1;led3=0;
     	break;
 case 7:	
	led0=1;led1=1;led2=1;led3=0;
	break;
 case 8:	
		led0=0;led1=0;led2=0;led3=1;
		break;
case 9:   
	   led0=1;led1=0;led2=0;led3=1;
			break;

	 }
			 
		}
				
	void key1()

				{
		switch(X)
  	  {
  case 0:	
		led4=0;led5=0;led6=0;led7=0;
		delay(5);
		break;
	
  case 1:
  		led4=1;led5=0;led6=0;led7=0;
		delay(5);
  break;
	
	case 2:	
	led4=0;led5=1;led6=0;led7=0;
		delay(5);
		break;
	
  case 3:	
		led4=1;led5=1;led6=0;led7=0;
delay(5);
		break;
	
 case 4:	
		led4=0;led5=0;led6=1;led7=0;
		delay(5);
		break;
 
 case 5:	
	led4=1;led5=0;led6=1;led7=0;
		delay(5);
		break;
 
 case 6:	
		led4=0;led5=1;led6=1;led7=0;
	delay(5);
		break;
 
 case 7:	
	led4=1;led5=1;led6=1;led7=0;
delay(5);
		break;
 
 case 8:	
		led4=0;led5=0;led6=0;led7=1;
		delay(10);
		break;
 
case 9:   
	    led4=1;led5=0;led6=0;led7=1;
		delay(5);
		 break;


		
		}
		}
		