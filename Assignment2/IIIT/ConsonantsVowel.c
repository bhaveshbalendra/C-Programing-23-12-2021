    #include <stdio.h>  
      
    int main()  
    {  
        char vw;  
      
        printf("Enter a Alphabet:\n");  
        scanf("%c", &vw);  
      
        if( vw == 'a' || vw == 'e' || vw == 'i' || vw == 'o' || vw == 'u' ||  
            vw == 'A' || vw == 'E' || vw == 'I' || vw == 'O' || vw == 'U')  
        {  
            printf("%c is vowel\n", vw);  
        }  
        
        else  
        {  
            printf("%c is consonant\n", vw);  
        }  
      
        return 0;  
    }  