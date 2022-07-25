#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int op,n,j,k,count=0;
	char word[100],yn,letter;
	cin>>op;
	do{
	switch(op){
	case (1):
		do{
			cin>>k;
		}while(k!=1);
		letter='1';
		break;
			
	case (2):
    	do{ 
    	j=n=2;
        	do{
            	cin>>k;
            	if(j==k){
            	n=n+j;
            }
        	}while(k==2);
    	}while(k==2);
    	n=n/2;
    	n=n%3;
    	if(n==1){
        	letter='a';
    	}else if(n==2){
        	letter='b';
    	}else{
        	letter='c';
    	}
    	break;
    	
    case (3):
    		do{ 
        j=n=3;
        do{
            cin>>k;
            if(j==k){
            n=n+j;
            }
        }while(k==3);
	    }while(k==3);
    	n=n/3;
    	n=n%3;
    	if(n==1){
        	letter='d';
    	}else if(n==2){
        	letter='e';
    	}else{
        	letter='f';
    	}
    	break;
    	
    case (4):
		do{ 
        j=n=4;
        do{
            cin>>k;
            if(j==k){
            n=n+j;
            }
        }while(k==4);
    }while(k==4);
    n=n/4;
    n=n%3;
    if(n==1){
        letter='g';
    }else if(n==2){
        letter='h';
    }else{
        letter='i';
    }	
    break;
    
    case(5):
    	    do{ 
        j=n=5;
        do{
            cin>>k;
            if(j==k){
            n=n+j;
            }
        }while(k==5);
    }while(k==5);
    n=n/5;
    n=n%3;
    if(n==1){
        letter='j';
    }else if(n==2){
        letter='k';
    }else{
        letter='l';
    }
    break;
    
    case (6):
    	do{ 
        j=n=6;
        do{
            cin>>k;
            if(j==k){
            n=n+j;
            }
        }while(k==6);
    }while(k==6);
    n=n/6;
    n=n%3;
    if(n==1){
        letter='m';
    }else if(n==2){
        letter='n';
    }else{
        letter='o';
    }
    break;
    
    case(7):
    	do{ 
        j=n=7;
        do{
            cin>>k;
            if(j==k){
            n=n+j;
            }
        }while(k==7);
    }while(k==7);
    n=n/7;
    n=n%4;
    if(n==1){
        letter='p';
    }else if(n==2){
        letter='q';
    }else if(n==3){
        letter='r';
    }else {
        letter='s';
    }
    break;
    case (8):
    	do{ 
        j=n=8;
        do{
            cin>>k;
            if(j==k){
            n=n+j;
            }
        }while(k==8);
    }while(k==8);
    n=n/8;
    n=n%3;
    if(n==1){
        letter='t';
    }else if(n==2){
        letter='u';
    }else{
        letter='v';
    }
    break;
    case(9):
    		do{ 
        j=n=9;
        do{
            cin>>k;
            if(j==k){
            n=n+j;
            }
        }while(k==9);
    }while(k==9);
    n=n/9;
    n=n%4;
    if(n==1){
        letter='w';
    }else if(n==2){
        letter='x';
    }else if(n==3){
        letter='y';
    }else{
        letter='z';
    }
    break;
    case(0):
    	letter=' ';
    	break;
    default:
    	cout<<"Invalid"<<endl;
	}
	count++;
	word[count]=letter;
	op=k;
	cout<<"Do you want to enter another letter(y/n)";
	cin>>yn;
}while(yn=='y');
for(j=0;j<=count;j++){
	cout<<word[j];
}
	return 0;
}
