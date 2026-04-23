#include <stdio.h>
int main()
{
    FILE *fp;
    // yaha pr file ko declare kiya gya h as a pointer(yaha pr hamne pointer isiliye use kia h kyuki yaha pr address store krta h yeh of opened file)
    char ch;
    fp=fopen("demo.txt","a+"); //yaha pr append bhi kr rhe h create bhi ho ja rhi h aur writing bhi kr skte h and even read bhi
    if(fp==NULL)
    {
        printf("\nFile Does not Exist");
    }
    else
    {
        printf("Enter the content,\nPress ctrl+z+enter key to end writing\n");
        while((ch=getchar())!=EOF)//yaha pr har ik character ko input lene mein help kr rha h 
        {
           fputc(ch,fp); // iska syntax aisa rehta h ki "fputc(kyaaaa chiz input krni h,konsi file mein krni h uska naam)"
        }
        fclose(fp);
        fp=fopen("demo.txt","r");
        while(ch!=EOF)
        {
            printf("%c",ch);
            ch=fgetc(fp);
        }
        fclose(fp);
    }
}