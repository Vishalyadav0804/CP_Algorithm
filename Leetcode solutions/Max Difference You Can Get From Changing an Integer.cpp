class Solution {
public:
    int generate(int num,int x,int y){
        int temp=num;
        int d;
        int sum=0,ten=1;
        while(temp>0){
            d=temp%10;
            if(d==x)
                d=y;
                sum=sum+d*ten;
                ten = ten*10;
            temp=temp/10;
        }
        if(d==0)
            return 0;
        return sum;
    }

    int maxDiff(int num) {
        int max1=num,min1=num,n;
        for(int i=0;i<=9;i++){
            n = generate(num,i,9);
            if(n>max1)
                max1=n;
        }

        for(int i=0;i<=9;i++){
            n = generate(num,i,0);
            if(n==0)
                n = generate(num,i,1);
            if(n<min1)
                min1=n;
        }
        return max1-min1;
    }
};
