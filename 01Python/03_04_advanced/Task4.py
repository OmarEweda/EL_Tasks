import keyboard
import pyperclip

def on_trigger():
    with open('Paste_List.txt', 'a') as f:
        f.write(pyperclip.paste() + '\n')

def listen():
    sc = "ctrl + alt + s"

    keyboard.add_hotkey(sc, on_trigger)

    keyboard.wait()

listen()
