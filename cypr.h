#ifndef CYPR_H
#define CYPR_H

#include <windows.h>
#include <string>

void cypr(int resultado) {
    // Convertir el entero en una cadena
    std::string texto = " " + std::to_string(resultado) + " Pi";

    if (OpenClipboard(nullptr)) {
        EmptyClipboard();  // Limpia el portapapeles

        HGLOBAL hGlob = GlobalAlloc(GMEM_FIXED, texto.size() + 1);
        if (hGlob != nullptr) {
            memcpy(hGlob, texto.c_str(), texto.size() + 1);  // Copia el texto
            SetClipboardData(CF_TEXT, hGlob);  // Lo coloca en el portapapeles
        }

        CloseClipboard();  // Cierra el portapapeles

        if (hGlob != nullptr) {
            GlobalFree(hGlob);  // Libera la memoria
        }
    }
}

#endif // CYP_H
