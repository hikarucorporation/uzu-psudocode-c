// Function : hb_ot_color_has_png
// Namespace: 
// Entry    : 0047e510
// Prototype: bool hb_ot_color_has_png(long param_1)
// Body     : 0047e510 - 0047e675


bool hb_ot_color_has_png(long param_1)

{
  long lVar1;
  accelerator_t *paVar2;
  sbix_accelerator_t *this;
  undefined4 *puVar3;
  undefined8 extraout_RDX;
  short *psVar4;
  accelerator_t *paVar5;
  undefined8 in_R8;
  bool bVar6;
  
  paVar2 = *(accelerator_t **)(param_1 + 400);
  if (paVar2 == (accelerator_t *)0x0) {
    paVar5 = (accelerator_t *)&_hb_NullPool;
    do {
      lVar1 = *(long *)(param_1 + 0x68);
      if (lVar1 == 0) goto LAB_0047e52b;
      paVar2 = calloc(1,0x18);
      if (paVar2 == (accelerator_t *)0x0) {
        LOCK();
        bVar6 = *(long *)(param_1 + 400) == 0;
        if (bVar6) {
          *(long *)(param_1 + 400) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar6) goto LAB_0047e52b;
      }
      else {
        OT::CBDT::accelerator_t::accelerator_t(paVar2,lVar1);
        LOCK();
        bVar6 = *(long *)(param_1 + 400) == 0;
        if (bVar6) {
          *(long *)(param_1 + 400) = (long)paVar2;
        }
        UNLOCK();
        if (bVar6) {
          paVar5 = paVar2;
          goto LAB_0047e52b;
        }
        OT::CBDT::accelerator_t::~accelerator_t(paVar2);
        free(paVar2);
      }
      paVar2 = *(accelerator_t **)(param_1 + 400);
    } while (paVar2 == (accelerator_t *)0x0);
  }
  paVar5 = paVar2;
LAB_0047e52b:
  puVar3 = *(undefined4 **)(paVar5 + 8);
  psVar4 = (short *)&_hb_NullPool;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &_hb_NullPool;
  }
  bVar6 = true;
  if (puVar3[6] == 0) {
    this = *(sbix_accelerator_t **)(param_1 + 0x198);
    while (this == (sbix_accelerator_t *)0x0) {
      lVar1 = *(long *)(param_1 + 0x68);
      if (lVar1 == 0) {
LAB_0047e66e:
        this = (sbix_accelerator_t *)&_hb_NullPool;
        break;
      }
      this = calloc(1,0x10);
      if (this == (sbix_accelerator_t *)0x0) {
        LOCK();
        bVar6 = *(long *)(param_1 + 0x198) == 0;
        if (bVar6) {
          *(long *)(param_1 + 0x198) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar6) goto LAB_0047e66e;
      }
      else {
        OT::sbix_accelerator_t::sbix_accelerator_t(this,lVar1,extraout_RDX,puVar3,in_R8);
        LOCK();
        bVar6 = *(long *)(param_1 + 0x198) == 0;
        if (bVar6) {
          *(long *)(param_1 + 0x198) = (long)this;
        }
        UNLOCK();
        if (bVar6) break;
        OT::sbix::accelerator_t::~accelerator_t((accelerator_t *)this);
        free(this);
      }
      this = *(sbix_accelerator_t **)(param_1 + 0x198);
    }
    puVar3 = *(undefined4 **)this;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &_hb_NullPool;
    }
    if (7 < (uint)puVar3[6]) {
      psVar4 = *(short **)(puVar3 + 4);
    }
    bVar6 = *psVar4 != 0;
  }
  return bVar6;
}


