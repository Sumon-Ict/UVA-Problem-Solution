import platform
import datetime

y=datetime.datetime.now()
print(y.year)

print(y.strftime("%A"))


x=dir(platform)

print(x)


