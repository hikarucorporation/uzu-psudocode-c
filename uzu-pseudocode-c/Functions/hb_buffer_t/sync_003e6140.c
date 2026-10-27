// Function : sync
// Namespace: hb_buffer_t
// Entry    : 003e6140
// Prototype: undefined8 sync(hb_buffer_t * this)
// Body     : 003e6140 - 003e625f


/* hb_buffer_t::sync() */

undefined8 __thiscall hb_buffer_t::sync(hb_buffer_t *this)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  void *__src;
  void *__dest;
  uint uVar4;
  
  if (this[0x58] == (hb_buffer_t)0x0) {
LAB_003e625c:
    uVar2 = 0;
    goto LAB_003e6216;
  }
  if (this[0x5a] != (hb_buffer_t)0x0) {
    iVar3 = *(int *)(this + 0x5c);
    uVar4 = *(int *)(this + 0x60) - iVar3;
    __dest = *(void **)(this + 0x78);
    __src = *(void **)(this + 0x70);
    if ((__dest != __src) || (*(int *)(this + 100) != iVar3)) {
      uVar1 = *(int *)(this + 100) + uVar4;
      if ((uVar1 == 0) || (uVar1 < *(uint *)(this + 0x68))) {
        if (__dest == __src) {
LAB_003e618c:
          uVar1 = *(uint *)(this + 100);
          if (*(int *)(this + 0x5c) + uVar4 < uVar1 + uVar4) {
            __dest = *(void **)(this + 0x80);
            *(void **)(this + 0x78) = __dest;
            if ((ulong)uVar1 != 0) {
              memcpy(__dest,__src,(ulong)uVar1 * 0x14);
              __src = *(void **)(this + 0x70);
              __dest = *(void **)(this + 0x78);
            }
          }
          else {
            __dest = __src;
          }
        }
      }
      else {
        uVar2 = enlarge(this,uVar1);
        if ((char)uVar2 == '\0') goto LAB_003e625c;
        __src = *(void **)(this + 0x70);
        __dest = *(void **)(this + 0x78);
        if (__dest == __src) goto LAB_003e618c;
      }
      memmove((void *)((long)__dest + (ulong)*(uint *)(this + 100) * 0x14),
              (void *)((long)__src + (ulong)*(uint *)(this + 0x5c) * 0x14),(ulong)uVar4 * 0x14);
      iVar3 = *(int *)(this + 100);
    }
    *(uint *)(this + 100) = iVar3 + uVar4;
  }
  if (*(long *)(this + 0x78) != *(long *)(this + 0x70)) {
    *(long *)(this + 0x80) = *(long *)(this + 0x70);
    *(long *)(this + 0x70) = *(long *)(this + 0x78);
  }
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 100);
  uVar2 = CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(this + 100) >> 8),1);
LAB_003e6216:
  this[0x5a] = (hb_buffer_t)0x0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  *(undefined4 *)(this + 0x5c) = 0;
  return uVar2;
}


