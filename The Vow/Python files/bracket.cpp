#include <Python.h>
int main(){
    Py_Initialize();
    const char* pythonCode = R"(
expresion = input("Enter the xepresion here: ")
i = 0
flag = 0
for i in expresion:
    if (i == "("):
        flag += 1
    elif (i == ')'):
        flag -= 1
print(flag)
if (flag == 0):
    print("The bracket is perfectly closed.")
elif (flag < 0):
    print(f"There is/are {flag*-1} ')' extra.")
else:
    print(f"There require {flag} ')'.")
)";
PyRun_SimpleString(pythonCode);
Py_Finalize();
}