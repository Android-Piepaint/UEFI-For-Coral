#include <Library/BaseLib.h>
#include <Library/PlatformConfigurationMapLib.h>

static CONFIGURATION_DESCRIPTOR_EX gDeviceConfigurationDescriptorEx[] = {
    {"ConfigParameterCount", 60},
    {"NumCpusFuseAddr", 0x5C04C},
    {"EnableShell", 0x1},
    {"SharedIMEMBaseAddr", 0x146BF000},
    {"DloadCookieAddr", 0x01FD3000},
    {"DloadCookieValue", 0x10},
    {"NumCpus", 8},
    {"NumActiveCores", 8},
    {"MaxLogFileSize", 0x400000},
    {"UefiMemUseThreshold", 0x77},
    {"USBHS1_Config", 0x0},
    {"UsbFnIoRevNum", 0x00010001},
    {"PwrBtnShutdownFlag", 0x0},
    {"Sdc1GpioConfigOn", 0x1E92},
    {"Sdc2GpioConfigOn", 0x1E92},
    {"Sdc1GpioConfigOff", 0xA00},
    {"Sdc2GpioConfigOff", 0xA00},
    {"EnableSDHCSwitch", 0x1},
    {"SecurityFlag", 0xC4},
    {"TzAppsRegnAddr", 0x86D00000},
    {"TzAppsRegnSize", 0x02200000},
    {"ImageFVFlashed", 0x0},
    {"EnableLogFsSyncInRetail", 0x0},
    {"EnableSecurityHoleForSplashPartition", 0x0},
    /* Terminator */
    {"Terminator", 0xFFFFFFFF}};

CONFIGURATION_DESCRIPTOR_EX *GetPlatformConfigurationMap()
{
  return gDeviceConfigurationDescriptorEx;
}
