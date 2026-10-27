// Function : static_get_color_stops
// Namespace: OT:ColorLine_OT__NoVariable_
// Entry    : 0046b3e0
// Prototype: ushort static_get_color_stops(undefined8 param_1, long param_2, uint param_3, uint * param_4, float * param_5, hb_paint_context_t * param_6)
// Body     : 0046b3e0 - 0046b4d6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::ColorLine<OT::NoVariable>::static_get_color_stops(hb_color_line_t*, void*, unsigned int,
   unsigned int*, hb_color_stop_t*, void*) */

ushort __cdecl
OT::ColorLine<OT::NoVariable>::static_get_color_stops
          (undefined8 param_1,long param_2,uint param_3,uint *param_4,float *param_5,
          hb_paint_context_t *param_6)

{
  long *plVar1;
  ushort uVar2;
  ColorStop *this;
  ColorStop *pCVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = *(ushort *)(param_2 + 1) << 8 | *(ushort *)(param_2 + 1) >> 8;
  if ((param_4 != (uint *)0x0) && (param_5 != (float *)0x0)) {
    if (*param_4 == 0) {
      uVar5 = 0;
    }
    else {
      plVar1 = *(long **)(param_6 + 0x30);
      uVar4 = 0;
      uVar6 = (ulong)(uVar2 - param_3);
      if (uVar2 < param_3) {
        uVar6 = 0;
      }
      pCVar3 = (ColorStop *)(param_2 + (ulong)param_3 * 6 + 3);
      do {
        if (uVar6 == uVar4) goto LAB_0046b4b5;
        this = (ColorStop *)&_hb_NullPool;
        if (uVar4 + param_3 <
            (ulong)(ushort)(*(ushort *)(param_2 + 1) << 8 | *(ushort *)(param_2 + 1) >> 8)) {
          this = pCVar3;
        }
        ColorStop::get_color_stop(this,param_6,param_5,0xffffffff,plVar1);
        uVar4 = uVar4 + 1;
        param_5 = param_5 + 3;
        pCVar3 = pCVar3 + 6;
      } while (uVar4 < *param_4);
      uVar6 = uVar4 & 0xffffffff;
LAB_0046b4b5:
      uVar5 = (uint)uVar6;
    }
    *param_4 = uVar5;
  }
  return uVar2;
}


