// Your code here...
int isPrime(int num){
    if(num<=1) return 0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int printPrimesInRange(int a,int b ){
    int isfound=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
            isfound=1;
        }       
    }
    if(!isfound){
        printf("No prime numbers");
    }

        
}