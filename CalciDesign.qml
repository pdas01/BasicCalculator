import QtQuick 2.0
import QtQuick.Controls 2.2
import calculations 1.0
import digits 1.0
Item {
    height: 800
    width:550

    Keypad{
        id:seven
        signal refresh(var value)
        objectName: "seven"
        anchors.top:cancelAll.top
        anchors.topMargin: 80
        anchors.left: parent.left
        anchors.leftMargin: 30
        keypadWidth: 88
        keypadHeight: 56
        name:"7"

       MouseArea{
            id:clickSeven
            objectName: seven.objectName
            anchors.fill: seven
            onPressed: {

                txtedit.insert(txtedit.length,digits.seven7)
                seven.color="light blue"
            }
            onReleased: {
                seven.color="#1f1f1f"
                seven.refresh("seven")

            }
        }

    }
    Keypad{
        id:eight
        objectName: "eight"
        signal refresh(var value)

        anchors.top:cancel.top
        anchors.topMargin: 80
        anchors.left: seven.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"8"

        MouseArea{
            id:clickEight
            objectName: eight.objectName
            anchors.fill: eight
            onPressed: {
                txtedit.insert(txtedit.length,digits.eight8)

                eight.color="light blue"
            }
            onReleased: {
                eight.color="#1f1f1f"
                eight.refresh("eight")
            }
        }

    }
    Keypad{
        id:nine
        signal refresh(var value)

        objectName: "nine"
        anchors.top:squareRoot.top
        anchors.topMargin: 80
        anchors.left: eight.left
        anchors.leftMargin: 111

        keypadWidth: 88
        keypadHeight: 56
        name:"9"

        }
        MouseArea{
            id:clicknine
            objectName: nine.objectName

            anchors.fill: nine
            onPressed: {
                nine.color="light blue"
                txtedit.insert(txtedit.length,digits.nine9)

            }
            onReleased: {
                nine.color="#1f1f1f"
                nine.refresh("nine")
            }
        }


    Keypad{
        id:four
        objectName: "four"
        signal refresh(var value)

        anchors.top:seven.top
        anchors.topMargin: 80
        anchors.left: parent.left
        anchors.leftMargin: 30

        keypadWidth: 88
        keypadHeight: 56
        name:"4"
        MouseArea{
            id:clickfour
            objectName: four.objectName
            anchors.fill: four
            onPressed: {
                txtedit.insert(txtedit.length,digits.four4)

                four.color="light blue"
            }
            onReleased: {
                four.color="#1f1f1f"
                four.refresh("four")
            }
        }

    }
    Keypad{
        id:five
        objectName: "five"
        signal refresh(var value)

        anchors.top:eight.top
        anchors.topMargin: 80
        anchors.left: four.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"5"

              MouseArea{
            id:clickfive
            objectName: five.objectName

            anchors.fill: five
            onPressed: {
                txtedit.insert(txtedit.length,digits.five5)

                five.color="light blue"
            }
            onReleased: {
                five.color="#1f1f1f"
                five.refresh("five")
            }
        }

    }
    Keypad{
        id:six
        objectName: "six"
        signal refresh(var value)

        anchors.top:nine.top
        anchors.topMargin: 80
        anchors.left: five.left
        anchors.leftMargin: 111

        keypadWidth: 88
        keypadHeight: 56
        name:"6"
        MouseArea{
            id:clicksix
            objectName: six.objectName

            anchors.fill: six
            onPressed: {
                txtedit.insert(txtedit.length,digits.six6)

                six.color="light blue"
            }
            onReleased: {
                six.color="#1f1f1f"
                six.refresh("six")
            }
        }

    }
    Keypad{
        id:one
        objectName: "one"
        signal refresh(var value)
        anchors.top:four.top
        anchors.topMargin: 80
        anchors.left: parent.left
        anchors.leftMargin: 30
        keypadWidth: 88
        keypadHeight: 56
        name:"1"
     MouseArea{
            id:clickOne
            objectName: one.objectName

            anchors.fill: one
            onPressed: {
//                txtedit.insert(txtedit.length,one.name)

                one.color="light blue"
            }
            onReleased: {
                one.color="#1f1f1f"
                one.refresh("one")
                txtedit.insert(txtedit.length,digits.one)

            }
        }

    }
    Keypad{
        id:two
        objectName: "two"
        signal refresh(var value)
        anchors.top:five.top
        anchors.topMargin: 80
        anchors.left: one.left
        anchors.leftMargin: 111

        keypadWidth: 88
        keypadHeight: 56
        name:"2"
        MouseArea{
            id:clickTwo
            objectName: two.objectName

            anchors.fill: two
            onPressed: {
                txtedit.insert(txtedit.length,digits.two2)

                two.color="light blue"
            }
            onReleased: {
                two.color="#1f1f1f"
                two.refresh("two")
            }
        }

    }
    Keypad{
        id:three
        objectName: "three"
        signal refresh(var value)
        anchors.top:six.top
        anchors.topMargin: 80
        anchors.left: two.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"3"
        MouseArea{
            id:clickThree
            objectName: three.objectName

            anchors.fill: three
            onPressed: {
                txtedit.insert(txtedit.length,digits.three3)

                three.color="light blue"
            }
            onReleased: {
                three.color="#1f1f1f"
                three.refresh("three")
            }
        }

    }
    Keypad{
        id:dot
        objectName: "dot"
        signal refresh(var value)
        anchors.top:one.top
        anchors.topMargin: 80
        anchors.left: parent.left
        anchors.leftMargin:30
        keypadWidth: 88
        keypadHeight: 56
        name:"."
       MouseArea{
            id:clickDot
            objectName: dot.objectName


            anchors.fill: dot
            onPressed: {
                txtedit.insert(txtedit.length,dot.name)

                dot.color="light blue"
            }
            onReleased: {
                dot.color="#1f1f1f"
                dot.refresh("dot")

            }
        }

    }
    Keypad{
        id:zero
        objectName: "zero"
        signal refresh(var value)

        anchors.top:two.top
        anchors.topMargin: 80
        anchors.left: dot.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"0"
        MouseArea{
            id:clickZero
            objectName: zero.objectName

            anchors.fill: zero
            onPressed: {
                txtedit.insert(txtedit.length,digits.zero0)

                zero.color="light blue"
            }
            onReleased: {
                zero.color="#1f1f1f"
                zero.refresh("zero")

            }
        }

    }

    Keypad{
        id:equal
        objectName: "equal"
        color: "#0FDDAF"
        signal refresh(var value)
        anchors.top:three.top
        anchors.topMargin: 80
        anchors.left: zero.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"="
        MouseArea{
            id:clickEqual
            objectName: equal.objectName
            anchors.fill: equal
            onPressed: {
                txtedit.insert(txtedit.length,equal.name)
                equal.color="#49E9BD"
            }
            onReleased: {
                equal.color="#0FDDAF"
                equal.refresh("equal")
                txtedit.insert(txtedit.length,answer.result.toFixed(3))

            }
        }

    }

    //Actions +-%/X
    Keypad{
        id:divide
        objectName: "divide"
        signal refresh(var value)

        anchors.top:modulo.top
        anchors.topMargin: 80
        anchors.left: nine.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"÷"
        border.color: "transparent"
        color: "#353F3E"

        MouseArea{
            id:clickDivide
            objectName: divide.objectName

            anchors.fill: divide
            onPressed: {
                txtedit.insert(txtedit.length,divide.name)

                divide.color="#ffc966"
            }
            onReleased: {
                divide.color="#353F3E"
                divide.refresh("divide")

            }
        }

    }
    Keypad{
        id:multiply
        objectName: "multiply"
        color: "#353F3E"
        signal refresh(var value)

        anchors.top:divide.top
        anchors.topMargin: 80
        anchors.left: six.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        border.color: "transparent"
        name:"x"

        MouseArea{
            id:clickMultiply
            objectName: multiply.objectName

            anchors.fill: multiply
            onPressed: {
                txtedit.insert(txtedit.length,multiply.name)

                multiply.color="#ffc966"
            }
            onReleased: {
                multiply.color="#353F3E"
                multiply.refresh("multiply")

            }
        }

    }
    Keypad{
        id:minus
        objectName: "minus"
        signal refresh(var value)
        border.color: "transparent"
        anchors.top:multiply.top
        anchors.topMargin: 80
        anchors.left: three.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"-"
        color: "#353F3E"

        MouseArea{
            id:clickMinus
            objectName: minus.objectName

            anchors.fill: minus
            onPressed: {
                txtedit.insert(txtedit.length,minus.name)

                minus.color="#ffc966"
            }
            onReleased: {
                minus.color="#353F3E"
                minus.refresh("minus")

            }
        }


    }
    Keypad{
        id:plus
        objectName: "plus"
        color: "#353F3E"
        signal refresh(var value)

        anchors.top:minus.top
        anchors.topMargin: 80
        anchors.left: equal.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"+"


        MouseArea{
            id:clickPlus
            objectName: plus.objectName

            anchors.fill: plus
            onPressed: {
                txtedit.insert(txtedit.length,plus.name)

                plus.color="#ffc966"
            }
            onReleased: {
                plus.color="#353F3E"
                plus.refresh("plus")

            }
        }

    }
    Keypad{
        id:cancelAll
        objectName: "cancelAll"
        color: "gray"
        signal refresh(var value)

        anchors.top:parent.top
        anchors.topMargin: 338
        anchors.left: parent.left
        anchors.leftMargin: 30
        keypadWidth: 88
        keypadHeight: 56
        name:"CE"


        MouseArea{
            id:clickCancelAll
            objectName: cancelAll.objectName

            anchors.fill: cancelAll
            onPressed: {
                txtedit.clear()

                cancelAll.color="#d3d3d3"
            }
            onReleased: {
                cancelAll.color="gray"
                cancelAll.refresh("cancelAll")

            }
        }

    }

    Keypad{
        id:cancel
        objectName: "cancel"
        color: "gray"
        signal refresh(var value)

        anchors.top:parent.top
        anchors.topMargin: 338
        anchors.left: cancelAll.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        name:"C"

        MouseArea{
            id:clickCancel
            objectName: cancel.objectName

            anchors.fill: cancel
            onPressed: {
                txtedit.remove(txtedit.length-1,txtedit.length)

                cancel.color="#d7d7d7"
            }
            onReleased: {
                cancel.color="gray"
                cancel.refresh("cancel")

            }
        }

    }


    Keypad{
        property int count: 0
        id:squareRoot
        objectName: "squareRoot"
        signal refresh(var value)

        anchors.top:parent.top
        anchors.topMargin: 338
        anchors.left: cancel.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        color: "gray"
//        name:"√"
        name:"-/+"


        MouseArea{
            id:clickSquareRoot
            objectName: squareRoot.objectName

            anchors.fill: squareRoot
            onPressed: {
                if(squareRoot.count===0)
               {
                    txtedit.insert(txtedit.length-txtedit.length,"-")

                squareRoot.color="steelblue"
                squareRoot.count++
                }
                else{
                    txtedit.remove(0,1)

                    txtedit.insert(txtedit.length-txtedit.length,"")
                    squareRoot.count=0

                }

            }
            onReleased: {
                squareRoot.color="gray"
                squareRoot.refresh("squareRoot")

            }
        }

    }

    Keypad{
        id:modulo
        objectName: "modulo"
        signal refresh(var value)

        anchors.top:parent.top
        anchors.topMargin: 338
        anchors.left: squareRoot.left
        anchors.leftMargin: 111
        keypadWidth: 88
        keypadHeight: 56
        color: "gray"
        name:"%"

        MouseArea{
            id:clickModulo
            objectName: modulo.objectName
            anchors.fill: modulo
            onPressed: {
                txtedit.insert(txtedit.length,modulo.name)

                modulo.color="#d7d7d7"
            }
            onReleased: {
                modulo.color="gray"
                modulo.refresh("modulo")
            }
        }

    }
    Flickable {
           id: flick

           anchors.top: parent.top
           anchors.topMargin: 60
           anchors.left: parent.left
           anchors.leftMargin: 80

           width: 400;
           height: 300;
           clip: true

           function ensureVisible(r)
           {
               if (contentX >= r.x)
                   contentX = r.x;
               else if (contentX+width <= r.x+r.width)
                   contentX = r.x+r.width-width;
               if (contentY >= r.y)
                   contentY = r.y;
               else if (contentY+height <= r.y+r.height)
                   contentY = r.y+r.height-height;
           }

           TextEdit {
               id: txtedit
               width: flick.width
               height: flick.height
               focus: false

               color: "white"
               font.pixelSize: 30
               font.bold: true
               inputMethodHints: "ImhNone"

               wrapMode: TextEdit.Wrap
               onCursorRectangleChanged: flick.ensureVisible(cursorRectangle)
           }
       }
   }


