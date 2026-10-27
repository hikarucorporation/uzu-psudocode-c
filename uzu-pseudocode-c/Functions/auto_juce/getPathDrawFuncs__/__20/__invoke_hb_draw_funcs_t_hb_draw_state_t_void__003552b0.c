// Function : __invoke<hb_draw_funcs_t,hb_draw_state_t,void>
// Namespace: auto_juce:getPathDrawFuncs__:__20
// Entry    : 003552b0
// Prototype: undefined __invoke<hb_draw_funcs_t,hb_draw_state_t,void>(undefined8 param_1, long * param_2)
// Body     : 003552b0 - 00355343


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* __invoke<hb_draw_funcs_t, hb_draw_state_t, void>(hb_draw_funcs_t*, void*, hb_draw_state_t*,
   void*) */

void __cdecl
auto_juce::getPathDrawFuncs()::$_20::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>
          (undefined8 param_1,long *param_2)

{
  float fVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  iVar2 = *(int *)((long)param_2 + 0xc);
  if ((iVar2 != 0) &&
     (((iVar2 < 1 || (fVar1 = *(float *)(*param_2 + (ulong)(iVar2 - 1) * 4), fVar1 != DAT_005de41c))
      || (NAN(fVar1) || NAN(DAT_005de41c))))) {
    if ((int)*(uint *)(param_2 + 1) <= iVar2) {
      uVar4 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_2 + 1) != uVar4) {
        if ((int)uVar4 < 1) {
          free((void *)*param_2);
          *param_2 = 0;
        }
        else {
          pvVar3 = realloc((void *)*param_2,(ulong)uVar4 << 2);
          *param_2 = (long)pvVar3;
        }
      }
      *(uint *)(param_2 + 1) = uVar4;
      iVar2 = *(int *)((long)param_2 + 0xc);
    }
    *(int *)((long)param_2 + 0xc) = iVar2 + 1;
    *(undefined4 *)(*param_2 + (long)iVar2 * 4) = 0x47c35280;
    return;
  }
  return;
}


