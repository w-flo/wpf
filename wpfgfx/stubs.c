// stubs.c: stub functions for WPF

#include <windows.h>

HRESULT WINAPI MilVisualTarget_AttachToHwnd(HWND hwnd)
{
	return S_OK;
}

HRESULT WINAPI MilVisualTarget_DetachFromHwnd(HWND hwnd)
{
	return S_OK;
}

HRESULT WINAPI MilContent_AttachToHwnd(HWND hwnd)
{
	return S_OK;
}

HRESULT WINAPI MilContent_DetachFromHwnd(HWND hwnd)
{
	return S_OK;
}

BOOL WINAPI WgxConnection_ShouldForceSoftwareForGraphicsStreamClient(void)
{
	return FALSE;
}

HRESULT WINAPI WgxConnection_Create(BOOL requestSynchronousTransport,
	void** ppConnection)
{
	if (!ppConnection)
		return E_POINTER;
	*ppConnection = (void*)0xdeadbeef;
	return S_OK;
}

HRESULT WINAPI WgxConnection_Disconnect(void* pTranspManager)
{
	return S_OK;
}