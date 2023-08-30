import requests
import json

#Random acativity
url = requests.get("https://www.boredapi.com/api/activity")
activity = url.json()["activity"]
print(f"{activity}")

#Ip
url = requests.get("https://api.ipify.org/?format=json")
ip = url.json()["ip"]
print(f"{ip}")

#Location
url = requests.get("https://ipinfo.io/{}/geo".format(ip))
print(url.json())