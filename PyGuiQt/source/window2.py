import sys

from PySide6.QtWidgets import QApplication, QMainWindow


app = QApplication(sys.argv)

window = QMainWindow()
# QMainWindow() 以下独有
window.statusBar().showMessage("For Wendy")
window.menuBar().addMenu("File")  # mac目前没有显示

window.show()

sys.exit(app.exec())
