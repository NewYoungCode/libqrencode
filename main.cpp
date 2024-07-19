#include <iostream>
#include "qrencode.h"

int main()
{
	QRcode* pQRC = pQRC = QRcode_encodeString("https://www.baidu.com", 0, QRecLevel::QR_ECLEVEL_H, QR_MODE_8, 1);
	std::cout << "Hello World!\n";
}
