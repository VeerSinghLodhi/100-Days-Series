
// Let's Start here
let sentence="Full Stack Developer Veer";

if(sentence.trim()===""){
    console.log("The number of words in the sentence is : 0");
}
else{
    let words=sentence.trim().split(/\s+/);
    console.log("The number of words in the sentence is :"+words.length);
}