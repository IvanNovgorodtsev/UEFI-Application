#include "BootCheck.h"
EFI_STATUS
EFIAPI
UefiMain(
	IN EFI_HANDLE        ImageHandle,
	IN EFI_SYSTEM_TABLE  *SystemTable
)
{
	EFI_STATUS  Status;
	EFI_SHELL_PROTOCOL *EfiShellProtocol;
	Status = gBS->LocateProtocol(&gEfiShellProtocolGuid, NULL, (VOID **)&EfiShellProtocol);
	EfiShellProtocol->Execute(&ImageHandle, L"Hello World!", NULL, &Status);
	return EFI_SUCCESS;
}