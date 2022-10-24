import sys

from PySide6.QtWidgets import QApplication, QWidget, QLabel, QHBoxLayout, QPushButton
from PySide6.QtGui import QIcon, QFont
from PySide6.QtCore import QSize


class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.setGeometry(200, 200, 700, 400)  # 设定尺寸
        self.setWindowTitle("PySide6 Event Handling")  # 窗口标题
        self.create_widget()

    def create_widget(self):
        hbox = QHBoxLayout(self)
        btn = QPushButton("Change Text")
        btn.clicked.connect(self.clicked_btn)
        self.label = QLabel("Default Text")

        hbox.addWidget(btn)
        hbox.addWidget(self.label)

        self.setLayout(hbox)

    def clicked_btn(self):
        self.label.setText("Another Text")
        self.label.setFont(QFont("Emirates", 42))  # QFont包
        self.label.setStyleSheet("color:red")


app = QApplication(sys.argv)
window = Window()
window.show()

sys.exit(app.exec())
