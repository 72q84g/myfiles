import tkinter as tk
import sys

root = tk.Tk()
root.geometry("500x500")

menubar = tk.Menu(root)
root.configure(menu = menubar)
file = tk.Menu(menubar, tearoff = False)
menubar.add_cascade(label="ファイル", underline = 0, menu=file)

tk.Label(root, text = "ラベル").pack()
button1 = tk.Button(root, text = 'ボタン',command = sys.exit)
button2 = tk.Checkbutton(root)
buffer = tk.StringVar()
buffer.set("abcde")
entry = tk.Entry(root,textvariable = buffer)

button1.place(x=100, y=200, width=100, height=50)
button2.pack()
entry.pack()
entry.focus_set()

root.mainloop()