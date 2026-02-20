import pyautogui
import time

sentence = "Swarna tumi amare kobe nije theke message diba? bolo...."
n = 100
shayari = [
    "Kabhi kabhi kisi ka intezar bhi insaan ko khud se mila deta hai.",
    "Tum se baat ho ya na ho, magar tumhara khayal rehna zaroori hai.",
    "Khamoshi bhi ajeeb hoti hai, dil ki baatein keh jaati hai.",
    "Kuch log zindagi mein aise milte hain, jinse kam baat ho kar bhi lagav ho jata hai.",
    "Intezaar karna aadat nahi meri, bas tum par yakeen zyada hai.",
    "Dil se nikli hui baat asar karti hai, warna kaghaz par har koi likh leta hai.",
    "Kuch ehsaas lafzon mein bayan nahi hote, bas mehsoos kiye jaate hain.",
    "Tumhari ek chhoti si baat bhi din ko behtar bana deti hai.",
    "Har mulaqat zaroori nahi hoti, kuch rishte ehsaas se bhi chalte hain.",
    "Kabhi kabhi chup rehna bhi behtareen jawab hota hai."
]

print("Place your cursor where you want to type...")
time.sleep(5)

for i in range(n):
    pyautogui.write(shayari[i % len(shayari)])
    pyautogui.press("enter")
    time.sleep(0.1)
