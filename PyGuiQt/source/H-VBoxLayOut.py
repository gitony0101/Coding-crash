import sys

from PySide6.QtWidgets import QApplication, QWidget, QHBoxLayout, QVBoxLayout, QPushButton
from PySide6.QtGui import QIcon, QFont
from PySide6.QtCore import QSize

# QHBoxLayout 平行按钮， 对应的还有 QVBoxLayout 垂直按钮，目前这俩还没叠加


class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.setGeometry(200, 200, 700, 400)  # 设定尺寸
        self.setWindowTitle("PySide6 QHBoxLayOut")  # 窗口标题
        self.setWindowIcon(QIcon('images/Emirates.png'))  # 图标
        # self.setFixedWidth(700)  # 宽
        # self.setFixedHeight(400)  # 高
        # self.setStyleSheet('background-image: white')  # 背景不对

        btn1 = QPushButton("Click 1")
        btn2 = QPushButton("Click 2")
        btn3 = QPushButton("Click 3")
        btn4 = QPushButton("Click 4")
        btnV1 = QPushButton("Click one")
        btnV2 = QPushButton("Click two")
        btnV3 = QPushButton("Click three")
        btnV4 = QPushButton("Click four")

        # hbox = QHBoxLayout()
        # hbox.addWidget(btn1)
        # hbox.addWidget(btn2)
        # hbox.addWidget(btn3)
        # hbox.addWidget(btn4)

        vbox = QVBoxLayout()
        vbox.addWidget(btnV1)
        vbox.addWidget(btnV2)
        vbox.addWidget(btnV3)
        vbox.addWidget(btnV4)

        # self.setLayout(hbox)
        self.setLayout(vbox)


app = QApplication(sys.argv)
window = Window()
window.show()

sys.exit(app.exec())
