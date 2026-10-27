// Function : next_glyph
// Namespace: hb_buffer_t
// Entry    : 00425360
// Prototype: undefined next_glyph(hb_buffer_t * this)
// Body     : 00425360 - 00425417


/* hb_buffer_t::next_glyph() */

void __thiscall hb_buffer_t::next_glyph(hb_buffer_t *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  void *__src;
  void *__dest;
  
  if (this[0x5a] == (hb_buffer_t)0x0) goto LAB_004253f2;
  __dest = *(void **)(this + 0x78);
  __src = *(void **)(this + 0x70);
  iVar5 = *(int *)(this + 100);
  if ((__dest != __src) || (iVar5 != *(int *)(this + 0x5c))) {
    uVar4 = iVar5 + 1;
    if ((uVar4 == 0) || (uVar4 < *(uint *)(this + 0x68))) {
      if (__dest == __src) goto LAB_00425391;
    }
    else {
      uVar6 = enlarge(this,uVar4);
      if ((char)uVar6 == '\0') {
        return;
      }
      __src = *(void **)(this + 0x70);
      __dest = *(void **)(this + 0x78);
      if (__dest == __src) {
LAB_00425391:
        uVar4 = *(uint *)(this + 100);
        if (*(int *)(this + 0x5c) + 1U < uVar4 + 1) {
          __dest = *(void **)(this + 0x80);
          *(void **)(this + 0x78) = __dest;
          if ((ulong)uVar4 != 0) {
            memcpy(__dest,__src,(ulong)uVar4 * 0x14);
            __src = *(void **)(this + 0x70);
            __dest = *(void **)(this + 0x78);
          }
        }
        else {
          __dest = __src;
        }
      }
    }
    uVar4 = *(uint *)(this + 0x5c);
    uVar3 = *(uint *)(this + 100);
    *(undefined4 *)((long)__dest + (ulong)uVar3 * 0x14 + 0x10) =
         *(undefined4 *)((long)__src + (ulong)uVar4 * 0x14 + 0x10);
    puVar1 = (undefined8 *)((long)__src + (ulong)uVar4 * 0x14);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)((long)__dest + (ulong)uVar3 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    iVar5 = *(int *)(this + 100);
  }
  *(int *)(this + 100) = iVar5 + 1;
LAB_004253f2:
  *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
  return;
}


