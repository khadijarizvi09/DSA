//Khadija Rizvi
//Admission No. 2021B0101155
 #include <stdio.h>
int findMissing(int arr[], int N)
{
	int sum=0,obs;
	for(int i =0 ; i < N-1 ; i++ ){
		sum = sum + arr[i];
	}
	obs =(N*(N+1))/2;
	return(obs-sum);

}
int main()
{
	int arr[] = { 1, 2, 4, 5, 6, 7 };
	int n= 7;
	
	int key = findMissing(arr, 7);
	printf("missing number:");
	printf("%d",key);
	
}
