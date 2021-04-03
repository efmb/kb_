/*
const nome = "EF_ohh!"; // \O/ In "js" you may or may not use ";" to end an instruction.
   
console.log(name)         //  Check installations on the Ctrl+J console, node index.js, node -v, np, -v, choco -v
*/

/* 
const name = "Mayk"
const name2 = 'Diego'
const name3 = `Valeska e ${name}`// Template string (You can insert a variable by calling another variable).
   
console.log(name3)
*/

// Create a program that averages grades between students and sends an avarege score message.

const student01 = 'Mayk'
const student02 = 'Diego'
const student03 = 'Fulano'
const noteStudent01 = 9.8
const noteStudent02 = 10
const noteStudent03 = 2

//const average = 10000000000000000000000000000000000000000000000000000000000000 + 100000000000000000000000000000000000000000000000000000000000
//console.log(typeof noteStudent01)

const average = (noteStudent01 + noteStudent02 + noteStudent03) / 3

// If the average is greater than 5, congratulate the class.
if (average > 5) {
    console.log('The average was ${average}. Congratulations.')
} else {
    console.log('The average is <5')
}

console.log(average)_
