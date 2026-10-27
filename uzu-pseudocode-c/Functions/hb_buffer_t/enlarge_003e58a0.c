// Function : enlarge
// Namespace: hb_buffer_t
// Entry    : 003e58a0
// Prototype: undefined8 enlarge(hb_buffer_t * this, uint param_1)
// Body     : 003e58a0 - 003e59b0


/* hb_buffer_t::enlarge(unsigned int) */

undefined8 __thiscall hb_buffer_t::enlarge(hb_buffer_t *this,uint param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  ulong __size;
  long lVar5;
  
  if (this[0x58] == (hb_buffer_t)0x0) {
    return 0;
  }
  if (*(uint *)(this + 0xc4) < param_1) {
    this[0x58] = (hb_buffer_t)0x0;
    return 0;
  }
  lVar1 = *(long *)(this + 0x78);
  lVar5 = *(long *)(this + 0x70);
  if (0xccccccc < param_1) {
LAB_003e595a:
    this[0x58] = (hb_buffer_t)0x0;
    if (lVar1 != lVar5) {
      lVar5 = *(long *)(this + 0x80);
    }
    *(long *)(this + 0x78) = lVar5;
    return 0;
  }
  for (uVar4 = *(uint *)(this + 0x68); uVar4 <= param_1; uVar4 = uVar4 + (uVar4 >> 1) + 0x20) {
  }
  if ((int)((ulong)uVar4 * 0x14 >> 0x20) != 0) goto LAB_003e595a;
  __size = (ulong)uVar4 * 0x14 & 0xffffffff;
  pvVar2 = realloc(*(void **)(this + 0x80),__size);
  pvVar3 = realloc(*(void **)(this + 0x70),__size);
  if (((pvVar2 == (void *)0x0) || (pvVar3 == (void *)0x0)) &&
     (this[0x58] = (hb_buffer_t)0x0, pvVar2 == (void *)0x0)) {
    if (pvVar3 == (void *)0x0) {
      *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + (ulong)(lVar1 != lVar5) * 0x10 + 0x70);
      return 0;
    }
    pvVar2 = *(void **)(this + 0x80);
  }
  else {
    *(void **)(this + 0x80) = pvVar2;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = *(void **)(this + 0x70);
      goto LAB_003e5933;
    }
  }
  *(void **)(this + 0x70) = pvVar3;
LAB_003e5933:
  if (lVar1 == lVar5) {
    pvVar2 = pvVar3;
  }
  *(void **)(this + 0x78) = pvVar2;
  if (this[0x58] == (hb_buffer_t)0x0) {
    return 0;
  }
  *(uint *)(this + 0x68) = uVar4;
  return CONCAT71((int7)((ulong)pvVar3 >> 8),1);
}


