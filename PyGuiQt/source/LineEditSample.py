import sys

from PySide6.QtWidgets import QApplication, QWidget, QPushButton, QLabel, QLineEdit
from PySide6.QtGui import QIcon, QFont
from PySide6.QtCore import QSize


class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.setGeometry(200, 200, 700, 400)  # 设定尺寸
        self.setWindowTitle("PySide6 QLineEdit")  # 窗口标题
        # self.setWindowIcon(QIcon('images/Emirates.png'))  # 图标
        # self.setFixedWidth(700)  # 宽
        # self.setFixedHeight(400)  # 高
        # self.setStyleSheet('background-image: white')  # 背景不对

        label = QLabel("Py GUI Dev", self)
        # label.setText(str(12)) #那么这里设定的就是默认值
        label.setNum(15)
        label.setText("Fly Emirates")
        label.move(220, 150)  # 坐标式移动
        label.setFont(QFont("Emirates", 42))  # QFont包
        label.setStyleSheet('color:red')

        line_edit = QLineEdit(self)
        line_edit.setFont(QFont("Emirates", 22))
        # line_edit.setText("Fly Better!")
        line_edit.setPlaceholderText("Please enter your destination here...")
        line_edit.setGeometry(0, 0, 300, 50)
        line_edit.setEnabled(False)  # 虚化边框

        line_edit_pswd = QLineEdit(self)
        line_edit_pswd.setFont(QFont("Emirates", 22))
        line_edit_pswd.setPlaceholderText(
            "Please enter your password...")
        line_edit_pswd.setGeometry(0, 80, 300, 50)
        line_edit_pswd.setEchoMode(QLineEdit.EchoMode.Password)


app = QApplication(sys.argv)
window = Window()
window.show()

sys.exit(app.exec())
