class Car:
    color = ""
    speed = 0

    def upSpeed(self, speed1):
        self.speed = self.speed + speed1
    def downSpeed(self, speed2):
        self.speed = self.speed - speed2

myCar1 = Car()
myCar2 = Car()

myCar1.color = "빨강"
myCar2.color = "파랑"

myCar1.speed = 0
myCar2.speed = 100

myCar1.upSpeed(30)
myCar2.downSpeed(40)

print("차량1의 색상은",myCar1.color,"이고, 현재 속도는",myCar1.speed,"입니다")
print("차량2의 색상은",myCar2.color,"이고, 현재 속도는",myCar2.speed,"입니다")
