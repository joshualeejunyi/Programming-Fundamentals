import sys
from PySide2.QtWidgets import QApplication, QMainWindow


class Main(QMainWindow):
    def __init__(self):
        QMainWindow.__init__(self)
        self.setGeometry(0, 0, 1920, 1080)
        self.setWindowTitle("Digital Crime Analyzer")
        #self.setWindowIcon()
        self.show()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Main()
    window.show()
    sys.exit(app.exec_())
