		 #include<reg51.h>
		 #include<stdio.h>
		 #define seg P1	 
		 #define seg1 P2
		 void key()	;
     void key1();
     int A,C,X,Y,Z;
	
      void delay(int i)
      {
	     int j;
	     for(i=0;i<=j;i++)
	     for(j=0;j<=100;j++);
      }
		 void main()
		 {
		 P1=0x00;
		 P2=0x00;
		 P3=0x00;
		 P0=0x00;
		 while(1)
		 
		   {
		   
	    for(C=0;C<=9;C++)
		for(X=0;X<=9;X++)
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
		seg=0x3f;
	break;

  case 1:

  	seg=0x06; 	
			break;

  case 2:	
		seg=0x5b;
	break;

  case 3:	
		seg=0x4f;
	break;

 case 4:	
		seg=0x66;
	break;

 case 5:	
		  seg=0x6d;
			break;

 case 6:	
 		seg=0x7d;
     	break;
 case 7:	
		seg=0x47;
	break;
 case 8:	
		seg=0x7f;
		break;
case 9:   
	    seg=0x6f;
			break;

case 10:   
	//run:    
seg1=0x6f;seg=0x6f;
		delay(5);
//goto run;		 
break;
	 }
			 
		}
				
	void key1()

				{
		switch(X)
  	  {
  case 0:	
		seg1=0x3f;
		delay(5);
		break;
  case 1:
  		seg1=0x06; 	
		delay(5);
  case 2:	
		seg1=0x5b;
		delay(5);
		break;
  case 3:	
		seg1=0x4f;
delay(5);
		break;
 case 4:	
		seg1=0x66;
		delay(5);
		break;
 case 5:	
		seg1=0x6d;
		delay(5);
		break;
 case 6:	
		seg1=0x7d;
	delay(5);
		break;
 case 7:	
		seg1=0x47;
delay(5);
		break;
 case 8:	
		seg1=0x7f;
		delay(10);
		break;
case 9:   
	    seg1=0x6f;
		delay(5);
		 break;


		
		}
		}
		