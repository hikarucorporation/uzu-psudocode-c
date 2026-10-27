// Function : layoutTooltipText
// Namespace: juce:detail:LookAndFeelHelpers
// Entry    : 002345b0
// Prototype: undefined layoutTooltipText(LookAndFeelHelpers * this, undefined4 param_1, String * param_2, undefined4 param_3)
// Body     : 002345b0 - 002349c6


/* juce::detail::LookAndFeelHelpers::layoutTooltipText(juce::TypefaceMetricsKind, juce::String
   const&, juce::Colour) */

void __thiscall
juce::detail::LookAndFeelHelpers::layoutTooltipText
          (LookAndFeelHelpers *this,undefined4 param_1,String *param_2,undefined4 param_3)

{
  byte *pbVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  long *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int local_16c;
  undefined1 *local_168;
  undefined1 *puStack_160;
  long *local_158;
  long *local_150;
  long *plStack_148;
  undefined8 local_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 uStack_10a;
  undefined1 *local_f8;
  long lStack_f0;
  long *local_e8;
  long *local_e0;
  long *plStack_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_9a;
  long local_90;
  long local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  void *local_60;
  
  local_190 = &DAT_0061ac58;
  local_188 = 0;
  local_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  local_16c = 0;
  local_184 = 0x200000024;
                    /* try { // try from 002345fd to 00234616 has its CatchHandler @ 002349de */
  FontOptions::FontOptions(DAT_00652e04,(FontOptions *)&local_90,1);
                    /* try { // try from 00234617 to 00234628 has its CatchHandler @ 002349d9 */
  FontOptions::FontOptions((FontOptions *)&local_168,&local_90);
  local_f8 = local_168;
  local_168 = &DAT_0061ac58;
  lStack_f0 = (long)puStack_160;
  puStack_160 = &DAT_0061ac58;
  local_e8 = local_158;
  local_158 = (long *)0x0;
  local_e0 = local_150;
  plStack_d8 = plStack_148;
  local_d0 = local_140;
  local_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  local_140 = 0;
  local_c8 = local_138;
  uStack_c0 = uStack_130;
  local_b8 = local_128;
  local_138 = (void *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_b0 = CONCAT44(uStack_11c,param_1);
  uStack_9a = uStack_10a;
                    /* try { // try from 002346ca to 002346d9 has its CatchHandler @ 002349d4 */
  local_120 = param_1;
  Font::Font((Font *)&local_198,(long *)&local_f8);
  local_168 = (undefined1 *)CONCAT44(local_168._4_4_,param_3);
                    /* try { // try from 002346df to 00234743 has its CatchHandler @ 002349e3 */
  juce::String::operator+=((String *)&local_190,param_2);
  pcVar7 = *(char **)param_2;
  uVar10 = 0;
  do {
    cVar4 = *pcVar7;
    if (cVar4 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar7 + 1);
        pcVar7 = pcVar7 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar7 = pcVar7 + 1;
      if (cVar4 == '\0') {
        (anonymous_namespace)::appendRange
                  ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)
                   &uStack_178,uVar10,(long *)&local_198,(uint *)&local_168);
        if (local_198 != (long *)0x0) {
          LOCK();
          plVar5 = local_198 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*local_198 + 8))();
          }
        }
        plVar5 = local_e0;
        plVar2 = plStack_d8;
        if (local_c8 != (void *)0x0) {
          operator_delete(local_c8);
          plVar5 = local_e0;
          plVar2 = plStack_d8;
        }
        for (; plVar6 = plStack_d8, plVar5 != plStack_d8; plVar5 = plVar5 + 1) {
          piVar11 = (int *)(*plVar5 + -0x10);
          plStack_d8 = plVar2;
          if (piVar11 != &emptyString) {
            LOCK();
            iVar3 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              operator_delete__(piVar11);
            }
          }
          plVar2 = plStack_d8;
          plStack_d8 = plVar6;
        }
        plStack_d8 = plVar2;
        if (local_e0 != (long *)0x0) {
          operator_delete(local_e0);
        }
        if (local_e8 != (long *)0x0) {
          LOCK();
          plVar5 = local_e8 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*local_e8 + 8))();
          }
        }
        piVar11 = (int *)(lStack_f0 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar3 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            operator_delete__(piVar11);
          }
        }
        piVar11 = (int *)(local_f8 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar3 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar5 = local_78;
        if (local_60 != (void *)0x0) {
          operator_delete(local_60);
          plVar5 = local_78;
        }
        for (; plVar5 != local_70; plVar5 = plVar5 + 1) {
          piVar11 = (int *)(*plVar5 + -0x10);
          if (piVar11 != &emptyString) {
            LOCK();
            iVar3 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              operator_delete__(piVar11);
            }
          }
        }
        if (local_78 != (long *)0x0) {
          operator_delete(local_78);
        }
        if (local_80 != (long *)0x0) {
          LOCK();
          plVar5 = local_80 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*local_80 + 8))();
          }
        }
        piVar11 = (int *)(local_88 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar3 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            operator_delete__(piVar11);
          }
        }
        piVar11 = (int *)(local_90 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar3 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            operator_delete__(piVar11);
          }
        }
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined4 *)(this + 0x18) = 9;
                    /* try { // try from 002348e4 to 002348f8 has its CatchHandler @ 002349c7 */
        TextLayout::createLayoutWithBalancedLineLengths
                  (DAT_005de47c,(TextLayout *)this,(ulong *)&local_190);
        if (0 < local_16c) {
          lVar8 = 8;
          lVar9 = 0;
          do {
            plVar5 = *(long **)(CONCAT44(uStack_174,uStack_178) + lVar8);
            if (plVar5 != (long *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
            lVar9 = lVar9 + 1;
            lVar8 = lVar8 + 0x18;
          } while (lVar9 < local_16c);
        }
        local_16c = 0;
        free((void *)CONCAT44(uStack_174,uStack_178));
        piVar11 = (int *)(local_190 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar3 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            operator_delete__(piVar11);
          }
        }
        return;
      }
    }
    uVar10 = uVar10 + 1;
  } while( true );
}


