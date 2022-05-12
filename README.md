# Programming Languages

this is a repository to run a same algorithm in various programming languages and test the speed of them



## What is the Algorithm ?

the algorithm that i used is the counting the prime numbers in a range (1,000,000) with a same process and a same method in each language.

## How to set the Value of range ?
if the value type is the _in the command arguments_, you have to pass the range in the command arguments in the terminal
but if the valu type is the _in the source code_, you must to change the range in the source code

## How to Compile and test the speed ?

### Python

_needs to install [Python Interpreter](https://python.org)_ 

| Method         | Command                              | value                      |
| :------------- | ------------------------------------ | -------------------------- |
| Run            | `python Python/main.py 1000000`      | _in the command arguments_ |
| Test the Speed | `time python Python/main.py 1000000` | _in the command arguments_ |

<br>

### JavaScript

_it needs to install [nodejs](https://nodejs.org/en/)_ 


| Method         | Command                        | value                      |
| :------------- | ------------------------------ | -------------------------- |
| Run            | `node JS/main.js 1000000`      | _in the command arguments_ |
| Test the Speed | `time node JS/main.js 1000000` | _in the command arguments_ |

<br>

### TypeScript

_it needs to install [nodejs](https://nodejs.org/en/)_ 
_then needs to install the [TypeScript Compiler](https://www.typescriptlang.org/download)_ 

the TypeScript must compile to JavaScript, then run it like JS


| Method                | Command                        | value                      |
| :-------------------- | ------------------------------ | -------------------------- |
| Compile               | `tsc TS/main.ts`              |                            |
| Run (Like JavaScript) | `node TS/main.js 1000000`      | _in the command arguments_ |
| Test the Speed        | `time node TS/main.ts 1000000` | _in the command arguments_ |

<br>

### C

_it only needs to gcc (that is exists in linux os by default)_

| Method         | Command                      | value                      |
| :------------- | ---------------------------- | -------------------------- |
| Compile        | `gcc -o C/main C/main.c -lm` |                            |
| Run            | `./C/main 1000000`           | _in the command arguments_ |
| Test the Speed | `time ./C/main 1000000`      | _in the command arguments_ |

<br>

### C++

_it only needs to g++ (that is exists in linux os by default)_

| Method         | Command                        | value                      |
| :------------- | ------------------------------ | -------------------------- |
| Compile        | `g++ C++/main.cpp -o C++/main` |                            |
| Run            | `./C++/main 1000000`           | _in the command arguments_ |
| Test the Speed | `time ./C++/main 1000000`      | _in the command arguments_ |

<br>Rust

_it only needs to install the [Rust Compiler](https://www.rust-lang.org/tools/install)_

| Method         | Command                    | value                      |
| :------------- | -------------------------- | -------------------------- |
| Compile        | `rustc Rust/main.rs`       |                            |
| Run            | `./Rust/main 1000000`      | _in the command arguments_ |
| Test the Speed | `time ./Rust/main 1000000` | _in the command arguments_ |

<br>Lua

_it needs to install [Lua](https://lua.org)_ (if not exists)

| Method         | Command                         | value                      |
| :------------- | ------------------------------- | -------------------------- |
| Run            | `lua Lua/main.lua 1000000`      | _in the command arguments_ |
| Test the Speed | `time lua Lua/main.lua 1000000` | _in the command arguments_ |

<br>

### Dart

_it needs to install [Dart sdk](https://dart.dev)_

| Method         | Command                    | value                |
| :------------- | -------------------------- | -------------------- |
| Run            | `dart Dart/main.dart`      | _in the source code_ |
| Test the Speed | `time dart Dart/main.dart` | _in the source code_ |
