/*

#include<stdio.h>
int main(){
int row, col, n;
printf("Enter digit to get pattern: ");

scanf("%d", &n);

for(row=1; row<=n; row++){
    for(col=1; col<=row; col++){
        printf(" %d ", col);
    }
printf("\n");
}

}

*/


/*

#include<stdio.h>
int main(){
int row, col, n;
printf("Enter digit to get pattern: ");

scanf("%d", &n);

for(row=1; row<=n; row++){
    for(col=1; col<=row; col++){
        printf(" *# %d", col%2);
        //printf(" *# %d", col%2);
    }
printf("\n");
}

}
*/

/*

#include<stdio.h>
int main(){
int row, col, n;
printf("Enter digit to get pattern: ");

scanf("%d", &n);

for(row=1; row<=n; row++){
    for(col=1; col<=row; col++){
        printf("%c ", col+96);//if i want to output Capital Latter add (64);
        //printf(" *# %d", col%2);
    }
printf("\n");
}

}

*/
//upper to lower pattern
#include<stdio.h>
int main(){
int row, col, n;
printf("Enter digit to get pattern: ");

scanf("%d", &n);

for(row=n; row>=1; row--){
    for(col=n; col>=row; col--){
        printf("* %d", row%2);
        //printf(" *# %d", col%2);
    }
printf("\n");
}

}
