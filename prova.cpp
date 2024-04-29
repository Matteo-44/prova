#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout> // Add missing include

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  // Create the main window
  #include <QVBoxLayout> // Add missing include

  QWidget window;
  window.setWindowTitle("GUI Example");

  // Create the label
  QLabel label("File", &window);

  // Create the buttons
  QPushButton fileButton("File", &window);
  QPushButton modifyButton("Modifica", &window);

  // Create the input text field
  QLineEdit inputText(&window);

  // Create the layout
  QVBoxLayout layout;
  layout.addWidget(&label);
  layout.addWidget(&fileButton);
  layout.addWidget(&modifyButton);
  layout.addWidget(&inputText);

  // Set the layout for the main window
  window.setLayout(&layout);

  // Show the main window
  window.show();

  // Run the application event loop
  return app.exec();
}
