import random

trials = 10000
same_birth = 0 
#birthdays = []
for _ in range(trials):
    birthdays = []
    for _ in range(23):
        birthday = random.randint(1,365)
        #birthdays.append(birthday)
        
        if birthday in birthdays:
            same_birth += 1 
            break
        birthdays.append(birthday)
        
print(f'{same_birth / trials * 100}%')
