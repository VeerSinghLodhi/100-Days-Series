
function getCheckPrimeNumber(num){
    ans=true;
    if(num==1 || num==0)
        ans=false;
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                ans=false;
                break;
            }
        }
    }
    return ans;
}

num=19;
ans=getCheckPrimeNumber(num);
if(ans)
    console.log(num+" is a Prime Number");
else
    console.log(num+" is not a Prime Number");