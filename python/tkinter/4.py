import tkinter as tk
import os

def btn_clicked(event):
    print(event.x,event.y)
    f=open("python/tkinter/tmp.txt","a")
    print(event.x,event.y,file=f)
    f.close()

def main():
    root = tk.Tk()
    root.geometry("500x500")
    canvas = tk.Canvas(width=500, height=500)
    canvas.pack()

    canvas.bind("<Button-1>", btn_clicked)
    button1 = tk.Button(root, text = 'ボタン',command = root.quit)
    button1.place(x=100, y=200, width=100, height=50)

    tk.Scale(root).place(x=400, y=150, height=200)

    root.mainloop()

    f=open("python/tkinter/tmp.txt","r")
    lines = f.readlines()
    print(lines[-1])
    f.close()
    os.remove('python/tkinter/tmp.txt')

main()