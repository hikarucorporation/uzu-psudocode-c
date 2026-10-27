// Function : getIntersectionsWith
// Namespace: juce:detail:RangedValues_juce__Font_
// Entry    : 002404e0
// Prototype: undefined getIntersectionsWith(Ranges * param_1, long * param_2, long param_3, long param_4)
// Body     : 002404e0 - 0024076e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::RangedValues<juce::Font>::getIntersectionsWith(juce::Range<long long>) const */

void __cdecl
juce::detail::RangedValues<juce::Font>::getIntersectionsWith
          (Ranges *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *local_80;
  long *local_78;
  long *plStack_70;
  undefined8 local_68;
  long *local_58;
  ulong *local_50;
  ulong *local_48;
  ulong *local_40;
  
  Ranges::getIntersectionsWith(&local_48,(long *)*param_2,(long *)param_2[1],param_3,param_4);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  local_68 = 0;
  local_50 = local_40;
  if (local_48 != local_40) {
    puVar10 = local_48;
    local_58 = param_2;
    do {
      uVar2 = *puVar10;
      plVar3 = (long *)*local_58;
      uVar6 = local_58[1] - (long)plVar3;
      plVar7 = plVar3;
      if (0 < (long)uVar6) {
        uVar9 = uVar6 >> 4;
        do {
          uVar4 = uVar9 >> 1;
          uVar5 = uVar4;
          if (plVar7[uVar4 * 2 + 1] <= (long)uVar2) {
            uVar5 = ~uVar4 + uVar9;
            plVar7 = plVar7 + uVar4 * 2 + 2;
          }
          uVar9 = uVar5;
        } while (0 < (long)uVar5);
      }
      if ((plVar7 != (long *)local_58[1]) && (*plVar7 <= (long)uVar2)) {
        uVar6 = (long)plVar7 - (long)plVar3;
      }
      uVar9 = puVar10[1];
      plVar3 = *(long **)(local_58[3] + ((long)uVar6 >> 1));
      if (plVar3 != (long *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
                    /* try { // try from 0024062a to 0024063a has its CatchHandler @ 0024076f */
      local_78 = plStack_70;
      Ranges::set(param_1,uVar2,uVar9,&local_78);
      if (((long)plStack_70 - (long)local_78 != 0) &&
         (lVar8 = ((long)plStack_70 - (long)local_78) / 0x30, lVar8 != 0)) {
        lVar8 = lVar8 * 0x30;
        plVar7 = local_78;
        do {
          if (plVar3 != (long *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_80 = plVar3;
          if ((char)plVar7[5] == '\0') {
            std::vector<juce::Font,std::allocator<juce::Font>>::_M_insert_rval
                      ((vector<juce::Font,std::allocator<juce::Font>> *)(param_1 + 0x18),
                       (long *)(*plVar7 * 8 + *(long *)(param_1 + 0x18)),(long *)&local_80);
          }
          else {
                    /* try { // try from 002406d0 to 002406f8 has its CatchHandler @ 0024078f */
            applyOperation((RangedValues<juce::Font> *)param_1,plVar7);
          }
          if (local_80 != (long *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*local_80 + 8))();
            }
          }
          plVar7 = plVar7 + 6;
          lVar8 = lVar8 + -0x30;
        } while (lVar8 != 0);
      }
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
      plStack_70 = local_78;
      puVar10 = puVar10 + 2;
    } while (puVar10 != local_50);
    if (local_78 != (long *)0x0) {
      operator_delete(local_78);
    }
  }
  if (local_48 != (ulong *)0x0) {
    operator_delete(local_48);
  }
  return;
}


