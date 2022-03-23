#include <stdio.h>

int main()
{

    
    FILE *pF = fopen("C:\\Users\\Desktop\\test.txt", "w");

    fprintf(pF, "\nPatrick");

    fclose(pF);
    

//    if(remove("test.text") == 0)
//    {
//        printf("That file was deleted sucessfully!");
//    }
//    else
//    {
//        printf("That file was NOT deleted");
//    }

    return 0;
}