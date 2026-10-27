// Function : ~FVariant
// Namespace: Steinberg:FVariant
// Entry    : 0019e520
// Prototype: undefined ~FVariant(FVariant * this)
// Body     : 0019e520 - 0019e573


/* Steinberg::FVariant::~FVariant() */

void __thiscall Steinberg::FVariant::~FVariant(FVariant *this)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)this;
  if ((uVar1 & 0x10) != 0) {
    if (((uVar1 & 4) == 0) || (*(void **)(this + 8) == (void *)0x0)) {
      if (((uVar1 & 0x20) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
        free(*(void **)(this + 8));
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        return;
      }
      if (((uVar1 & 8) != 0) && (*(long **)(this + 8) != (long *)0x0)) {
                    /* try { // try from 0019e56f to 0019e571 has its CatchHandler @ 0019e574 */
        (**(code **)(**(long **)(this + 8) + 0x10))();
      }
    }
    else {
      free(*(void **)(this + 8));
    }
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


