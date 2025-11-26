#include<stdio.h>
#include<string.h>
int main()
 {  char s[50];
	char t[50];
	printf("Enter string s(lowercase) :");
	scanf("%s",s);
	printf("Enter string t(lowercase): ");
	scanf("%s",t);
	int l1=strlen(s);
    int l2=strlen(t);
	if (l1!=l2) 
    {
    printf("Not Anagram");
    return 0;
    }
   int sf[26]={0};  
   int tf[26]={0};  
   for(int i=0;i<l1;i++)
   {
     sf[s[i]-'a']++; 
   }
   for(int i=0;i<l2;i++)
   {
    tf[t[i]-'a']++;  
   }
int anagram=1;
for (int i=0;i<26;i++)
 {
    if (sf[i]!=tf[i]) 
	 {
        anagram=0;
        break;
    }
}
if(anagram==0)
{
	printf("Not anagrams");
}
else
{
 printf("Anagrams");
}
return 0;
}