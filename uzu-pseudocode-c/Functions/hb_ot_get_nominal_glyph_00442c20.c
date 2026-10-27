// Function : hb_ot_get_nominal_glyph
// Namespace: 
// Entry    : 00442c20
// Prototype: char hb_ot_get_nominal_glyph(undefined8 param_1, long * param_2, uint param_3, uint * param_4)
// Body     : 00442c20 - 00442d1c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_nominal_glyph(hb_font_t*, void*, unsigned int, unsigned int*, void*) */

char __cdecl hb_ot_get_nominal_glyph(undefined8 param_1,long *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  accelerator_t *this;
  bool bVar6;
  
  plVar2 = (long *)*param_2;
  lVar3 = param_2[1];
  do {
    while( true ) {
      this = (accelerator_t *)plVar2[3];
      if (this != (accelerator_t *)0x0) goto LAB_00442c9f;
      lVar4 = *plVar2;
      if (lVar4 == 0) goto LAB_00442c98;
      this = calloc(1,0x58);
      if (this == (accelerator_t *)0x0) break;
      OT::cmap::accelerator_t::accelerator_t(this,lVar4);
      LOCK();
      bVar6 = plVar2[3] == 0;
      if (bVar6) {
        plVar2[3] = (long)this;
      }
      UNLOCK();
      if (bVar6) goto LAB_00442c9f;
      OT::cmap::accelerator_t::~accelerator_t(this);
      free(this);
    }
    LOCK();
    bVar6 = plVar2[3] == 0;
    if (bVar6) {
      plVar2[3] = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar6);
LAB_00442c98:
  this = (accelerator_t *)&_hb_NullPool;
LAB_00442c9f:
  if (*(code **)(this + 0x10) == (code *)0x0) {
    cVar5 = '\0';
  }
  else if ((lVar3 == 0) ||
          (uVar1 = *(uint *)(lVar3 + (ulong)(param_3 & 0xff) * 4), uVar1 >> 0x10 != param_3 >> 8)) {
    cVar5 = (**(code **)(this + 0x10))(*(undefined8 *)(this + 0x18),param_3,param_4);
    if ((lVar3 != 0) && (((cVar5 != '\0' && (param_3 < 0x200000)) && (*param_4 < 0x10000)))) {
      *(uint *)(lVar3 + (ulong)(param_3 & 0xff) * 4) = *param_4 | (param_3 & 0xffff00) << 8;
    }
  }
  else {
    *param_4 = uVar1 & 0xffff;
    cVar5 = '\x01';
  }
  return cVar5;
}


