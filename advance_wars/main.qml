import QtQuick 2.6
import QtQuick.Controls 2.1

ApplicationWindow {
    visible: true
    width: 700
    height: 700
    title: qsTr("Map Deisgn")

    Component.onCompleted: {
        gridView.model.append({
            myColor: 'black'
        });
        gridView.model.append({
            myColor: 'green'
        });
        gridView.model.append({
            myColor: 'black'
        });
    }

    Gridview {
        id: gridView

        anchors {
            top: parent.top
            bottom: parent.bottom
            left: parent.left
            right: parent.right
            leftMargin: 20
            topMargin: 20
        }

        cellWidth: width/10
        cellHeight: height/10

        model: ListModel{}

        delegate: Rectangle{
            color: myColor
        }
    }
}
