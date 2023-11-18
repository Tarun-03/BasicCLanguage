#include <stdio.h>
int isPal(int num){
	int rev=0; // stores the reverse of the number
	int buffer=num; // save a copy of original number
	while(num>0){
		rev=rev*10+(num%10);	// calculates the reverse
						// use pen and paper to
						// understand properly
		num/=10;	// removes the ones digit
	}

	if(rev==buffer){	// return 1 only if the reverse
				// and number are equal
		return 1;
	}
	return 0;		// otherwise return 0
}
int main(){

	int T;
	scanf("%d",&T); // input the number of Test Cases
	int L,R;  // saves the left and right bound of numbers
	long int sum=0;	// saves the final sum of all palindromes
	for(int i=0;i<T;i++){

		scanf("%d%d",&L,&R);	// get the range

		for(int num=L;num<=R;num++){
			if(isPal(num)){		// if statement is set True if
							// returned number is 1 else its 0
				sum+=num;	// add palidnrome to the total sum.
			}
		}

		printf("sum is %ld\n",sum);	// print the result
		sum=0;	//reset sum for next value
	}
	return 0;
}
