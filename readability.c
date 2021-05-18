#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


int main(void)
{
    string get_text = get_string("Input the string: ");
    int letter_count = 0;
    int word_count = 1;
    int sentence_count = 0;



    int text_len = strlen(get_text);

    for (int i = 0; i <= text_len ; i++)

    {
        if ((get_text[i]  >= 'a' && get_text[i] <= 'z') || (get_text[i]  >= 'A' && get_text[i]  <= 'Z'))
        
        
        {
            
            
            letter_count++;
            
        }
        
        
        
        else if (get_text[i] == ' ') // need a fix
        
        {
            
            
            word_count++;
            
            
        }
        
        
        else if ((get_text[i] == '.') || (get_text[i] == '?') || (get_text[i] == '!'))
        {
        
        
            sentence_count++;
        
        
        
        }
        
    }

//printf("Words %i\n", word_count);
//printf("Letters %i\n", letter_count);
//printf("Sentence %i\n", sentence_count);

    float reading_grade = 0.0588 * (100 * (float) letter_count / (float) word_count) - 0.296 * (100 * (float) sentence_count / (float) word_count) - 15.8;
    //printf ("unrounded %f", reading_grade);
    int r_grade = round((reading_grade));


    if (reading_grade >=  1 && reading_grade <= 16)


    {


        printf("Grade %i\n", r_grade);


    }


    else if (reading_grade <  1)

    {
        
        printf("Before Grade 1\n");
        
        
    }
    
    
    else
    
    
    {
        
        
        printf("Grade 16+\n") ;
        
        
    }
}



