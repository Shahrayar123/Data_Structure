class Stack():
  # self.index = -1
  def __init__(self):
    self.stack = []           # contain elements
      
  def push(self,element):
    self.stack.append(element)

  def is_empty(self):
    return self.stack == []

  def pop(self):
    temp = None
    if self.is_empty():
      print("------> Stack is Empty")
      # self.items.clear()
      return temp
    else:
      return self.stack.pop()
  
  def display_stack(self):
    return self.stack
  
  def check_length(self):
    return len(self.stack)

def menu():
  print("----------------- Menu ----------------- ")
  print("\nPress 1 to PUSH element in stack")
  print("Press 2 to POP element from stack")
  print("Press 3 to DISPLAY all element of stack")
  print("Press 4 to display LENGTH of stack")
  print('Press 5 to check wehther stack is EMPTY or not')
  print('Press 0 to EXIT\n')
  choice = int(input("Enter your choice: "))

  return choice

if __name__ == '__main__':
  s = Stack()

  while(1):
    choice = menu()

    if choice == 0:
      break

    elif choice == 1:
      item = input("------> Enter number: ")
      s.push(item)
    
    elif choice == 2:
      item = s.pop()
      if item == None:
        print(" ")
      else:
        print(f"------> Poped item is: {item}")
    
    elif choice == 3:
      print(f"------> Stack is: {s.display_stack()}")
    
    elif choice == 4:
      print(f"------> Length of stack is: {s1.check_length()}")
    
    elif choice == 5:
      i = s.is_empty()
      if i == True:
        print("------> Stack is Empty")
      else:
        print("------> Stack is not empty")

