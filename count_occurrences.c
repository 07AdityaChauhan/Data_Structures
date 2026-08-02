#include<stdio.h>
int main(){
    int n,x;
    int i,count=0,position=0;
    
    printf("Enter the number of Elements n :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of Array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number that occurs several times : ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
    	if(arr[i]==x){
    		count++;
    		if(count==1){
    			position = i;
			}
		}
	}
   if (count > 0) {
        printf("\n%d appears %d times in the array", x, count);
        printf("\nFirst occurence Index: %d", position );
    } else {
        printf("\nThe element %d does not exist in the array.", x);
    }
    return 0;     
}

