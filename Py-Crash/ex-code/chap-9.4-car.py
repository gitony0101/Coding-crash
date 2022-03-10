class Car:
    """模拟汽车的简单尝试"""
    def __init__(self,make,model,year):
        """初始化描述汽车的属性"""
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0
    
    def get_descriptive_name(self):
        """返回整洁的汽车描述性信息"""
        long_name = f"{self.year} {self.make} {self.model}"
        return long_name.title()

    def read_odometer(self):
        """打印一条指出汽车里程的消息"""
        print(f"This car has {self.odometer_reading} miles on it.")

    def update_odometer(self, mileage):
        """将里程表读数设为定植值，拒绝回调"""
        if mileage >= self.odometer_reading: 
            self.odometer_reading = mileage
        else:
            print("You can not roll back the odometer.")

        def increment_odometer(self,miles):
            """将里程表读书增加指定的量"""
            self.odometer_reading += miles
    
class Battery:
        """一次模拟电瓶的简单尝试"""
        def __init__(self, battery_size = 75):
            """初始化电瓶的属性"""
            self.battery_size = battery_size

        def describe_battery(self):
            """打印电瓶容量信息"""
            print(f"This car has a {self.battery_size}-kWh battery.")

        def get_range(self): 
            """打印电瓶续航里程信息"""
            if self.battery_size == 75:
                range = 260
            elif self.battery_size == 100:
                range = 315
            print(f"This car can go about {range} miles on a full charge.")

        def upgrade_battery(self):
            """将电瓶升级为100kWh"""
            if self.battery_size != 100:
                self.battery_size = 100
                print("Upgraded battery to 100 kWh.")
            else:
                print("Battery is already at 100 kWh.")

class ElectricCar(Car):
    """模拟电动车属性的方法"""
    def __init__(self,make,model,year):
        """初始化父类的属性"""
        super().__init__(make,model,year)
        self.battery = Battery()




