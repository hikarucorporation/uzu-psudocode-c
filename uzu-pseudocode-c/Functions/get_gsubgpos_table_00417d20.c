// Function : get_gsubgpos_table
// Namespace: 
// Entry    : 00417d20
// Prototype: undefined4 * get_gsubgpos_table(long param_1, int param_2)
// Body     : 00417d20 - 00417e78


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* get_gsubgpos_table(hb_face_t*, unsigned int) */

undefined4 * __cdecl get_gsubgpos_table(long param_1,int param_2)

{
  long lVar1;
  accelerator_t<OT::Layout::GSUB> *this;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  if (param_2 == 0x47504f53) {
    this = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x138);
    while (this == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      lVar1 = *(long *)(param_1 + 0x68);
      if (lVar1 == 0) goto LAB_00417e71;
      this = calloc(1,0x18);
      if (this == (accelerator_t<OT::Layout::GSUB> *)0x0) {
        LOCK();
        bVar4 = *(long *)(param_1 + 0x138) == 0;
        if (bVar4) {
          *(long *)(param_1 + 0x138) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar4) goto LAB_00417e71;
      }
      else {
        OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t
                  ((accelerator_t<OT::Layout::GPOS> *)this,lVar1);
        LOCK();
        bVar4 = *(long *)(param_1 + 0x138) == 0;
        if (bVar4) {
          *(long *)(param_1 + 0x138) = (long)this;
        }
        UNLOCK();
        if (bVar4) break;
        OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t
                  ((accelerator_t<OT::Layout::GPOS> *)this);
        free(this);
      }
      this = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x138);
    }
  }
  else {
    if (param_2 != 0x47535542) {
      return &_hb_NullPool;
    }
    this = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
    while (this == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      lVar1 = *(long *)(param_1 + 0x68);
      if (lVar1 == 0) goto LAB_00417e71;
      this = calloc(1,0x18);
      if (this == (accelerator_t<OT::Layout::GSUB> *)0x0) {
        LOCK();
        bVar4 = *(long *)(param_1 + 0x130) == 0;
        if (bVar4) {
          *(long *)(param_1 + 0x130) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar4) goto LAB_00417e71;
      }
      else {
        OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(this,lVar1);
        LOCK();
        bVar4 = *(long *)(param_1 + 0x130) == 0;
        if (bVar4) {
          *(long *)(param_1 + 0x130) = (long)this;
        }
        UNLOCK();
        if (bVar4) break;
        OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(this);
        free(this);
      }
      this = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
    }
  }
LAB_00417dd3:
  puVar3 = *(undefined4 **)this;
  puVar2 = &_hb_NullPool;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &_hb_NullPool;
  }
  if (3 < (uint)puVar3[6]) {
    puVar2 = *(undefined4 **)(puVar3 + 4);
  }
  return puVar2;
LAB_00417e71:
  this = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
  goto LAB_00417dd3;
}


