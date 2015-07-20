/**Calculatoral  v1.0
 *By:undefine
 *2014.9.1.
*/
#include <QApplication>
#include"calculator.h"


int main(int argc,char *argv[])

{
    QApplication app(argc,argv);
    Calculator cal;
    cal.show();
    return app.exec();
}
