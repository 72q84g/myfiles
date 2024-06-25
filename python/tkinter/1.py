import tkinter

# ウィンドウの作成と、Tkinterオブジェクトの取得
window = tkinter.Tk()
# ウィンドウにタイトルを設定
window.title("タイトル")
# ウィンドウのサイズと位置を設定 ("<横幅>x<高さ>+<x座標>+<Y座標>") 座標はウィンドウを表示する場所
#window.geometry("500x400+500+300")

width   = 500   # 横幅
height  = 400   # 高さ
xPos    = 500   # X座標
yPos    = 300   # Y座標
window.geometry(f"{width}x{height}+{xPos}+{yPos}")

# ウィンドウのサイズ変更を制限する (<横幅の変更制限>, <高さの変更制限>) True or False
window.resizable(False, False) 

# ウィンドウの背景色を設定
window.config(bg="#DDEEFF")

# ウィンドウのアイコンを設定
#window.iconbitmap(r"ファイル名.ico")

# ウィンドウのループ処理
window.mainloop()