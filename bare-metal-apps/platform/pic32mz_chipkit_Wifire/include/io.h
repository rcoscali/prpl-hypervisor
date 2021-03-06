/*
 C o*pyright (c) 2016, prpl Foundation
 
 Permission to use, copy, modify, and/or distribute this software for any purpose with or without 
 fee is hereby granted, provided that the above copyright notice and this permission notice appear 
 in all copies.
 
 THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE
 INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE 
 FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM 
 LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, 
 ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 
 This code was written by Carlos Moratelli at Embedded System Group (GSE) at PUCRS/Brazil.
 
 */

#ifndef _IO_H
#define _IO_H

#include <arch.h>

#define ENABLE_LED1 writeio(TRISGCLR, 1 << 6)
#define ENABLE_LED2 writeio(TRISDCLR, 1 << 4)
#define ENABLE_LED3 writeio(TRISBCLR, 1 << 11)
#define ENABLE_LED4 write(TRISGCLR, 1 << 15)

#define TOGGLE_LED1 writeio(LATGINV, 1 << 6)
#define TOGGLE_LED2 writeio(LATDINV, 1 << 4) 
#define TOGGLE_LED2 writeio(LATBINV, 1 << 11) 
#define TOGGLE_LED2 writeio(LATGINV, 1 << 15) 


#endif
