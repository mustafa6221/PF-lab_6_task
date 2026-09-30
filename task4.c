// The Coastal Freight Container Scanner
#include<stdio.h>
int main()
{
int n_container,i,c_weight,c_type,c_code;

printf("Enter the number of continer :");
scanf("%d",&n_container);
for(i=1;i<=n_container;i++){
    printf("Enter the weight of container%d(kg):",i);
    scanf("%d",&c_weight);
    printf("Select the cargo type:\n");
    printf("1.General Goods\n");
    printf("2.Hazardous Materials\n");
    printf("3.Refrigerated goods\n");
    printf("(1-3):");
    scanf("%d",&c_type);
    printf("=============================================\n");
    switch (c_type)
    {
    case 1:
        if(c_weight>=20000){
            printf("The container cannot be loaded\n");
        }
        else{
            printf("Container can be loaded\n");
        }
        break;
    case 2:
        if(c_weight<=15000&& i%2!=0){
            printf("Container cannot be loaded\n");
        }
        else{
            printf("Container cannot be loaded\n");
        }
        break;
    case 3:
        if (c_weight<=18000)
        {
            printf("Container can be loaded\n");
        }
        else{
            printf("Container cannot be loaded\n");
        }
        
    
    default:
       printf("invalid category");
        break;
    }

    c_code = (c_weight%97)%100;

    printf("The container%d tracking code is %d\n",i,c_code);
    printf("===============================================\n");


    



}
}
