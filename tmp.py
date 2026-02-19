import pyautogui
import time

sentence = "Swarna tumi amare kobe nije theke message diba? bolo...."
n = 50
sentences = [
    "Ki bhabe kotha bolcho? Eta ki bhodrota?",
    "Beyadobi korteso je?",
    "Evabe kotha bola ekdom thik na.",
    "Bujhlam na, adob-kaida shikho nai naki?",
    "Boro der shathe evabe kotha bola jay?",
    "Kotha bolar age duibar bhabo.",
    "Achoron thik koro,",
    "Eta shesh barer moto bolchi..",
    "Bhodro vabe kotha bolte shekho.",
    "Tomar bebohar ekdom grohonjoggo na apni/tumi bolo.",
    "Nijeke thik koro age, tarpor kotha bolo."
]

print("Place your cursor where you want to type...")
time.sleep(5)

for i in range(n):
    pyautogui.write(sentences[i % len(sentences)])
    pyautogui.press("enter")
    time.sleep(0.1)
