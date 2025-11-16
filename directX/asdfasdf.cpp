#include <windows.h>
#include <d3d11.h>
#include <iostream>
#pragma comment(lib, "d3d11.lib")

int main() {
    ID3D11Device* device = nullptr;
    ID3D11DeviceContext* context = nullptr;
    D3D_FEATURE_LEVEL featureLevel;
    HRESULT hr = D3D11CreateDevice(
        nullptr,
        D3D_DRIVER_TYPE_HARDWARE,
        nullptr,
        0,
        nullptr,
        0,
        D3D11_SDK_VERSION,
        &device,
        &featureLevel,
        &context
    );

    if (SUCCEEDED(hr)) std::cout << "DirectX 초기화 성공!\n";
    else std::cout << "DirectX 초기화 실패 0x" << std::hex << hr << "\n";

    if (device) device->Release();
    if (context) context->Release();
    return 0;
}