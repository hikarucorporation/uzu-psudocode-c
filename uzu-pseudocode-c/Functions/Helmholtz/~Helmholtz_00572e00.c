// Function : ~Helmholtz
// Namespace: Helmholtz
// Entry    : 00572e00
// Prototype: undefined ~Helmholtz(Helmholtz * this)
// Body     : 00572e00 - 00572e45


/* Helmholtz::~Helmholtz() */

void __thiscall Helmholtz::~Helmholtz(Helmholtz *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 *)this = 0;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


