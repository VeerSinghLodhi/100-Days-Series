// Arrow Function for count Vowels
 const getCountVowels=(str)=>{
    let countVowels=0;
    let len=str.length;
    for(let i=0;i<len;i++){
        ch=str.charAt(i);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            countVowels++;
        }
    }
    return countVowels;
}
// Arrow Function for count Consonants
const getCountConsnants=(str)=>{
    let countConsonants=0;
    let len=str.length;
    for(let i=0;i<len;i++){
        ch=str.charAt(i);
        if(!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
            countConsonants++;
        }
    }
    return countConsonants;
}

let str="VeerSinghLodhi";
let countVowels=getCountVowels(str);
let countConsonants=getCountConsnants(str);
console.log(str+" in this String....");
console.log("Total Vowels are : "+countVowels);
console.log("Total Consonants are : "+countConsonants);