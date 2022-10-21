import sys

from PySide6.QtWidgets import QApplication, QWidget, QLabel
from PySide6.QtGui import QIcon, QFont, QPixmap


class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.setGeometry(200, 200, 700, 400)  # 设定尺寸
        self.setWindowTitle("Python GUI Development")  # 窗口标题
        self.setWindowIcon(QIcon('images/Emirates.png'))  # 图标
        # self.setFixedWidth(700)  # 宽
        # self.setFixedHeight(400)  # 高
        self.setStyleSheet('background-image: white')  # 背景不对

        label = QLabel("Py GUI Dev", self)
        # label.setText(str(12))
        label.setNum(15)
        label.setText("Fly Emirates")
        label.move(100, 100)  # 坐标式移动
        label.setFont(QFont("Emirates", 42))  # QFont包
        label.setStyleSheet('color:red')
        # label.clear()  # 清屏

        # label2 = QLabel(self)
        # pixmap = QPixmap('images/Emirates.png')
        # label2.setPixmap(pixmap)


app = QApplication(sys.argv)
window = Window()
window.show()

sys.exit(app.exec())
