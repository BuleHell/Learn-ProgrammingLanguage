import QtQuick 1.1
Rectangle {
    width:320;
    height:400;
//    color:"#4000AA00";
    color:Qt.rgba(0.8,0.6,0.4,0.1)
    border.color: "#00AA00"
    border.width: 2;
    radius: 12;
    Component.onCompleted: console.log(color.r,color.g,color.b,color.a);
    rotation:90;

    gradient: Gradient{
        GradientStop{
            position: 0.0;
            color: "#202020"
        }
        GradientStop{
            position: 0.3;
            color:"blue";
        }
        GradientStop{
            position: 1.0;
            color:"#FFFFFF";
        }
    }
}
