class Stack():  
  def __init__(self):
    self.stack = []           # contain elements
      
  def push(self,element):
    self.stack.append(element)

  def is_empty(self):
    return self.stack == []

  def pop(self):
      return self.stack.pop()
  
  def display_stack(self):
    return self.stack
  
  def check_length(self):
    return len(self.stack)

def reverse_str(stack,input_str):
  for i in range(len(input_str)):
    stack.push(input_str[i])
  
  rev_str = ""
  for i in range(len(input_str)):
    rev_str += stack.pop()

  return rev_str



if __name__ == '__main__':
  stack = Stack()
  str_ = input("Enter a word to reverse it: ")
  print(f"Reversed string is: {reverse_str(stack,str_)}")

