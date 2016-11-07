TEMPLATE = subdirs
CONFIG+=ordered
SUBDIRS = \
    AurebeshTranslator \
    Test

Test.depends = AurebeshTranslator

OTHER_FILES += \
    defaults.pri
