name = input("Your name: ")
age = input("Your age: ")
nationality=input("Nationality: ")
status=input("Status(studies or expelled): ")
print(f"Name:{name} | Age:{age} | Nationality:{nationality} | Status:{status}")
if nationality== "kazakh":
    if status == "studies":
        print("Студент оқып жатыр")
    else:
        print("Студент оқудан шықты")
elif nationality=="russian":
    if status=="studies":
        print("Студент учится")
    else:
        print("Студент был отчислен")