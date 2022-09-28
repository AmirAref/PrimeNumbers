# Prime Numbers

this is a repo to find the prime numbers by a same algorithm in various programming languages (the purpose in doing this is test the speed of them and learn about other languages).


<!-- ## What is the Algorithm ? -->

## How to set the range variable ?
if the value type is the _in the command arguments_, you have to pass the range in the command arguments in the terminal
but if the valu type is the _in the source code_, you must to change the range in the source code

## How to Compile and test the speed ?
here is the commands to run for each language, if you want to check the run time you can use the `time` command before your main command (in linux). like `time python app.py`  
the result in my machine : [Spped Result](SPEED.md)

<br><hr>

## [Python](https://github.com/AmirAref/PrimeNumbers/tree/master/Python)

requirements : [Python Interpreter](https://python.org)  
Command : `python main.py 1000000`

<br>

## [JavaScript](https://github.com/AmirAref/PrimeNumbers/tree/master/JS)

requirements : [nodejs](https://nodejs.org/en/)  
Command : `node main.js 1000000`

<br>

## [TypeScript](https://github.com/AmirAref/PrimeNumbers/tree/master/TS)
the TypeScript must compile to JavaScript, then run it like JS
<br>
requirements :  
Compile to JavaScript : [TypeScript Compiler](https://www.typescriptlang.org/download)  
Run with : [node.js](https://nodejs.org/en/)  
<br>
Compile : `tsc main.ts`  
Run (Like JS) : `node main.js 1000000`  

<br>

## [C](https://github.com/AmirAref/PrimeNumbers/tree/master/C)

requirements : **gcc** (that is exists in linux distros by default)  
Compile : `gcc -o main main.c -lm`  
Run : `./main 1000000`  

<br>

## [C++](https://github.com/AmirAref/PrimeNumbers/tree/master/C++)

requirements : **g++** (that is exists in linux distros by default)  
Compile : `g++ main.cpp -o main`  
Run : `./main 1000000`  

<br>

## [Rust](https://github.com/AmirAref/PrimeNumbers/tree/master/Rust)
requirements : [Rust Compiler](https://www.rust-lang.org/tools/install)  
Compile : `rustc main.rs`  
Run : `./main 1000000`  

<br>

## [Go](https://github.com/AmirAref/PrimeNumbers/tree/master/Go)
requirements : [Go Compiler](https://go.dev/)  
Compile : `go build main.go`  
Run : `./main 1000000`
or run without build : `go run main.go 1000000`  

<br>

## [Lua](https://github.com/AmirAref/PrimeNumbers/tree/master/Lua)
requirements : [Lua Interpreter](https://lua.org)  
Run : `lua main.lua 1000000`  

<br>

## [Dart](https://github.com/AmirAref/PrimeNumbers/tree/master/Dart)
in the dart language the range variable was define in the source code  
requirements : [Dart sdk](https://dart.dev)  
Run : `dart main.dart`  

<br><hr>
## TODO :
 - [ ] Java
 - [ ] C#
 - [ ] Bash
 - [ ] PHP
 - [ ] Go
 - [ ] Ruby
 - [ ] Julia
