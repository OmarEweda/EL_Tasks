import requests
import json

url = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
jf = url.json()

filename = 'posts.json'
with open(filename, 'w') as file:
    json.dump(jf, file)


print(jf["bpi"]["USD"]["rate"] + "\n" + jf["bpi"]["EUR"]["rate"])