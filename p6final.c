#include<stdio.h>
#include<string.h>
void input_string(char *string)
{
  printf("Enter the string:\n");
  scanf("%[^\n]",string);
}
int count_words(char *string)
{
  int c=0,i=0;
  if(string[0]==' '){
      c=-1;
      i=1;
    }
  for(;string[i]!='\0';i++)
    {
      if(string[i]==' ' && string[i+1]!=' ' && string[i+1]!='\0')
         c++;
    }
  return c;
}
int count_words1(char *string)
{
  int i=0;
  char* word;
  word=strtok(string, " ,\".-");
  while( word != NULL)
  {
      word=strtok(NULL, " ,\".-");
      i++;
  }
  return i;
}
void output(char *string, int no_words)
{
  printf("The number of words is %d\n",no_words);
}
int main()
{
  char string[50];
  input_string(string);
  int words=count_words1(string);
  output(string,words);
  return 0;
}