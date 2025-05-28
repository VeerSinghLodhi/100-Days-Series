
// Function to calculate the sum of even integers
const getSumOfEvenNumber=(numbers)=>{
    let evenSum=0;
    for(let i=0;i<numbers.length;i++){
        if(numbers[i]%2==0){
            evenSum+=numbers[i];
        }
    }
    return evenSum;
}
// Function to calculate the sum of odd integers
const getSumOfOddNumber=(numbers)=>{
    let oddSum=0;
    for(let i=0;i<numbers.length;i++){
        if(numbers[i]%2!=0){
            oddSum+=numbers[i];
        }
    }
    return oddSum;
}

// Let's Start Here
let numbers=[1,2,3,4,5];
let evenSum=getSumOfEvenNumber(numbers);
let oddSum=getSumOfOddNumber(numbers);
console.log("The Sum of Even integers is : "+evenSum);
console.log("The Sum of Odd integers is : "+oddSum);