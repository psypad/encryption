use rand::prelude::*;

fn main() {
    println!("Hello, world!");
    
    let mut rng = rand::rng();
    for i in 1..100{}
    println!("char: '{}'", rng.random::<char>());
    
    let mut rng = rand::rng();

    println!("Random die roll: {}", rng.random_range(1..=6));
    println!("Random UUID: 0x{:X}", rng.random::<u128>());

    if rng.random() {
        println!("You got lucky!");
    }
}