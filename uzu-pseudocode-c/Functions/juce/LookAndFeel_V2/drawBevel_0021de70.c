// Function : drawBevel
// Namespace: juce:LookAndFeel_V2
// Entry    : 0021de70
// Prototype: undefined drawBevel(long param_1, int param_2, int param_3, uint param_4, uint * param_5, uint * param_6)
// Body     : 0021de70 - 0021e337


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::drawBevel(juce::Graphics&, int, int, int, int, int, juce::Colour const&,
   juce::Colour const&, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::drawBevel
          (long param_1,int param_2,int param_3,uint param_4,uint *param_5,uint *param_6)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 local_90;
  undefined8 local_88;
  long *plStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  long local_48;
  uint *local_40;
  ulong local_38;
  
  local_88 = (void *)CONCAT44(param_3,param_2);
  local_90 = 0;
  local_40 = param_5;
  cVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x58))(*(long **)(param_1 + 8),&local_90);
  if (cVar5 != '\0') {
    plVar2 = *(long **)(param_1 + 8);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
    local_58 = (float)(int)param_4;
    *(undefined1 *)(param_1 + 0x10) = 1;
    iVar7 = param_2 - param_4;
    local_60 = param_3 - param_4;
    iVar8 = param_3 + param_4 * -2;
    iVar10 = param_2 + param_4 * -2;
    local_48 = param_1;
    iVar6 = 1;
    do {
      local_50 = iVar6;
      iVar10 = iVar10 + 2;
      local_5c = (float)local_50 / local_58;
      iVar6 = SUB84((double)((float)(*local_40 >> 0x18) * local_5c) + DAT_005d9098,0);
      if (0xfe < iVar6) {
        iVar6 = 0xff;
      }
      local_90 = CONCAT44(local_90._4_4_,*local_40 & 0xffffff | iVar6 << 0x18);
      local_88 = (void *)0x0;
      plStack_80 = (long *)0x0;
      local_78 = ZEXT416(DAT_005d9038);
      local_68 = 0x3f800000;
                    /* try { // try from 0021dfa5 to 0021dfb2 has its CatchHandler @ 0021e351 */
      local_4c = iVar7;
      (**(code **)(*plVar2 + 0x90))(plVar2,&local_90);
      if (plStack_80 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
      pvVar4 = local_88;
      uVar9 = param_4 - 1;
      local_38 = (ulong)param_4;
      if (local_88 != (void *)0x0) {
        *(undefined4 *)((long)local_88 + 0x24) = 0;
        free(*(void **)((long)local_88 + 0x18));
        operator_delete(pvVar4);
      }
      local_88 = (void *)CONCAT44(1,iVar10);
                    /* try { // try from 0021e015 to 0021e027 has its CatchHandler @ 0021e34c */
      local_90._0_4_ = uVar9;
      local_90._4_4_ = uVar9;
      (**(code **)(*plVar2 + 0xb0))(plVar2,&local_90,0);
      local_54 = local_5c * DAT_0065b218;
      iVar7 = SUB84((double)((float)(*local_40 >> 0x18) * local_54) + DAT_005d9098,0);
      if (0xfe < iVar7) {
        iVar7 = 0xff;
      }
      local_90 = CONCAT44(local_90._4_4_,*local_40 & 0xffffff | iVar7 << 0x18);
      local_88 = (void *)0x0;
      plStack_80 = (long *)0x0;
      local_78 = ZEXT416(DAT_005d9038);
      local_68 = 0x3f800000;
                    /* try { // try from 0021e0a6 to 0021e0b1 has its CatchHandler @ 0021e34a */
      (**(code **)(*plVar2 + 0x90))(plVar2,&local_90);
      if (plStack_80 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
      pvVar4 = local_88;
      if (local_88 != (void *)0x0) {
        *(undefined4 *)((long)local_88 + 0x24) = 0;
        free(*(void **)((long)local_88 + 0x18));
        operator_delete(pvVar4);
      }
      local_90._4_4_ = (uint)local_38;
      local_88 = (void *)CONCAT44(iVar8,1);
                    /* try { // try from 0021e10c to 0021e11e has its CatchHandler @ 0021e348 */
      local_90._0_4_ = uVar9;
      (**(code **)(*plVar2 + 0xb0))(plVar2,&local_90,0);
      iVar7 = SUB84((double)(local_5c * (float)(*param_6 >> 0x18)) + DAT_005d9098,0);
      if (0xfe < iVar7) {
        iVar7 = 0xff;
      }
      local_90 = CONCAT44(local_90._4_4_,*param_6 & 0xffffff | iVar7 << 0x18);
      local_88 = (void *)0x0;
      plStack_80 = (long *)0x0;
      local_78 = ZEXT416(DAT_005d9038);
      local_68 = 0x3f800000;
                    /* try { // try from 0021e18f to 0021e19a has its CatchHandler @ 0021e346 */
      (**(code **)(*plVar2 + 0x90))(plVar2,&local_90);
      if (plStack_80 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
      pvVar4 = local_88;
      if (local_88 != (void *)0x0) {
        *(undefined4 *)((long)local_88 + 0x24) = 0;
        free(*(void **)((long)local_88 + 0x18));
        operator_delete(pvVar4);
      }
      local_90._4_4_ = local_60;
      local_88 = (void *)CONCAT44(1,iVar10);
                    /* try { // try from 0021e1f1 to 0021e203 has its CatchHandler @ 0021e344 */
      local_90._0_4_ = uVar9;
      (**(code **)(*plVar2 + 0xb0))(plVar2,&local_90,0);
      iVar7 = SUB84((double)(local_54 * (float)(*param_6 >> 0x18)) + DAT_005d9098,0);
      if (0xfe < iVar7) {
        iVar7 = 0xff;
      }
      local_90 = CONCAT44(local_90._4_4_,*param_6 & 0xffffff | iVar7 << 0x18);
      local_88 = (void *)0x0;
      plStack_80 = (long *)0x0;
      local_78 = ZEXT416(DAT_005d9038);
      local_68 = 0x3f800000;
                    /* try { // try from 0021e274 to 0021e27f has its CatchHandler @ 0021e342 */
      (**(code **)(*plVar2 + 0x90))(plVar2,&local_90);
      if (plStack_80 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
      pvVar4 = local_88;
      if (local_88 != (void *)0x0) {
        *(undefined4 *)((long)local_88 + 0x24) = 0;
        free(*(void **)((long)local_88 + 0x18));
        operator_delete(pvVar4);
      }
      iVar7 = local_4c;
      local_90 = CONCAT44((int)local_38,local_4c);
      local_88 = (void *)CONCAT44(iVar8,1);
                    /* try { // try from 0021e2da to 0021e2e9 has its CatchHandler @ 0021e340 */
      (**(code **)(*plVar2 + 0xb0))(plVar2,&local_90,0);
      iVar7 = iVar7 + 1;
      local_60 = local_60 + 1;
      iVar8 = iVar8 + 2;
      bVar3 = 1 < param_4;
      param_4 = uVar9;
      iVar6 = local_50 + 1;
    } while (bVar3);
    if (*(char *)(local_48 + 0x10) == '\0') {
                    /* try { // try from 0021e326 to 0021e328 has its CatchHandler @ 0021e338 */
      (**(code **)(**(long **)(local_48 + 8) + 0x78))();
    }
    else {
      *(undefined1 *)(local_48 + 0x10) = 0;
    }
  }
  return;
}


