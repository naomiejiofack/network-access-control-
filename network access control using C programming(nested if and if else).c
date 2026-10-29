#include <stdio.h>

int main() {
	int employeeID,training,account;
	printf("is the employeeID valid ?\n");
	scanf("%d",&employeeID);
	printf("has the secuirity training been completed ?\n");
	scanf("%d",&training);
	printf("is the employee account active ?\n");
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
