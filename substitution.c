#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

bool valid(string key);

int main(int argc, string argv[])


{
    
    if (argc== 2)
    
    {
        
        string code= argv[1];
       
        
        
        
        if (valid(code))
        
        
        {
            
             string get_text= get_string("Plain text:" );
             char array[strlen(get_text)];
             string abc = "abcdefghijklmnopqrstuvwxyz";
             int abclen= strlen(abc);
             int codelen= strlen(code);
             int textlen=  strlen(get_text);
             
             

            for (int i=0; i<textlen; i++)

        {
            
            if (isupper(get_text[i])!= 0)

        {

                for (int j=0; j<26; j++)


                {


                    if (abc[j]==tolower(get_text [i]))

                    {
                        array[i]= toupper(code[j]);
                        break;
                    }


                }


        }

            else if (islower(get_text[i]) != 0)


        {

            for (int j=0; j<26; j++)


                {


                    if (abc[j] == get_text [i])

                    {


                        array[i]= tolower(code[j]);
                        break;
                    }


                }

        }  


         else //if ((get_text [i]>=1 && get_text [i] <= 1)|| (get_text [i]== ' '))

            {

                array[i]= get_text[i];



            }


        }

        array[textlen] = '\0';
        printf("ciphertext:%s\n", array);
        return 0;

    }
    
    
    else
    
    
    {
        
        printf("Key is invalid.");
        return 1;
        
        
    }
        
        
        
    }
    
    else
    
    {
        
        
        printf ("./substitution key");
        return 1;
    }
    
    
    
}




// make a validity check function
//key has to be 26 Character (strlenth)
//key has to be can not have any numbers (loop through to detect num)
// keys can not be repeated (same loop to check duplicate)
// if invalid printout key


bool valid(string key)


{
    int unique= 0;
    
    if(strlen(key)==26)
    
    {
        
        
        
        for(char c ='a'; c <= 'z'; c++)
       
        
        { for(int l=0; l < strlen(key); l++)
             
             
            
            {
                
                if(tolower(key[l])==c)
                
                
                
                {
                    unique++;
                    break;
                    
                }
                
                
                
            }
            
        }
        
        
        if(unique==26)
        
            {
            
                return true;
            
            }
        
        else
        
            {
                
                return false;
            }
            
        }
    
    else
    
    {
        
        return false;
    }
    
}