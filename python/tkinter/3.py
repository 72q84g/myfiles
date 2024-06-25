import tkinter as tk

def btn_clicked(event):
    print(event.x, event.y)
    global xValue,yValue
    xValue,yValue = event.x,event.y

def key_pushed(event):
    print(event.keysym)

def clicked_time(event):
    print(event.time)

# ウィンドウ作成
root = tk.Tk()

# イベント<modifier-type-detail>
root.bind("<Button-2>", btn_clicked)  # ホイールクリック
root.bind("<ButtonRelease-3>", clicked_time)  # 右クリック

root.bind("<Key-a>", key_pushed)
root.bind("<KeyRelease-Return>", key_pushed)

# modifier
# Control	Ctrl キーを押しながらの入力
# Shift	    Shift キーを押しながらの入力
# Alt	    Alt キーを押しながらの入力
# Button1    マウスの左ボタンを押しながらの入力
# Double	    ダブルクリック
# Triple	    トリプルクリック
root.bind("<Control-Motion>", btn_clicked)  # マウスの移動
root.bind("<Double-Button-1>", btn_clicked)

# メインループ
root.mainloop()

print(xValue,yValue)