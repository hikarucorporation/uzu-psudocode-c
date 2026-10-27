// Function : convert
// Namespace: juce:ImageType
// Entry    : 00333ed0
// Prototype: long * convert(long * param_1, long * param_2, long * param_3)
// Body     : 00333ed0 - 0033415f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ImageType::convert(juce::Image const&) const */

long * __cdecl juce::ImageType::convert(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *local_98 [2];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  long *local_70;
  long local_68 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  long *local_40;
  long *local_38;
  
  if (*param_3 == 0) {
    *param_1 = 0;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    plVar2 = (long *)*param_3;
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
                    /* try { // try from 00333f0a to 00333f12 has its CatchHandler @ 003341fe */
    (**(code **)(*plVar2 + 0x20))(local_98,plVar2);
                    /* try { // try from 00333f1a to 00333f1c has its CatchHandler @ 003341e2 */
    iVar4 = (**(code **)(*local_98[0] + 0x18))();
    if (local_98[0] != (long *)0x0) {
      (**(code **)(*local_98[0] + 8))();
    }
    local_98[0] = (long *)0x0;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    if (iVar3 == iVar4) {
      lVar6 = *param_3;
      *param_1 = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      plVar2 = (long *)*param_3;
      if (plVar2 == (long *)0x0) {
        local_4c = 0;
        local_48 = 0;
      }
      else {
        local_4c = (int)plVar2[2];
        local_48 = *(int *)((long)plVar2 + 0x14);
      }
      local_40 = (long *)0x0;
                    /* try { // try from 00333fa0 to 00333fae has its CatchHandler @ 003341c4 */
      (**(code **)(*plVar2 + 0x38))(plVar2,local_68,0,0,0);
      if (local_68[0] == 0) {
        *param_1 = 0;
      }
      else {
                    /* try { // try from 00333fc7 to 00333fd4 has its CatchHandler @ 003341a9 */
        (**(code **)(*param_2 + 0x10))(&local_38,param_2,local_58,local_4c,local_48,0);
        plVar2 = local_38;
        *param_1 = (long)local_38;
        local_38 = (long *)0x0;
        if (plVar2 == (long *)0x0) {
          local_7c = 0;
          local_78 = 0;
        }
        else {
          local_7c = (int)plVar2[2];
          local_78 = *(int *)((long)plVar2 + 0x14);
        }
        local_70 = (long *)0x0;
                    /* try { // try from 0033401f to 00334031 has its CatchHandler @ 00334162 */
        (**(code **)(*plVar2 + 0x38))(plVar2,local_98,0,0,1);
        if (local_4c == local_7c) {
          if (local_48 == local_78) {
            if ((local_50 == local_80) && (local_58 == local_88)) {
              if (0 < local_48) {
                lVar6 = 1;
                iVar3 = local_4c;
                while( true ) {
                  memcpy((long *)((long)local_84 * (lVar6 + -1) + (long)local_98[0]),
                         (void *)((long)local_54 * (lVar6 + -1) + local_68[0]),
                         (long)iVar3 * (long)local_50);
                  if (local_78 <= lVar6) break;
                  lVar6 = lVar6 + 1;
                  local_50 = local_80;
                  iVar3 = local_7c;
                }
              }
            }
            else {
              uVar5 = (ulong)(local_58 == 3) ^ 3;
              if (local_58 == 2) {
                uVar5 = 1;
              }
              if (local_58 == 1) {
                uVar5 = 0;
              }
              uVar7 = (ulong)(local_88 == 3) ^ 3;
              if (local_88 == 2) {
                uVar7 = 1;
              }
              if (local_88 == 1) {
                uVar7 = 0;
              }
              if (((uVar5 != 3) && ((int)uVar7 != 3)) &&
                 ((code *)(&BitmapDataDetail::
                            convert(juce::Image::BitmapData_const&,juce::Image::BitmapData&)::
                            converterFnTable)[uVar5 * 3 + uVar7] != (code *)0x0)) {
                    /* try { // try from 00334124 to 0033412d has its CatchHandler @ 00334160 */
                (*(code *)(&BitmapDataDetail::
                            convert(juce::Image::BitmapData_const&,juce::Image::BitmapData&)::
                            converterFnTable)[uVar5 * 3 + uVar7])(local_68,local_98);
              }
            }
          }
        }
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 8))();
        }
      }
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 8))();
      }
    }
  }
  return param_1;
}


