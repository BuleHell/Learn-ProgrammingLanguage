import QtQuick 1.1

Rectangle {

    width: 300;
    height: 400;
    Rectangle{
        x:20;
        y:40;
        width: 150;
        height: 100;
        color: "#00CC00";
        z:0.5;
        clip:false;//
        Rectangle {
            x:100;
            y:70;
            width:100;
            height: 100;
            color:"#00c000";
            z:1;
            opacity:0.6;
        }

    }

}
