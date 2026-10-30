#include <stdio.h>

int main() {
	int employeeID,training,account;
	printf("is the employeeID valid or invalid?,enter 1 if valid 0r 0 if invalid\n");
	scanf("%d",&employeeID);
	printf("has the secuirity training been completed or not ?,enter 1 for complete or 0 for incomplete\n");
	scanf("%d",&training);
	printf("is the employee account active or inactive ?,enter 1 for active or 0 for inactive\n");
	scanf("%d",&account);
	if(employeeID==0){
		printf("access rejected: invalid employeeID\n");
		return 0;
	}
		if(employeeID==1){
			if(training==0){
				printf("access rejected: training required\n");
			}
			else if(training==1&&account==0){
				printf("access rejected: account inactive\n");
			}
			else if(training==1&&account==1){
				printf("access granted\n");
			}
}
	return 0;
}
