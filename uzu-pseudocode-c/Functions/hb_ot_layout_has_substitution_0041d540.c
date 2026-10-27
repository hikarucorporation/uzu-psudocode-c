// Function : hb_ot_layout_has_substitution
// Namespace: 
// Entry    : 0041d540
// Prototype: bool hb_ot_layout_has_substitution(long param_1)
// Body     : 0041d540 - 0041d5ff


bool hb_ot_layout_has_substitution(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  accelerator_t<OT::Layout::GSUB> *this;
  short *psVar3;
  bool bVar4;
  
  this = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  do {
    if (this != (accelerator_t<OT::Layout::GSUB> *)0x0) {
LAB_0041d554:
      puVar2 = *(undefined4 **)this;
      psVar3 = (short *)&_hb_NullPool;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &_hb_NullPool;
      }
      if (3 < (uint)puVar2[6]) {
        psVar3 = *(short **)(puVar2 + 4);
      }
      return *psVar3 != 0 || psVar3[1] != 0;
    }
    lVar1 = *(long *)(param_1 + 0x68);
    if (lVar1 == 0) {
LAB_0041d5f8:
      this = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
      goto LAB_0041d554;
    }
    this = calloc(1,0x18);
    if (this == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      LOCK();
      bVar4 = *(long *)(param_1 + 0x130) == 0;
      if (bVar4) {
        *(long *)(param_1 + 0x130) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar4) goto LAB_0041d5f8;
    }
    else {
      OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(this,lVar1);
      LOCK();
      bVar4 = *(long *)(param_1 + 0x130) == 0;
      if (bVar4) {
        *(long *)(param_1 + 0x130) = (long)this;
      }
      UNLOCK();
      if (bVar4) goto LAB_0041d554;
      OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(this);
      free(this);
    }
    this = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  } while( true );
}


