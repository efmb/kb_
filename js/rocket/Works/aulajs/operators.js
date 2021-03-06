/*============================================================================
    COPARISON OPERATORS

    >      Bigger.
    <      Smaller.
    >=     Bigger than.
    <=     Less than.
    ==     Equal.
    ===    Same and the same type.
    !=     Different than.
    !===   Different, even of the same type.

=============================================================================*/

/*=============================================================================

console.log(5 > 4)     // true
console.log(5 < 4)     // false
console.log(5 >= 4)    // true
console.log(4 <= 4)    // true

console.log(4 == "4")  // true
console.log(4 === "4") // false
console.log(4 != "5")  // true
console.log(4 !== "5") // true

=============================================================================*/

// Challenger 01
// Check if the personis over 18 years old. >>> Make sure the person's age is 18 uear or order.
// If so, let it in.
// Otherwise, block the entry.
// If the person is 17 years old, tell him to come back when turns 18.

const age = 17 // If it contains a comma ",", please review the error.
if(age >= 18) {
    console.log("Let it in.")
} else {
    console.log("Block the entrance or Entry blocked.")
}

if(age === 17){
    console.log("Come back when you're 18")
}