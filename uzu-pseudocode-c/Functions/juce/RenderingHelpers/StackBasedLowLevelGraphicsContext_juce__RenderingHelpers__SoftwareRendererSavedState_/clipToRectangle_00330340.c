// Function : clipToRectangle
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00330340
// Prototype: bool clipToRectangle(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, ulong * param_1)
// Body     : 00330340 - 0033065a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToRectangle(juce::Rectangle<int>
   const&) */

bool __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::
clipToRectangle(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
                *this,ulong *param_1)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  long *local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long *local_40;
  undefined1 local_38 [12];
  float fStack_2c;
  float fStack_28;
  
  puVar4 = *(ulong **)(this + 8);
  plVar8 = (long *)*puVar4;
  if (plVar8 != (long *)0x0) {
    plVar5 = (long *)*param_1;
    uVar6 = param_1[1];
    if ((char)puVar4[5] == '\0') {
      if (*(char *)((long)puVar4 + 0x29) != '\0') {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = (long *)0x0;
        uStack_80 = 0;
        local_68 = 1;
        Path::addRectangle((float)(int)plVar5,(float)(int)((ulong)plVar5 >> 0x20),(float)(int)uVar6,
                           (float)(int)(uVar6 >> 0x20),(Path *)&local_88);
        local_38._4_8_ = 0;
        local_38._0_4_ = DAT_005d9038;
        fStack_2c = 0.0;
        fStack_28 = 1.0;
        plVar8 = (long *)*puVar4;
        if (plVar8 != (long *)0x0) {
          if (1 < (int)plVar8[1]) {
                    /* try { // try from 0033047e to 00330485 has its CatchHandler @ 0033065b */
            (**(code **)(*plVar8 + 0x10))(&local_58);
            plVar5 = (long *)*puVar4;
            *puVar4 = (ulong)local_58;
            plVar8 = local_58;
            if (plVar5 != (long *)0x0) {
              plVar7 = plVar5 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              if ((int)*plVar7 == 0) {
                local_58 = plVar5;
                (**(code **)(*plVar5 + 8))();
                plVar8 = (long *)*puVar4;
              }
            }
          }
          fVar11 = 0.0;
          if ((char)puVar4[5] == '\0') {
            fVar11 = *(float *)(puVar4 + 1);
            fVar9 = *(float *)((long)puVar4 + 0xc);
            local_50 = fVar11 * 0.0 + fVar9 * 0.0 + *(float *)(puVar4 + 2);
            fVar2 = *(float *)((long)puVar4 + 0x14);
            fVar3 = *(float *)(puVar4 + 3);
            fVar10 = fVar11 * _DAT_005dd3a0 + fVar9 * fStack_2c;
            fVar11 = fVar11 * _UNK_005dd3a4 + fVar9 * fStack_28;
            local_4c = fVar2 * _UNK_005dd3a8 + fVar3 * fStack_2c;
            local_48 = fVar2 * _UNK_005dd3ac + fVar3 * fStack_28;
            fVar9 = fVar2 * 0.0 + fVar3 * 0.0;
            local_44 = *(float *)((long)puVar4 + 0x1c);
          }
          else {
            local_50 = (float)(int)puVar4[4];
            fVar9 = (float)(int)(puVar4[4] >> 0x20);
            local_44 = 0.0;
            fVar10 = DAT_005d9038;
            local_4c = fStack_2c;
            local_48 = fStack_28;
          }
          local_44 = local_44 + fVar9;
          local_58 = (long *)CONCAT44(fVar11,fVar10);
                    /* try { // try from 00330603 to 00330612 has its CatchHandler @ 0033065b */
          (**(code **)(*plVar8 + 0x38))(&local_40,plVar8,&local_88,&local_58);
          plVar8 = (long *)*puVar4;
          *puVar4 = (ulong)local_40;
          local_40 = plVar8;
          if (plVar8 != (long *)0x0) {
            plVar5 = plVar8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            if ((int)*plVar5 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        uStack_80 = uStack_80 & 0xffffffff;
        free(local_88);
        goto LAB_00330647;
      }
      if (1 < (int)plVar8[1]) {
        (**(code **)(*plVar8 + 0x10))(&local_88,plVar8);
        plVar7 = (long *)*puVar4;
        *puVar4 = (ulong)local_88;
        plVar8 = local_88;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            local_88 = plVar7;
            (**(code **)(*plVar7 + 8))();
            plVar8 = (long *)*puVar4;
          }
        }
      }
      local_88 = plVar5;
      uStack_80 = uVar6;
      auVar12 = Rectangle<int>::transformedBy((Rectangle<int> *)&local_88,(float *)(puVar4 + 1));
      (**(code **)(*plVar8 + 0x20))(&local_88,plVar8,auVar12._0_8_,auVar12._8_8_);
    }
    else {
      plVar7 = local_88;
      if (1 < (int)plVar8[1]) {
        (**(code **)(*plVar8 + 0x10))(&local_88,plVar8);
        plVar7 = (long *)*puVar4;
        *puVar4 = (ulong)local_88;
        plVar8 = local_88;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            local_88 = plVar7;
            (**(code **)(*plVar7 + 8))();
            plVar8 = (long *)*puVar4;
            plVar7 = local_88;
          }
        }
      }
      local_88 = plVar7;
      (**(code **)(*plVar8 + 0x20))
                (&local_88,plVar8,
                 (ulong)(uint)((int)plVar5 + (int)puVar4[4]) |
                 ((ulong)plVar5 & 0xffffffff00000000) + puVar4[4] & 0xffffffff00000000,uVar6);
    }
    plVar8 = (long *)*puVar4;
    *puVar4 = (ulong)local_88;
    if (plVar8 != (long *)0x0) {
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      if ((int)*plVar5 == 0) {
        local_88 = plVar8;
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
LAB_00330647:
  return *puVar4 != 0;
}


