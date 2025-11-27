#include<stdio.h>
enum alpha 
{
    A=10,
	B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
};
void main()
{
	enum alpha letter;
	for(int i=A;i<=Z;i++)
	{
		printf("%c=%d\n",'A'+(i-A),i);
	}
}