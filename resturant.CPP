#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int j,k,i,l,m,cha,qty,bill=1,total=0;
	 char ch,rishabh;

     cout<<"welcone to plasma resturant"<<endl<<endl;
     do
     {
		cout<<"             menu"<<endl<<endl;

		cout<<"    ITEMS             || RATE"<<endl;
		cout<<"1. Orange Juice       ||  25	  "<<endl;
		cout<<"2. Pineapple Juice    ||  30	  "<<endl;
		cout<<"3. Apple Juice        ||  35	"<<endl;
		cout<<"4. Mixed Fruit Juice  ||  27    "<<endl;
		cout<<"5. Grapes Juices      ||  25	   "<<endl;
		cout<<"6. Watermelon juice   ||  20     "<<endl;
		cout<<"7. Coca Cola          ||  18	  "<<endl;
		cout<<"8. Mountain Dew       ||  20	   "<<endl;
		cout<<"9. sprite             ||  17	 "<<endl;
		cout<<"10. Limca             ||  16	 "<<endl;
		cout<<"11. Thumps up         ||  18	    "<<endl;
		cout<<"12. Sandwitches       ||  25	"<<endl;
		cout<<"13. Tomato soup       ||  51	"<<endl;
		cout<<"14. Tea               ||  15   "<<endl;
		cout<<"15. Coffe             ||  20	      "<<endl;
		cout<<"16.Green Tea          ||  17     "<<endl;
		cout<<"17. Finger Fries      ||  45	  "<<endl;
		cout<<"18. kharai Paner      ||  110 "<<endl;
		cout<<"19. Mix veg           ||  90 "<<endl;
		getch();
		cout<<"20. Fry Rice          ||  50 "<<endl;
		cout<<"21. Chapati           ||  20    "<<endl;
		cout<<"22. Missi             ||  30  "<<endl;
		cout<<"23. Moong dal         ||  35    "<<endl;
		cout<<"24. Salad             ||  24   "<<endl;
		cout<<"25. butter Nan        ||  25   "<<endl;
		cout<<"26. Dosa              ||  50      "<<endl;
		cout<<"27. Nodles            ||  45     "<<endl;
		cout<<"28. Dum Allo          ||  89    "<<endl ;
		cout<<"29. Ice cream         ||  30  "<<endl;
		cout<<"30. Chiken            ||  150   "<<endl;
		cout<<"31. Fruit Sallad      ||  55  "<<endl;
		cout<<"32. Idaly sambhar     ||  35   "<<endl;
		cout<<"33. pyaza paneer      ||  110   "<<endl;
		cout<<"34. rasgulla          ||  20   "<<endl;
		cout<<"35. ras malai         ||  20 "<<endl;
		cout<<"36. chili paner       ||  120    "<<endl;
		cout<<"37. Rumali roti       ||  25    "<<endl;
		cout<<"38. Burger            ||  50	"<<endl;
		cout<<"39. Pizza             ||  80	 "<<endl;

	  cout<<"please enter your choice"<<endl;
		  cin>>cha;
	       cout<<"enter the quantity"<<endl;
	      cin>>qty;

	       if(cha==1)
	       { bill=qty*25    ;
		}
		 if(cha==2)
	       { bill=qty* 30   ;
		}
		 if(cha==3)
	       { bill=qty*35    ;
		}
		 if(cha==4)
	       { bill=qty*27    ;
		}
		 if(cha==5)
	       { bill=qty* 25   ;
		}
		 if(cha==6)
	       { bill=qty* 20   ;
		}
		 if(cha==7)
	       { bill=qty* 18   ;
		}
		 if(cha==8)
	       { bill=qty* 20   ;
		}
		 if(cha==9)
	       { bill=qty*  17  ;
		}

		 if(cha==10)
	       { bill=qty*  16  ;
		}
		 if(cha==11)
	       { bill=qty*  18  ;
		}
		 if(cha==12)
	       { bill=qty*  25  ;
		}
		 if(cha==13)
	       { bill=qty*  51  ;
		}
		 if(cha==14)
	       { bill=qty*  15  ;
		}
		 if(cha==15)
	       { bill=qty*  20  ;
		}
		 if(cha==16)
	       { bill=qty*  17  ;
		}

		 if(cha==17)
	       { bill=qty*  45  ;
		}
			      if(cha==18)
	       { bill=qty*110    ;
		}
		 if(cha==19)
	       { bill=qty*90    ;
		}
		 if(cha==20)
	       { bill=qty* 50   ;
		}
		 if(cha==21)
	       { bill=qty* 20   ;
		}
		 if(cha==22)
	       { bill=qty*30    ;
		}
		 if(cha==23)
	       { bill=qty* 35   ;
		}
		 if(cha==24)
	       { bill=qty* 24   ;
		}
		 if(cha==25)
	       { bill=qty* 25   ;
		}
		 if(cha==26)
	       { bill=qty*50    ;
		}

		 if(cha==27)
	       { bill=qty* 45   ;
		}
		 if(cha==28)
	       { bill=qty* 89   ;
		}
		 if(cha==29)
	       { bill=qty* 30   ;
		}
		 if(cha==30)
	       { bill=qty* 150   ;
		}
		 if(cha==31)
	       { bill=qty* 55   ;
		}
		 if(cha==32)
	       { bill=qty* 35   ;
		}
		 if(cha==33)
	       { bill=qty*  110  ;
		}

		 if(cha==34)
	       { bill=qty*  20  ;
		}
			 if(cha==35)
	       { bill=qty* 20   ;
		}
			 if(cha==36)
	       { bill=qty* 120   ;
		}
			 if(cha==37)
	       { bill=qty* 25   ;
		}
			 if(cha==38)
	       { bill=qty* 50   ;
		}

			 if(cha==39)
	       { bill=qty* 80   ;
		}




    total=total+bill;

cout<<"do you want to add any item  (y/n)"<<endl;

cin>>rishabh;
}
while(rishabh!='n');

    clrscr();
cout<<endl<<"   bill"<<endl;
cout<<endl<<"your bill is "<<total;




  getch();
     }






















