TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

#这里是include文件
INCLUDEPATH += D:/C++Framework/Boost/FTP/include #必须有
LIBS      += -LD:/C++Framework/Boost/FTP/lib/ -llibboost_system-vc100-mt-1_49
LIBS      += -LD:/C++Framework/Boost/FTP/lib/ -llibboost_system-vc100-mt-gd-1_49
LIBS      += -LD:/C++Framework/Boost/FTP/lib/ -llibboost_system-vc100-mt-s-1_49
LIBS      += -LD:/C++Framework/Boost/FTP/lib/ -llibboost_system-vc100-mt-sgd-1_49
LIBS      += -LD:/C++Framework/Boost/FTP/lib/ -llibboost_system-vc80-mt-1_49
LIBS      += -LD:/C++Framework/Boost/FTP/lib/ -llibboost_system-vc80-mt-gd-1_49
LIBS      += -LD:/C++Framework/Boost/FTP/lib/ -llibboost_system-vc80-mt-s-1_49
LIBS      += -LD:/C++Framework/Boost/FTP/lib/ -llibboost_system-vc80-mt-sgd-1_49



