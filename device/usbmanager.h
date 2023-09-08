#ifndef USBMANAGER_H
#define USBMANAGER_H

#include <QObject>
#include <libusb-1.0/libusb.h>
#include <stdbool.h>
#include "../logger/logger.h"
#define VENDOR_ID 0x04B4 // Vendor ID دستگاه CY7C68013A
#define PRODUCT_ID 0x00F1 // Product ID دستگاه CY7C68013A
#define ENDPOINT_IN 0x81 // آدرس اندازه‌گیری ورودی در حالت bulk
class USBManager
{
public:
    USBManager();
    ~USBManager();
    bool packetsetup();
    void metaUSB();
    bool resetUSB();
    bool closeUSB();
    std::shared_ptr<Logger> log;
};

#endif // USBMANAGER_H
