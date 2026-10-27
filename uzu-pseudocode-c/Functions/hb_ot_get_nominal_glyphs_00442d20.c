// Function : hb_ot_get_nominal_glyphs
// Namespace: 
// Entry    : 00442d20
// Prototype: int hb_ot_get_nominal_glyphs(undefined8 param_1, long * param_2, int param_3, uint * param_4, uint param_5, uint * param_6, uint param_7)
// Body     : 00442d20 - 00442ebd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_nominal_glyphs(hb_font_t*, void*, unsigned int, unsigned int const*, unsigned int,
   unsigned int*, unsigned int, void*) */

int __cdecl
hb_ot_get_nominal_glyphs
          (undefined8 param_1,long *param_2,int param_3,uint *param_4,uint param_5,uint *param_6,
          uint param_7)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  accelerator_t *this;
  int iVar6;
  long lVar7;
  bool bVar8;
  
  plVar3 = (long *)*param_2;
  lVar7 = param_2[1];
  do {
    while( true ) {
      this = (accelerator_t *)plVar3[3];
      if (this != (accelerator_t *)0x0) goto LAB_00442db0;
      lVar4 = *plVar3;
      if (lVar4 == 0) goto LAB_00442da9;
      this = calloc(1,0x58);
      if (this == (accelerator_t *)0x0) break;
      OT::cmap::accelerator_t::accelerator_t(this,lVar4);
      LOCK();
      bVar8 = plVar3[3] == 0;
      if (bVar8) {
        plVar3[3] = (long)this;
      }
      UNLOCK();
      if (bVar8) goto LAB_00442db0;
      OT::cmap::accelerator_t::~accelerator_t(this);
      free(this);
    }
    LOCK();
    bVar8 = plVar3[3] == 0;
    if (bVar8) {
      plVar3[3] = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar8);
LAB_00442da9:
  this = (accelerator_t *)&_hb_NullPool;
LAB_00442db0:
  iVar6 = 0;
  if ((param_3 != 0) && (*(code **)(this + 0x10) != (code *)0x0)) {
    if (lVar7 == 0) {
      cVar5 = (**(code **)(this + 0x10))(*(undefined8 *)(this + 0x18),*param_4,param_6);
      if (cVar5 != '\0') {
        lVar7 = (long)param_6 + (ulong)param_7;
        iVar6 = 0;
        do {
          param_4 = (uint *)((long)param_4 + (ulong)param_5);
          if (param_3 + -1 == iVar6) goto LAB_00442ea6;
          cVar5 = (**(code **)(this + 0x10))(*(undefined8 *)(this + 0x18),*param_4,lVar7);
          lVar7 = lVar7 + (ulong)param_7;
          iVar6 = iVar6 + 1;
        } while (cVar5 != '\0');
      }
    }
    else {
      iVar6 = 0;
      do {
        uVar1 = *param_4;
        uVar2 = *(uint *)(lVar7 + (ulong)(uVar1 & 0xff) * 4);
        if (uVar2 >> 0x10 == uVar1 >> 8) {
          *param_6 = uVar2 & 0xffff;
        }
        else {
          cVar5 = (**(code **)(this + 0x10))(*(undefined8 *)(this + 0x18),uVar1,param_6);
          if (cVar5 == '\0') {
            return iVar6;
          }
          if ((uVar1 < 0x200000) && (*param_6 < 0x10000)) {
            *(uint *)(lVar7 + (ulong)(uVar1 & 0xff) * 4) = *param_6 | (uVar1 & 0xffff00) << 8;
          }
        }
        param_4 = (uint *)((long)param_4 + (ulong)param_5);
        param_6 = (uint *)((long)param_6 + (ulong)param_7);
        iVar6 = iVar6 + 1;
      } while (param_3 != iVar6);
LAB_00442ea6:
      iVar6 = param_3;
    }
  }
  return iVar6;
}


