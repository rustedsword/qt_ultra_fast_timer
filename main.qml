import QtQuick
import QtQuick3D
import QtQuick3D.Xr
import ultra_fast
XrView {
    id: xrView
    referenceSpace: XrView.ReferenceSpaceLocal

    environment: SceneEnvironment {
        clearColor: "black"
        backgroundMode: SceneEnvironment.Color
    }

    XTimer {
        onElapsed: (msec) => {
                       const str = "Elapsed " + msec + " msec";
                       console.log(str);
                       t.text = str
                   }
    }

    xrOrigin: XrOrigin {
        camera: XrCamera {
            Node {
                position: Qt.vector3d(-t.implicitHeight/2, t.implicitHeight/2, -300);
                Text {
                    anchors.centerIn: parent
                    id: t
                    font.pointSize: 12
                    color: "white"
                    text: "nya"
                }
            }
        }
    }
}
