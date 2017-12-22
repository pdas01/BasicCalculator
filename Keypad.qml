import QtQuick 2.0

Rectangle
   {

       property string name
       property int keypadHeight
       property int keypadWidth
       id: rect
       height: keypadHeight
       width: keypadWidth
       color: "#1f1f1f"
       border.color: "transparent"
       border.width: 1

       Text
       {
             id:textArea1
             anchors.centerIn: parent
             text: name

             color: "white"
             font.pointSize: 20
             font.bold:true


        }
   }
