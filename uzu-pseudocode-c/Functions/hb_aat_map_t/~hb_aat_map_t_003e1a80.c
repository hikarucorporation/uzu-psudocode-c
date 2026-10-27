// Function : ~hb_aat_map_t
// Namespace: hb_aat_map_t
// Entry    : 003e1a80
// Prototype: undefined ~hb_aat_map_t(hb_aat_map_t * this)
// Body     : 003e1a80 - 003e1af7


/* hb_aat_map_t::~hb_aat_map_t() */

void __thiscall hb_aat_map_t::~hb_aat_map_t(hb_aat_map_t *this)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(int *)this != 0) {
    uVar4 = (ulong)*(uint *)(this + 4);
    if (uVar4 != 0) {
      piVar1 = (int *)(uVar4 * 0x10 + *(long *)(this + 8));
      do {
        piVar2 = piVar1 + -4;
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar3;
        if (*piVar2 != 0) {
          piVar1[-3] = 0;
          free(*(void **)(piVar1 + -2));
        }
        piVar2[0] = 0;
        piVar2[1] = 0;
        piVar1[-2] = 0;
        piVar1[-1] = 0;
        piVar1 = piVar2;
      } while (uVar3 != 0);
    }
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


