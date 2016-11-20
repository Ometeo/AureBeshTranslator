TEMPLATE = subdirs
CONFIG+=ordered
SUBDIRS = \
    AurebeshLib \
    AurebeshTranslator \
    Tests

Tests.depends = AurebeshLib
AurebeshTranslator.depends = AurebeshLib

OTHER_FILES += \
    defaults.pri
