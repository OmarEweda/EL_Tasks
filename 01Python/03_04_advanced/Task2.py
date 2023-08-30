#Write python code to generate Init function of GPIO for AVR

BYTE = 8

def GPIO_REGISTER_set():
    regester = []
    for i in range (BYTE):
        regIn = input(f"Enter config for bit {i} output is 0, input is 1 :")
        if (regIn == '0') or (regIn == '1'):
            regester.insert(0,regIn)
        else:
            print("wrong input, start over")
            exit()
    regester.insert(0,'b')
    regester.insert(0,'0')
    return regester

with open("GPIO.c", "w+") as f:
    f.write("void Init_PortA_DIR(void){" + "\n" + f"DDRA = {''.join(GPIO_REGISTER_set())};" + "\n" + "}")
    
