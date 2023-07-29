/*
Fill in the missing lines of code to accept a positive N integer and find its factors.

#include <stdio.h> 
#include <stdlib.h> 
#define LLU unsigned long long int 

int main() 
{ 
		LLU N, ctr; 
		int factorsCount = 0; 
		scanf("%llu", &N); 
		for(ctr = 1; ___ ; ctr++) 
		{ 
			if(N % ctr == 0) 
			{ 
				_______ ; 
			} 
		} 
		if(___) 
		{ 
		___________; 
		} 
		printf("%d", factorsCount); 
		return 0; 
}

SOLUTION:
*/

#include <stdio.h> 
#include <stdlib.h> 
#define LLU unsigned long long int 

int main() 
{ 
  LLU N, ctr; 
  int factorsCount = 0; 
  scanf("%llu", &N); 
  
  for(ctr = 1; ctr * ctr <= N && N > 0; ctr++) 
  { 
    if(N % ctr == 0) 
    { 
      factorsCount += 2; 
    } 
  } 
  if(N == 1) 
  { 
    factorsCount = 1;
  } 
  printf("%d", factorsCount); 
  return 0;
}
