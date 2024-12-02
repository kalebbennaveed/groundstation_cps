/****************************************************************************
** Meta object code from reading C++ file 'eware_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/dasc_robot_gui/src/eware_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eware_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dasc_robot_gui__EwarePanel_t {
    QByteArrayData data[26];
    char stringdata0[551];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dasc_robot_gui__EwarePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dasc_robot_gui__EwarePanel_t qt_meta_stringdata_dasc_robot_gui__EwarePanel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "dasc_robot_gui::EwarePanel"
QT_MOC_LITERAL(1, 27, 8), // "setTopic"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "topic"
QT_MOC_LITERAL(4, 43, 19), // "commander_set_state"
QT_MOC_LITERAL(5, 63, 7), // "uint8_t"
QT_MOC_LITERAL(6, 71, 9), // "new_state"
QT_MOC_LITERAL(7, 81, 11), // "updateTopic"
QT_MOC_LITERAL(8, 93, 14), // "timer_callback"
QT_MOC_LITERAL(9, 108, 27), // "setpoint_pub_timer_callback"
QT_MOC_LITERAL(10, 136, 13), // "parameter_req"
QT_MOC_LITERAL(11, 150, 3), // "set"
QT_MOC_LITERAL(12, 154, 22), // "trajectory_setpoint_cb"
QT_MOC_LITERAL(13, 177, 44), // "px4_msgs::msg::TrajectorySetp..."
QT_MOC_LITERAL(14, 222, 3), // "msg"
QT_MOC_LITERAL(15, 226, 20), // "vehicle_local_pos_cb"
QT_MOC_LITERAL(16, 247, 46), // "px4_msgs::msg::VehicleLocalPo..."
QT_MOC_LITERAL(17, 294, 19), // "commander_status_cb"
QT_MOC_LITERAL(18, 314, 41), // "px4_msgs::msg::CommanderStatu..."
QT_MOC_LITERAL(19, 356, 26), // "vehicle_visual_odometry_cb"
QT_MOC_LITERAL(20, 383, 41), // "px4_msgs::msg::VehicleOdometr..."
QT_MOC_LITERAL(21, 425, 16), // "parameter_res_cb"
QT_MOC_LITERAL(22, 442, 38), // "px4_msgs::msg::ParameterRes::..."
QT_MOC_LITERAL(23, 481, 17), // "battery_status_cb"
QT_MOC_LITERAL(24, 499, 45), // "px4_msgs::msg::SimpleBatteryS..."
QT_MOC_LITERAL(25, 545, 5) // "reset"

    },
    "dasc_robot_gui::EwarePanel\0setTopic\0"
    "\0topic\0commander_set_state\0uint8_t\0"
    "new_state\0updateTopic\0timer_callback\0"
    "setpoint_pub_timer_callback\0parameter_req\0"
    "set\0trajectory_setpoint_cb\0"
    "px4_msgs::msg::TrajectorySetpoint::SharedPtr\0"
    "msg\0vehicle_local_pos_cb\0"
    "px4_msgs::msg::VehicleLocalPosition::SharedPtr\0"
    "commander_status_cb\0"
    "px4_msgs::msg::CommanderStatus::SharedPtr\0"
    "vehicle_visual_odometry_cb\0"
    "px4_msgs::msg::VehicleOdometry::SharedPtr\0"
    "parameter_res_cb\0"
    "px4_msgs::msg::ParameterRes::SharedPtr\0"
    "battery_status_cb\0"
    "px4_msgs::msg::SimpleBatteryStatus::SharedPtr\0"
    "reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dasc_robot_gui__EwarePanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x09 /* Protected */,
       7,    0,   85,    2, 0x09 /* Protected */,
       8,    0,   86,    2, 0x09 /* Protected */,
       9,    0,   87,    2, 0x09 /* Protected */,
      10,    1,   88,    2, 0x09 /* Protected */,
      12,    1,   91,    2, 0x09 /* Protected */,
      15,    1,   94,    2, 0x09 /* Protected */,
      17,    1,   97,    2, 0x09 /* Protected */,
      19,    1,  100,    2, 0x09 /* Protected */,
      21,    1,  103,    2, 0x09 /* Protected */,
      23,    1,  106,    2, 0x09 /* Protected */,
      25,    0,  109,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   14,
    QMetaType::Void, 0x80000000 | 18,   14,
    QMetaType::Void, 0x80000000 | 20,   14,
    QMetaType::Void, 0x80000000 | 22,   14,
    QMetaType::Void, 0x80000000 | 24,   14,
    QMetaType::Void,

       0        // eod
};

void dasc_robot_gui::EwarePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EwarePanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTopic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->commander_set_state((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 2: _t->updateTopic(); break;
        case 3: _t->timer_callback(); break;
        case 4: _t->setpoint_pub_timer_callback(); break;
        case 5: _t->parameter_req((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->trajectory_setpoint_cb((*reinterpret_cast< const px4_msgs::msg::TrajectorySetpoint::SharedPtr(*)>(_a[1]))); break;
        case 7: _t->vehicle_local_pos_cb((*reinterpret_cast< const px4_msgs::msg::VehicleLocalPosition::SharedPtr(*)>(_a[1]))); break;
        case 8: _t->commander_status_cb((*reinterpret_cast< const px4_msgs::msg::CommanderStatus::SharedPtr(*)>(_a[1]))); break;
        case 9: _t->vehicle_visual_odometry_cb((*reinterpret_cast< const px4_msgs::msg::VehicleOdometry::SharedPtr(*)>(_a[1]))); break;
        case 10: _t->parameter_res_cb((*reinterpret_cast< const px4_msgs::msg::ParameterRes::SharedPtr(*)>(_a[1]))); break;
        case 11: _t->battery_status_cb((*reinterpret_cast< const px4_msgs::msg::SimpleBatteryStatus::SharedPtr(*)>(_a[1]))); break;
        case 12: _t->reset(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dasc_robot_gui::EwarePanel::staticMetaObject = { {
    &rviz_common::Panel::staticMetaObject,
    qt_meta_stringdata_dasc_robot_gui__EwarePanel.data,
    qt_meta_data_dasc_robot_gui__EwarePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dasc_robot_gui::EwarePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dasc_robot_gui::EwarePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dasc_robot_gui__EwarePanel.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int dasc_robot_gui::EwarePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
