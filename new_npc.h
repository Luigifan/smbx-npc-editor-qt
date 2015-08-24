#ifndef NEW_NPC_H
#define NEW_NPC_H
#include <QString>
#include <QMap>
#include <QFile>

class new_npc
{
public:
    new_npc();
    QMap<QString, QString> *npc_values;
    int loadNPC(QString file);
    int saveNPC(QString file);
};

#endif // NEW_NPC_H
