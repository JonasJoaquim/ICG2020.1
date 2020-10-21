#ifndef MYGL_H
#define MYGL_H

#include <stdlib.h>
#include <string.h>

#include "core.h"

void InitMyGl(void); // Inicializa o frame buffer 
unsigned char* GetFBMemPtr(void); // Retorna o ponteiro do framebuffer buffer
void CloseMyGl(void); // Desaloca a memória do framebuffer

// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);

//
// >>> Caro aluno: declare aqui as funções que você implementar <<<
//

#endif  // MYGL_H
