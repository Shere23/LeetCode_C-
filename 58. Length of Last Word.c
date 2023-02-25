/* Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

 */
int lengthOfLastWord(char * s){

int len = 0;
char *traverse;

    while(*s != '\0'){

        if(*s != ' ')
        {
            len++;
        }
        else{
            traverse = s;
            while(*traverse != '\0'){
                if(*traverse++ != ' '){
                    len = 0;
                }
            }
        }

    *s++;
    }
    
    
    return len; 
}
