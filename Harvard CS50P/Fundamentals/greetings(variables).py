def greet(input):
    if "hello" in input.lower():
        return "hello, there"
    else: 
        return "Im not sure what else you mean!"


greeting = greet("hello, computer")
print(greeting +" Landon")
