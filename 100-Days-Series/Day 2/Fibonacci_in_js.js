

let num=10,firstTerm=0,secondTerm=1,nextTerm;
console.log(" "+firstTerm+"\n "+secondTerm);
for(i=0;i<num;i++)
{
    nextTerm=firstTerm+secondTerm;
    console.log(" "+nextTerm);
    firstTerm=secondTerm;
    secondTerm=nextTerm;
}