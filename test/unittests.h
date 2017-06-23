#include "ApplicationWindow.h"
#include <QTest>

class Unittests: public ApplicationWindow
{
  Q_OBJECT
private slots:
  void readWriteProject();
  void largeOriginImport();

  void exportTestProject();
 
  void showHelp();
  void chooseHelpFolder();
};
