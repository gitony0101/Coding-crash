import sys

from PySide6.QtWidgets import QApplication, QWidget, QPushButton, QLabel, QMenu
from PySide6.QtGui import QIcon, QFont
from PySide6.QtCore import QSize


class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.setGeometry(200, 200, 700, 400)  # 设定尺寸
        self.setWindowTitle("PySide6 QPushButton")  # 窗口标题
        # self.setWindowIcon(QIcon('images/Emirates.png'))  # 图标
        # self.setFixedWidth(700)  # 宽
        # self.setFixedHeight(400)  # 高
        # self.setStyleSheet('background-image: white')  # 背景不对

        label = QLabel("Py GUI Dev", self)
        # label.setText(str(12))
        label.setNum(15)
        label.setText("Fly Emirates")
        label.move(220, 100)  # 坐标式移动
        label.setFont(QFont("Emirates", 42))  # QFont包
        label.setStyleSheet('color:red')

        self.create_button()

    def create_button(self):
        btn = QPushButton("Book Now!", self)
        btn.setGeometry(250, 200, 130, 100)
        btn.setFont(QFont("Emirates", 22))
        btn.setWindowIcon(QIcon('images/Emirates.png'))  # 图标还是显示不出来
        btn.setIconSize(QSize(36, 36))
        # Pop up menu by QMenu 显示不出来
        menu = QMenu()
        menu.setFont(QFont("Emirates", 12))
        menu.addAction("Copy")
        menu.addAction("Cut")
        menu.addAction("Paste")
        btn.setMenu(menu)


app = QApplication(sys.argv)
window = Window()
window.show()

sys.exit(app.exec())
