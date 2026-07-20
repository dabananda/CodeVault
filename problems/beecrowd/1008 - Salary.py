Employee = int(input())
WorkingHours = int(input())
SalaryPerHour = float(input())
amount = WorkingHours * SalaryPerHour
print("NUMBER =", Employee)
print("SALARY = U$ {:.2f}".format(round(amount, 2)))
