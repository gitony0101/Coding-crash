import sys

from PySide6.QtWidgets import QApplication, QWidget, QRadioButton, QVBoxLayout, QHBoxLayout, QLabel
from PySide6.QtGui import QIcon, QFont
from PySide6.QtCore import QSize


class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.setGeometry(200, 200, 300, 200)  # 设定尺寸
        self.setWindowTitle("PySide6 QRadioButton")  # 窗口标题
        self.create_radio()  # 声明别忘了

    def create_radio(self):
        hbox = QHBoxLayout()

        rad1 = QRadioButton("Python")
        rad1.setIcon(QIcon("images/Emirates.png"))
        rad1.setIconSize(QSize(40, 40))
        rad1.setFont(QFont("Emirates", 16))
        rad1.setChecked(True)  # 标记实心

        rad2 = QRadioButton("C++")
        # rad1.setIcon(QIcon("images/Emirates.png"))
        # rad1.setIconSize(QSize(40, 40))
        rad2.setFont(QFont("Times", 16))
        # rad2.setChecked(True)  # 标记实心

        rad3 = QRadioButton("Java")
        rad3.setFont(QFont("Times", 16))
        # rad3.setChecked(True)  # 标记实心

        hbox.addWidget(rad1)
        hbox.addWidget(rad2)
        hbox.addWidget(rad3)
        self.setLayout(hbox)

        vbox = QVBoxLayout()
        self.label = QLabel("Coding Languages")
        # self.label.setFont(QFont("Sanserif", 20))
        vbox.addWidget(self.label)
        self.setLayout(vbox)


app = QApplication(sys.argv)
window = Window()
window.show()

sys.exit(app.exec())
