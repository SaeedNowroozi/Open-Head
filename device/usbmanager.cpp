#include "usbmanager.h"
#include <iostream>
USBManager::USBManager()
{
libusb_init(NULL);
//libusb_open()
//libusb_open_device_with_vid_pid()
//libusb_set_configuration
//libusb_get_device
//libusb_get_bus_number
//libusb_free_device_list
}

USBManager::~USBManager()
{
    libusb_context* context = nullptr;
        libusb_device_handle* devHandle = nullptr;

        // مقداردهی و مشخصات دستگاه
        libusb_init(&context);
        devHandle = libusb_open_device_with_vid_pid(context, VENDOR_ID, PRODUCT_ID);

        if (devHandle == nullptr) {
       //     std::cerr << "Unable to open device." << std::endl;
            libusb_exit(context);
            //return 1;
        }

        // تنظیم مود bulk
        if (libusb_set_configuration(devHandle, 1) != 0) {
         //   std::cerr << "Unable to set configuration." << std::endl;
            libusb_close(devHandle);
            libusb_exit(context);
        //    return 1;
        }

        if (libusb_claim_interface(devHandle, 0) != 0) {
         //   std::cerr << "Unable to claim interface." << std::endl;
            libusb_close(devHandle);
            libusb_exit(context);
       //     return 1;
        }

        // درخواست برای دریافت داده از دستگاه
        const int transferSize = 64; // اندازه ترانسفر برای bulk
        unsigned char buffer[transferSize];

        int transferred = 0;
        int ret = libusb_bulk_transfer(devHandle, ENDPOINT_IN, buffer, transferSize, &transferred, 1000);

        if (ret == 0) {
      //      std::cout << "Received " << transferred << " bytes of data:" << std::endl;
            for (int i = 0; i < transferred; i++) {
                std::cout << "0x" << std::hex << static_cast<int>(buffer[i]) << " ";
            }
            std::cout << std::endl;
        } else {
            std::cerr << "Error receiving data: " << libusb_error_name(ret) << std::endl;
        }

}

void USBManager::metaUSB()
{
log->getmetadata();
}

bool USBManager::resetUSB()
{
    libusb_reset_device(NULL);
}

bool USBManager::closeUSB()
{
     libusb_close(NULL);
}
