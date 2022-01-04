string encode(string src)
{     
    string dest(2*src.length(),' ');
    int i,j=0;
  dest[0] = '\0';    
    char ch=src[0];
    int count=0;
    int t=1;
    for(i=0;i<src.length();i++){
        
        if(src[i]==ch){
            count++;
          //cout<<count<<" ";
        }
        else{
            if(count>1){
                t=0;
              if(count<=9){
                
              	dest[j++]=ch;
            	dest[j++]='0'+count;
               
                count=1;
                ch=src[i];
              }
                else{
                  dest[j++]=ch;
                    int rev=0;
                    while(count>0){
                        rev=rev*10+count%10;
                        count/=10;
                    }
                    while(rev>0){
                        dest[j++]='0'+(rev%10);
                        rev/=10;
                    }
                  
                    count=1;
                    ch=src[i];
                }
            }
            else{
            count=1;
            dest[j++]=ch; 
            dest[j++]='1';
              ch=src[i];
               t=1; 
            }
        }
    }
    if(count>1){
                dest[j++]=ch;
                    int rev=0;
                    while(count>0){
                        rev=rev*10+count%10;
                        count/=10;
                    }
                    while(rev>0){
                        dest[j++]='0'+(rev%10);
                        rev/=10;
                    }
            }
    else{ 
        if(t==1||t==0){
          
        dest[j++]=ch; 
        dest[j++]='1';
        }
    } 
  dest[j]='\0';
  return dest;
  //Your code here 
}  
