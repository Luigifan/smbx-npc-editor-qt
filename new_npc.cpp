#include "new_npc.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

new_npc::new_npc()
{
    new_npc::npc_values = new QMap<QString, QString>();
}

int new_npc::loadNPC(QString file)
{
    QFile qfile(file);
    if(!qfile.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "Error", qfile.errorString());

    QTextStream in(&qfile);
    while(!in.atEnd())
    {
        QString line = in.readLine();
        if(line.contains("="))
        {
            QStringList split = line.split("=", QString::SkipEmptyParts);
            new_npc::npc_values->insert(split[0], split[1]);
        }
    }
    return 0;
}

int new_npc::saveNPC(QString file)
{
    QFile qfile(file);
    if(!qfile.open(QIODevice::ReadWrite))
        QMessageBox::information(0, "Error", qfile.errorString());
    QTextStream stream(&qfile);
    QMap<QString, QString>::iterator i = new_npc::npc_values->begin();
    while(i != npc_values->end())
    {
        stream << i.key() << "=" << i.value() << endl;
        i++;
    }
    qfile.close();
    return 0;
}
